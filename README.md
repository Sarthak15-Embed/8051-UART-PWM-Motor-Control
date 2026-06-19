# 🚗 DC Motor Speed and Direction Control using UART and PWM (8051)

![C Language](https://img.shields.io/badge/Language-C-blue)
![8051 Microcontroller](https://img.shields.io/badge/Microcontroller-8051-orange)
![UART Communication](https://img.shields.io/badge/Protocol-UART-green)
![Embedded Systems](https://img.shields.io/badge/Domain-Embedded%20Systems-red)

---

## 📖 Project Overview

This project demonstrates **DC Motor Speed and Direction Control using UART Communication** on the **8051 Microcontroller**.

The system consists of a UART Transmitter (TXD) and UART Receiver (RXD). Commands are transmitted serially between microcontrollers. The receiver controls the speed and direction of a DC motor through an **L293D Motor Driver** using **PWM (Pulse Width Modulation)**.

The project is implemented in **Embedded C** and simulated using **Proteus Design Suite**.

---

## ✨ Features

✅ UART Communication between TXD and RXD

✅ PWM-Based Motor Speed Control

✅ Forward and Reverse Direction Control

✅ L293D Motor Driver Interface

✅ Embedded C Implementation

✅ Real-Time Serial Communication

✅ Proteus Simulation Support

✅ Modular TXD and RXD Firmware

---

## 🔧 Hardware Requirements

| Component          | Description          |
| ------------------ | -------------------- |
| AT89C51 / AT89S52  | 8051 Microcontroller |
| L293D              | Motor Driver IC      |
| DC Motor           | Motor Load           |
| Virtual Terminal   | UART Communication   |
| Crystal Oscillator | 11.0592 MHz          |
| Power Supply       | 5V                   |

---

## 💻 Software Requirements

* Keil uVision
* Proteus Design Suite
* Embedded C

---

## 🔌 System Architecture

```text
+------------------+
| TXD Controller   |
+------------------+
         |
         | UART Communication
         |
         ▼
+------------------+
| RXD Controller   |
+------------------+
         |
         | PWM + Direction Control
         ▼
+------------------+
|   L293D Driver   |
+------------------+
         |
         ▼
      DC Motor
```

---

## ⚙️ Working Principle

1. The TXD microcontroller sends commands through UART.
2. The RXD microcontroller receives and decodes the commands.
3. Based on the received data:

   * Motor speed is controlled using PWM.
   * Motor direction is changed using L293D inputs.
4. The motor responds instantly to the transmitted command.
5. UART communication provides real-time control of the motor.

---

## 📊 PWM Speed Levels

| Speed Level | Duty Cycle |
| ----------- | ---------- |
| Level 1     | 25%        |
| Level 2     | 50%        |
| Level 3     | 75%        |
| Level 4     | 100%       |

---

## 📡 UART Communication

The TXD controller transmits motor control commands through UART.

The RXD controller receives the commands and performs:

* Motor Speed Control
* Motor Direction Control
* PWM Generation

---

## 🧠 Code Description

### TXD Module

Responsible for:

* UART Transmission
* Sending Control Commands
* User Input Processing

### RXD Module

Responsible for:

* UART Reception
* PWM Generation
* Motor Speed Control
* Motor Direction Control

### PWM Module

Generates variable duty-cycle PWM signals for controlling motor speed.

### Motor Driver Interface

Controls motor rotation using the L293D motor driver.

---

## 📂 Project Structure

```text
8051-UART-PWM-Motor-Control
│
├── README.md
│
├── TXD
│   └── UART Transmitter Firmware
│
├── RXD
│   └── UART Receiver Firmware
│
├── L2935_DC_Motor(UART).pdsprj
│
├── PWM_DC_Motor.png
│
└── Project Backups
```

---

## 🖼 Proteus Simulation

The following image shows the Proteus simulation used for testing UART-based motor control.

![Proteus Simulation](PWM_DC_Motor.png)

---

## 🚀 How to Run

### Step 1

Open the TXD and RXD projects in Keil uVision.

### Step 2

Compile both programs and generate HEX files.

### Step 3

Open Proteus.

### Step 4

Load the corresponding HEX files into the microcontrollers.

### Step 5

Run the simulation.

### Step 6

Transmit commands through UART.

### Step 7

Observe motor speed and direction changes.

---

## 📈 Expected Output

* UART communication between TXD and RXD.
* Smooth PWM-based motor speed control.
* Forward and Reverse motor operation.
* Real-time response to transmitted commands.
* Stable motor control using L293D.

---

## 🔮 Future Improvements

* Bluetooth-Based Motor Control
* LCD Display Integration
* Mobile App Control
* Closed-Loop Speed Control
* IoT Monitoring Dashboard
* PID-Based Speed Regulation

---

## 📚 Learning Outcomes

Through this project, the following embedded concepts are demonstrated:

* UART Communication
* PWM Generation
* Motor Driver Interfacing
* Embedded C Programming
* Firmware Development
* Real-Time Embedded Systems
* Microcontroller Communication

---

## 👨‍💻 Author

**Sarthak Pampattiwar**

Embedded Systems Enthusiast

### Technical Skills

* Embedded C
* 8051
* ARM7 LPC2148
* PIC16F877A
* UART
* SPI
* I2C
* ADC
* PWM
* GPIO
* Interrupt Programming

---

⭐ If you found this project useful, consider giving it a star.
