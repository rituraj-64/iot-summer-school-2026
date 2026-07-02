# Room Comfort Management System using ESP32

## Overview

The **Room Comfort Management System** is an IoT-based smart automation project designed to monitor indoor environmental conditions and automatically maintain a comfortable, healthy, and energy-efficient living space.

Using an **ESP32 microcontroller**, the system continuously collects data from multiple sensors, evaluates room conditions using a wellness score, provides recommendations, and automatically controls connected appliances such as fans, lights, exhaust fans, and water pumps.

---

## Objectives

* Monitor indoor environmental conditions in real time.
* Measure temperature, humidity, light intensity, and soil moisture.
* Calculate a wellness score based on sensor readings.
* Provide recommendations for improving room comfort.
* Automate electrical devices based on predefined thresholds.
* Reduce manual intervention through intelligent automation.

---

## Features

* Real-time environmental monitoring
* Temperature and humidity sensing
* Light intensity detection
* Soil moisture monitoring
* Wellness score calculation
* Automatic fan control
* Automatic lighting control
* Automatic exhaust fan operation
* Automatic plant watering
* Intelligent decision-making
* Energy-efficient automation

---

## Hardware Components

* ESP32 Development Board
* DHT11/DHT22 Temperature & Humidity Sensor
* LDR Sensor
* Soil Moisture Sensor
* Relay Module
* DC Fan
* LED Lamp
* Mini Water Pump
* Breadboard
* Jumper Wires

---

## Software Requirements

* Arduino IDE
* ESP32 Board Package
* Blynk (Optional)
* Google Stitch (Optional)

---

## System Architecture

```text
Temperature Sensor
Humidity Sensor
Light Sensor
Soil Moisture Sensor
        │
        ▼
     ESP32 Controller
        │
        ▼
Data Processing & Wellness Analysis
        │
        ▼
     Decision Engine
        │
        ▼
    Relay Control System
        │
        ▼
Fan • Light • Exhaust Fan • Water Pump
```

---

## Working Principle

The ESP32 continuously reads data from all connected sensors and compares the readings with predefined threshold values.

Based on the detected conditions, the system automatically performs actions such as:

* Turning the fan ON when the temperature is high.
* Switching on room lighting when the environment is dark.
* Activating the exhaust fan when humidity is excessive.
* Starting the water pump when soil moisture is low.

A wellness score is calculated to represent the overall comfort level of the room.

---

## Wellness Score

The system starts with a score of **100** and deducts points for unfavorable environmental conditions.

| Condition        | Penalty |
| ---------------- | ------: |
| High Temperature |     -20 |
| Low Humidity     |     -15 |
| High Humidity    |     -15 |
| Low Light        |     -20 |
| Dry Soil         |     -10 |

Higher scores indicate healthier and more comfortable indoor conditions.

---

## Applications

* Smart Homes
* Offices
* Hostels
* Libraries
* Classrooms
* Indoor Gardening
* Smart Building Automation

---

## Future Enhancements

* Mobile Application Integration
* Cloud Data Storage
* Voice Assistant Support
* Machine Learning-Based Predictions
* Weather-Aware Automation
* Energy Optimization
* Air Quality Monitoring

---

## Repository Structure

```text
final_project/
├── README.md
├── report.pdf
├── source_code/
├── circuit_diagram/
├── images/
└── presentation/
```

---

## Author

**Ritu Raj**

IoT Summer School 2026

## License

This project was developed as part of the **IoT Summer School 2026** for educational purposes.