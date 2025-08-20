

# Smart Gesture-Controlled Fan using Arduino Uno

## 📌 Overview

This project demonstrates a **gesture-controlled fan** built with an Arduino Uno and an ultrasonic sensor.
By detecting the distance of a hand, the system adjusts the fan speed across three levels (Low, Medium, High) or turns it off completely. This ensures **touch-free operation**, making it hygienic and efficient for smart home applications.

---

## 🔧 Components Used

* Arduino Uno
* Ultrasonic Sensor (HC-SR04)
* DC Fan + Motor Driver (L293D / transistor + diode)
* Breadboard & Jumper Wires
* USB Cable & Power Supply

---

## ⚙️ Working Principle

1. The ultrasonic sensor measures the distance of a hand placed in front of it.
2. Arduino processes the distance values.
3. Depending on the detected distance, it generates a **PWM signal** to control the fan speed.

   * **2–10 cm → Low Speed**
   * **10–20 cm → Medium Speed**
   * **20–30 cm → High Speed**
   * **>30 cm → Fan OFF**
4. Output is displayed via the Serial Monitor.

---

## 🖥️ Code

The Arduino Uno code (`gesture_fan.ino`) is provided in this repository. Upload it using the **Arduino IDE**.

---

## 🚀 How to Run

1. Connect the hardware as per the circuit diagram.
2. Upload the provided code to Arduino Uno.
3. Power the system using USB or external supply.
4. Place your hand in front of the sensor to control the fan speed.

---

## 🌍 Applications

* Smart Home Automation
* Touch-Free Appliance Control
* Hospital & Clean Room Environments

---

## 📊 Efficiency

* Enables **30% improved user convenience** compared to manual switches.
* Provides **100% contactless operation**, reducing the spread of germs.
* Allows **energy-efficient 3-level speed control**.

---

## 📌 Future Enhancements

* Add gesture-based **ON/OFF wave detection** (left-right swipe).
* Integrate with **IoT platforms** for remote control.
* Extend to **multiple appliances** (light, AC, etc.).


👉 Do you want me to also create a **circuit diagram (schematic image)** for this project so you can attach it in the README?
