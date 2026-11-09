# ⚡ Electronics Fundamentals, Power Electronics & Laboratory Prototypes
### أساسيات الإلكترونيات، إلكترونيات القدرة والأنظمة المعملية التطبيقية

[![Arduino](https://img.shields.io/badge/Platform-Arduino-00979D?logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![MATLAB & Simulink](https://img.shields.io/badge/Simulation-MATLAB%20%2F%20Simulink-E16724?logo=mathworks&logoColor=white)](https://www.mathworks.com/products/simulink.html)
[![Proteus ISIS](https://img.shields.io/badge/EDA-Proteus%20ISIS-00599C)](https://www.labcenter.com/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Status: Complete](https://img.shields.io/badge/Status-Completed-success.svg)]()

**Author:** [Eng. Amjad Al-Alofi](https://github.com/AmjadMechatronix)  
**Field:** Mechatronics Engineering | Power Electronics | Embedded Systems  

---

## 📌 Overview

This repository represents an engineering portfolio documenting foundational and applied projects across **Analog & Digital Electronics**, **Power Electronics Switching & Inverters**, and **Regulated Electrical Power Supplies**. 

It bridges theoretical circuit analysis with practical hardware implementation, containing:
* Comprehensive circuit schematics and PCB designs (up to 600 DPI manufacturing layouts).
* Full simulation models in **Proteus ISIS** and **MATLAB / Simulink**.
* Embedded C/C++ firmware for **Arduino** implementing precise firing angles and PWM inverter gating signals.
* High-resolution documentation and photographic logs of physical hardware lab builds and testing.

---

## 📑 Table of Contents

- [Project Architecture](#-project-architecture)
- [Modules & Engineering Systems](#-modules--engineering-systems)
  - [1. Power Electronics & Inverter Control (`project/`)](#1-power-electronics--inverter-control)
  - [2. Applied Analog & Digital Electronics (`الكترونيات/`)](#2-applied-analog--digital-electronics)
  - [3. Electrical Power Systems & Supplies (`كهربائية/`)](#3-electrical-power-systems--supplies)
- [Hardware & Software Stack](#-hardware--software-stack)
- [Getting Started & Simulation](#-getting-started--simulation)
- [Author & License](#-author--license)

---

## 🗂 Project Architecture

```plaintext
Electronics_Fundamentals_and_Notes/
├── project/                               # Power Electronics Inverter & SCR Control
│   ├── IN.slx                             # MATLAB Simulink Inverter Model
│   ├── with_Arduin.slx                    # Inverter co-simulation with Arduino control
│   ├── Inverter.DSN                       # Proteus ISIS Full-Bridge Inverter Schematic
│   ├── INv/                               # Arduino Inverter Square-Wave PWM Firmware
│   │   └── INv.ino                        # 50 Hz Complementary Switching Algorithm
│   └── Thyristor/                         # Arduino SCR Firing Angle Control Firmware
│       └── Thyristor.ino                  # Alpha = 45° Phase Delay Trigger Generator
│
├── الكترونيات/                            # Analog & Digital Electronics Prototypes
│   ├── audio/                             # Multi-stage Audio Amplifier Hardware Logs
│   ├── Control lamp/                      # Electronic Lamp Switching & Triac/Relay Control
│   ├── DIGITAL CLOCK/                     # 7-Segment Logic IC Digital Clock
│   │   ├── 20230928_222039.mp4            # Live Hardware Demonstration Video
│   │   └── Screenshot_...Pinout.jpg       # IC Datasheet & Pinout References
│   ├── مشروع باورالكترونك/                # Physical Power Electronics Lab Bench Prototypes
│   └── مشروع تشغيل لمبه عبر صفقه/         # Acoustic/Clap-Activated Relay Switch Circuit
│
├── كهربائية/                              # Electrical Power Supplies & Chargers
│   ├── Charger/                           # DC Battery Charger Hardware & Assembly
│   └── power supply/                      # Precision Linear DC Regulated Power Supply
│       ├── POWER SUPPLY CIRCUIT-1.pdf     # Primary Circuit Schematic
│       └── Our power supply/              # PCB Manufacturing Documents
│           ├── 600 DPI++.pdf              # 600 DPI High-Resolution PCB Mask
│           └── 600DPI.docx                # Fabrication & Component Layout Specifications
│
└── .gitignore                             # Clean repository tracking filters
```

---

## ⚙ Modules & Engineering Systems

### 1. Power Electronics & Inverter Control
Located in [`project/`](file:///project/):
* **Single-Phase Full-Bridge Inverter**:
  * Designed in Proteus (`Inverter.DSN`) and MATLAB/Simulink (`IN.slx`, `with_Arduin.slx`).
  * Gating pulses generated via Arduino for high-side/low-side MOSFET drivers operating at $50\text{ Hz}$ ($T = 20\text{ ms}$).
* **SCR / Thyristor Phase-Angle Firing Control**:
  * Precision delay calculations in `Thyristor.ino`:
    $$\alpha_{\text{start}} = \frac{\alpha \times T}{360^{\circ}}$$
  * Configured for a $45^\circ$ firing angle with synchronized alternating gate triggers for pairs $(T_{1}, T_{2})$ and $(T_{3}, T_{4})$.

### 2. Applied Analog & Digital Electronics
Located in [`الكترونيات/`](file:///الكترونيات/):
* **Digital 7-Segment Clock**:
  * Discrete logic IC implementation (counters, BCD-to-7-segment decoders).
  * Direct multiplexed display driver with verified real-time operation (includes video documentation).
* **Acoustic Clap-Activated Switch**:
  * Condenser microphone signal acquisition, transistor pre-amplification, comparator/bistable multivibrator triggering, and opto-isolated relay driver for mains AC lamp control.
* **Audio Power Amplification**:
  * Push-pull audio amplifier stage with frequency filtering, low harmonic distortion, and speaker impedance matching.

### 3. Electrical Power Systems & Supplies
Located in [`كهربائية/`](file:///كهربائية/):
* **Linear Regulated DC Power Supply**:
  * Full step-down transformation, bridge rectification, capacitor reservoir filtering, and active regulation.
  * Production-ready PCB masks at **600 DPI** resolution ready for photolithography / toner transfer.
* **Multi-stage Battery Charger**:
  * Regulated current/voltage charging profile designed to maintain battery chemistry safety and operational lifetime.

---

## 🛠 Hardware & Software Stack

| Domain | Technologies & Tools |
| :--- | :--- |
| **Microcontrollers** | Arduino Uno (ATmega328P), Arduino Mega 2560 |
| **EDA & Simulation** | Proteus ISIS 8.x, MATLAB Simulink, EasyEDA |
| **Power Components** | Power MOSFETs, SCRs (Thyristors), Optocouplers (4N35, MOC3021), Triacs |
| **Analog / Digital ICs**| Op-Amps (LM358, LM741), Timers (NE555), Decade Counters (CD4017 / 74LS90) |
| **Programming** | C / Embedded C++, MATLAB Scripting |

---

## 🚀 Getting Started & Simulation

### Simulating the Inverter in Proteus:
1. Open [`project/Inverter.DSN`](file:///project/Inverter.DSN) in Proteus ISIS.
2. Ensure the microcontroller is loaded with the compiled binary from [`project/INv/`](file:///project/INv/).
3. Run the transient simulation to observe the alternating AC output voltage waveforms across the load.

### Running the Arduino Sketches:
1. Open [`project/Thyristor/Thyristor.ino`](file:///project/Thyristor/Thyristor.ino) or [`project/INv/INv.ino`](file:///project/INv/INv.ino) in the Arduino IDE.
2. Select target board: **Arduino Uno** (or **Mega 2560**).
3. Connect the trigger pins (Pins 10 & 11) to gate driver optocouplers.
4. Verify gate trigger delay with an oscilloscope.

---

## 📜 License & Credits

Developed by **Amjad Al-Alofi** ([@AmjadMechatronix](https://github.com/AmjadMechatronix)).  
This project is open-source and licensed under the [MIT License](LICENSE).
