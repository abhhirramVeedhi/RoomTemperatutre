# RoomTemperatutre


The Room Monitoring System is done with the amalgama5on of IoT and AJAX. A Room Monitoring System using IoT, AJAX and DHT11 sensor can measure and display the temperature and humidity of a room on a web page. The system consists of an Arduino board, a DHT11 sensor, a Wi-Fi module and a web server. The Arduino collects the sensor data and sends it to the web server via Wi-Fi, where it can be accessed by any device with a browser.


# Implementation

• Connect Node MCU AND DHT 11 sensor on the breadboard using wires.

• ‘+’ pin of DHT 11 sensor should be connected to VIN pin of the Node MCU

• ‘-’ pin of DHT 11 sensor should be connected to GND pin of the Node MCU

• ‘out’ pin of DHT 11 sensor should be connected to D1 pin of the Node MCU

• Connect the Node MCU to the PC with the help of USB. 

• Install necessary drivers and libraries from Arduino IDE.

• Put the respec5ve Wi-Fi name and password in the code.

• Select appropriate ports and verify, and upload the code.

• Open Serial Monitor aTer uploading the code.

• Enter the IP address of the Node MCU which we got from Serial Monitor,in any browser of the mobile which provided the Hotspot.

• ATer entering the IP address in the browser, we’ll be able to see the temperature and humidity in the room.

• As we have used AJAX, the temperature and humidity gets changed dynamically depending on the surroundings.

# Images

<img width="391" alt="image" src="https://github.com/user-attachments/assets/e4db149e-bd3f-48a3-bc26-2659aa107589">


<img width="373" alt="image" src="https://github.com/user-attachments/assets/e0c5435c-1fbd-4b63-bea0-398be9c31439">


<img width="373" alt="image" src="https://github.com/user-attachments/assets/2d5834f1-63f9-4a0a-aae8-2fd0265cba3b">


<img width="185" alt="image" src="https://github.com/user-attachments/assets/a0f806c3-3428-4211-bc32-4a20192187c4">


<img width="184" alt="image" src="https://github.com/user-attachments/assets/482ba0d7-da81-4e57-b16d-b8607a7e461f">


<img width="193" alt="image" src="https://github.com/user-attachments/assets/30e95249-cbb1-4728-a67a-367912e7ece6">


<img width="195" alt="image" src="https://github.com/user-attachments/assets/f26d504d-f4c4-4d3c-b59c-e4d4830e7bdc">

