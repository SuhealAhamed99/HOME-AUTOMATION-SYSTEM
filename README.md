# HOME-AUTOMATION-SYSTEM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: N.SUHEAL AHAMED

*INTERN ID*: CT04DM815

*DOMAIN*: Internet Of Things

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

💡 Task 2: Home Automation System 
This IoT project demonstrates how to control multiple home appliances such as lights and a fan using the Blynk IoT platform and ESP32 microcontroller. Devices can be operated remotely from a smartphone via the Blynk app or manually through physical push buttons.

📲 Overview

 The ESP32 controls three devices:

 🔴 Red LED → GPIO2

 🟢 Green LED → GPIO4

 🌬️ Fan (simulated using Servo motor) → GPIO5

Each device is linked to Blynk virtual pins:

 🔹 V0 → Red LED

 🔹 V1 → Green LED

 🔹 V2 → Fan (Servo Motor)

✅ When a user presses a button in the Blynk app:

  🔸 The ESP32 receives the command via Wi-Fi
  
  🔸 The corresponding device is turned ON or OFF
  
  🔸 The status is printed to the Serial Monitor

✅ When a physical push button is pressed:

  🔸 The ESP32 toggles the device
  
  🔸 Updates the Blynk app for real-time synchronization

🧰 Components Used

 📦 ESP32 Dev Board

 💡 Red LED

 💡 Green LED

 ⚙️ Servo Motor (for Fan control)

 🔘 3x Push Buttons

 🔌 Jumper Wires
 
 📱 Blynk IoT App

 🧪 Wokwi Simulator (for testing without hardware)

⚙️ Features

 ✅ Control multiple devices via smartphone and physical buttons

 ✅ Real-time synchronization between manual and remote controls

 ✅ Serial Monitor displays current device status

 ✅ Fully functional over Wi-Fi

 ✅ Can be simulated in Wokwi for demonstration

🔌 Connections

 🔧 Device	 → ⚡ ESP32 Pin
 
 🔴 Red LED	→ GPIO2

 🟢 Green LED	→ GPIO4

 🌬️ Fan (Servo) → 	GPIO5

 🔘 Red Button	→ GPIO14

 🔘 Green Button → GPIO13

 🔘 Fan Button	→ GPIO12

📱 Blynk Configuration

 🏷️ Template Name: Home Automation System Task 2

 🆔 Template ID: TMPL3h4qbt_Ap

 🔐 Auth Token: GuEgdGUGeu7dVqBLerqPA9bgImlcq7Gb

📲 Virtual Pins:

  🔹 V0 → Red LED
  🔹 V1 → Green LED
  🔹 V2 → Fan (Servo Motor)

 🔘 Widget Mode: All buttons set to Switch (ON/OFF)

🖼️ Output Preview

 📷 Circuit diagram from Wokwi

 📱 Screenshots of the Blynk app with buttons

 💡 ON/OFF simulation images

 🖥️ Serial Monitor output logs

 ![Image](https://github.com/user-attachments/assets/465fc555-28bb-44f4-8f66-cd27ad222bc3)

![Image](https://github.com/user-attachments/assets/75fa993f-c3ae-4546-a51b-47e761912e60)

![Image](https://github.com/user-attachments/assets/c6b8b26e-e93c-441a-9c93-d6ac1d8c4a7c)
![Image](https://github.com/user-attachments/assets/21120014-21da-4de4-8273-f2113a12e490)
![Image](https://github.com/user-attachments/assets/9524791b-f998-4705-8033-daa416cdf20a)
![Image](https://github.com/user-attachments/assets/e3cd3cf7-2e63-4f23-ada4-ef9d608f0169)
![Image](https://github.com/user-attachments/assets/e77d3590-38c9-4d56-8215-6ce522974ec9)
![Image](https://github.com/user-attachments/assets/4a99560a-15c1-4029-a728-fe7810def64a)
