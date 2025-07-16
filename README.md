# PROJECT-ARDUINO
in this project you will see how i creat a project of comminication via wifi betwen tow carte wemose D1 R1 and we can use wifi to communicate between to this device because it seporte the module ESP8266
🔧 Project Description: Wireless Communication between Two Arduino Boards using ESP8266 (Client-Server Model)
This project demonstrates bidirectional communication between two Arduino boards using ESP8266 Wi-Fi modules, enabling remote control of a servo motor and LEDs through infrared (IR) signal detection.

📡 System Overview
The system is composed of two Arduino boards, each connected to an ESP8266 Wi-Fi module.

One Arduino board acts as a client, and the other as a server.

Processing software is used as an intermediate layer on the PC to manage and visualize the communication.

🧩 Components Used
Arduino Client Side:
🔴 LED1

🟡 LED2

🔊 Buzzer

📶 IR Sensor (for detection)

📡 ESP8266 Wi-Fi module

🟢 Arduino Uno

Arduino Server Side:
🟢 LED

🔁 Servo Motor

📡 ESP8266 Wi-Fi module

🟢 Arduino Uno

Communication:
🧠 Processing (Client & Server applications running on PC)

🔗 Communication over localhost (127.0.0.1) between client and server

⚙️ How it Works
The IR sensor on the client-side Arduino detects a signal (e.g., from a remote).

When triggered:

LED1 and LED2 turn ON.

The buzzer sounds.

A signal is sent over Wi-Fi via the ESP8266.

The data goes through the Processing client and is forwarded to the Processing server via the localhost IP.

The server sends the signal to the server-side Arduino via serial communication.

On reception:

The servo motor rotates.

A status LED turns ON.

💻 Software Architecture
[Arduino Client] --> [Processing Client] --> 127.0.0.1 --> [Processing Server] --> [Arduino Server]
Arduino sketches handle the hardware control (IR, LEDs, Servo, etc.)

Processing code handles serial communication and acts as a bridge between the two Arduinos

📍 Applications
Remote automation using IR detection

Simple IoT communication simulation

Learning client-server models with Arduino + Wi-Fi

Control systems in embedded electronics

