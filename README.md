# arduino-pir-alarm
# Arduino PIR Motion Alarm 🚨

My second GitHub project! This repository contains the code and circuit diagram for an automated motion detection alarm system built with an Arduino Uno. 

## ⚙️ How It Works
The system uses a Passive Infrared (PIR) sensor to monitor for movement. The sensor outputs a digital signal (`HIGH` or `LOW`) which is continuously read by the Arduino using `digitalRead()`. If motion is detected (`value == 1`), the Arduino triggers two outputs simultaneously via `digitalWrite()`: it illuminates a warning LED and activates a piezo buzzer to sound an alarm. 

## 🛠️ Components Used
* 1x Arduino Uno R3
* 1x PIR Motion Sensor
* 1x Piezo Buzzer
* 1x Red LED
* 1x 220Ω Resistor
* Jumper Wires

## 💻 The Code
This project demonstrates fundamental `if` statement logic to control hardware states. Check out the `.ino` file for the clean C++ script!

## 📸 Circuit Diagram
![Circuit Diagram](#arduino-pir-alarm.png)
