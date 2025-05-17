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
