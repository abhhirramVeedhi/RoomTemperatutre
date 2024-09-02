#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "DHT.h"

// Uncomment one of the lines below for the DHT sensor type you're using!
#define DHTTYPE DHT11
// #define DHTTYPE DHT21
// #define DHTTYPE DHT22

// WiFi credentials
const char* ssid = "OnePlus 7";  // Enter your SSID
const char* password = "12345678";  // Enter your WiFi password

// Create an instance of the ESP8266WebServer on port 80
ESP8266WebServer server(80);

// DHT Sensor setup
const uint8_t DHTPin = D1;  // DHT sensor pin
DHT dht(DHTPin, DHTTYPE);   // Initialize DHT sensor

// Variables to store temperature and humidity values
float temperature;
float humidity;

void setup() {
    Serial.begin(115200);
    delay(100);

    // Start the DHT sensor
    dht.begin();

    // Connect to WiFi
    Serial.println("Connecting to WiFi...");
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }

    Serial.println("\nWiFi connected!");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());

    // Define routes for the web server
    server.on("/", handle_OnConnect);
    server.onNotFound(handle_NotFound);

    // Start the web server
    server.begin();
    Serial.println("HTTP server started");
}

void loop() {
    server.handleClient();  // Handle client requests
}

void handle_OnConnect() {
    temperature = dht.readTemperature();  // Get temperature value
    humidity = dht.readHumidity();        // Get humidity value

    // Send the HTML response with the temperature and humidity data
    server.send(200, "text/html", generateHTML(temperature, humidity));
}

void handle_NotFound() {
    server.send(404, "text/plain", "Not found");
}

// Function to generate the HTML content dynamically
String generateHTML(float temp, float hum) {
    String html = "<!DOCTYPE html><html>";
    html += "<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">";
    html += "<link href=\"https://fonts.googleapis.com/css?family=Open+Sans:300,400,600\" rel=\"stylesheet\">";
    html += "<title>Room Monitoring System</title>";
    html += "<style>html { font-family: 'Open Sans', sans-serif; margin: 0px auto; text-align: center; color: #333; font-weight: bold; }";
    html += "body { margin-top: 50px; }";
    html += ".data { padding: 10px; }";
    html += ".icon { display: inline-block; width: 30px; height: 30px; border-radius: 50%; line-height: 36px; }";
    html += ".text { display: inline-block; padding-left: 15px; font-size: 19px; text-align: left; }";
    html += ".value { font-size: 60px; }";
    html += ".temperature-icon { background-color: #f39c12; }";
    html += ".humidity-icon { background-color: #3498db; }";
    html += "</style></head><body>";
    html += "<h1>Room Monitoring System</h1>";
    html += "<div class=\"data\">";
    html += "<div class=\"icon temperature-icon\"></div>";
    html += "<div class=\"text\">Temperature</div>";
    html += "<div class=\"value\">" + String((int)temp) + "<span>°C</span></div>";
    html += "</div>";
    html += "<div class=\"data\">";
    html += "<div class=\"icon humidity-icon\"></div>";
    html += "<div class=\"text\">Humidity</div>";
    html += "<div class=\"value\">" + String((int)hum) + "<span>%</span></div>";
    html += "</div>";
    html += "<h3>Katpadi, Vellore</h3>";
    html += "</body></html>";
    return html;
}
