# RoomTemperatutre


The Room Monitoring System is done with the amalgama5on of IoT and AJAX. A Room Monitoring System using IoT, AJAX and DHT11 sensor can measure and display the temperature and humidity of a room on a web page. The system consists of an Arduino board, a DHT11 sensor, a Wi-Fi module and a web server. The Arduino collects the sensor data and sends it to the web server via Wi-Fi, where it can be accessed by any device with a browser.


# Implementation

• Connect Node MCU AND DHT 11 sensor on the breadboard using wires.
• ‘+’ pin of DHT 11 sensor should be connected to VIN pin of the Node MCU
• ‘-’ pin of DHT 11 sensor should be connected to GND pin of the Node
MCU
• ‘out’ pin of DHT 11 sensor should be connected to D1 pin of the Node
MCU
• Connect the Node MCU to the PC with the help of USB.
• Install necessary drivers and libraries from Arduino IDE.
• Put the respec5ve Wi-Fi name and password in the code.
• Select appropriate ports and verify, and upload the code.
• Open Serial Monitor aTer uploading the code.
• Enter the IP address of the Node MCU which we got from Serial Monitor,
in any browser of the mobile which provided the Hotspot.
• ATer entering the IP address in the browser, we’ll be able to see the
temperature and humidity in the room.
• As we have used AJAX, the temperature and humidity gets changed
dynamically depending on the surroundings.
