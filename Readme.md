# Temperature Monitoring Using ESP32 Microcontroller

An ESP32-based temperature and humidity monitoring project developed using **Wokwi, Visual Studio Code, and PlatformIO**.

![Block diagram](Images/DHT%20Temperature%20Sensor.png)

![ESP32 Pinout and ESP-WROOM-32 Pinout](https://images.theengineeringprojects.com/image/main/2024/03/esp32-pinout.jpg)

## Tools and Technologies

- **ESP32 DevKit V1** — microcontroller platform
- **DHT Sensor** — temperature and humidity measurement
- **Wokwi** — virtual circuit design and simulation
- **Wokwi CLI** — local project initialization
- **Visual Studio Code** — development environment
- **PlatformIO** — firmware development and dependency management
- **Arduino Framework** — embedded C/C++ development

## Project Setup

### 1. Design the Circuit in Wokwi

Create the ESP32 temperature monitoring circuit in [Wokwi](https://wokwi.com/). Save the project and download or extract `diagram.json`, which contains the circuit configuration.

### 2. Initialize the Wokwi Project

Open a terminal in the intended working directory and run:

```bash
wokwi-cli init
```

Follow the prompts to initialize the local Wokwi project. Keep `diagram.json` available for integration into the PlatformIO project.

### 3. Configure PlatformIO Home

Open **Visual Studio Code** and access PlatformIO Home through the PlatformIO icon in the Activity Bar or the available PlatformIO menu.

Ensure PlatformIO is installed and initialized before creating the project.

### 4. Create a New PlatformIO Project

In PlatformIO Home:

1. Select **New Project**.
2. Enter the project name: `TempMonitor`.
3. Select the appropriate ESP32 development board, such as **Espressif ESP32 Dev Module**, if applicable.
4. Select **Arduino** as the framework.
5. Choose the project location.
6. Click **Finish** and allow PlatformIO to generate the project structure and install the required packages.

### 5. Integrate the Wokwi Files

Move or copy the required Wokwi files into the newly created PlatformIO project.

Ensure `diagram.json` and any required configuration files, such as `wokwi.toml`, are placed in the correct locations. Verify the project structure before deleting redundant folders.

### 6. Install Required Libraries

Open the PlatformIO terminal in the project root and run:

```bash
pio pkg install --library "adafruit/DHT sensor library@^1.4.6"
pio pkg install --library "marcoschwartz/LiquidCrystal_I2C@^1.1.4"
pio pkg install --library "adafruit/Adafruit Unified Sensor@^1.1.14"
```

### 7. Compile the Firmware

Run the following command from the project root:

```bash
pio run
```

PlatformIO resolves dependencies and compiles the firmware. Resolve any compilation errors before proceeding to simulation or hardware testing.

## Project Structure

```text
TempMonitor/
├── Images/
│   └── DHT Temperature Sensor.png
├── include/
├── lib/
├── src/
│   └── main.cpp
├── test/
├── diagram.json
├── wokwi.toml
└── platformio.ini
```

*Note: The exact structure depends on your Wokwi configuration. Keep `platformio.ini` at the PlatformIO project root and ensure all image and simulation paths are correct.*

## Learning Objectives

- ESP32 firmware development using embedded C/C++.
- Temperature and humidity sensor integration.
- Circuit design and simulation using Wokwi.
- PlatformIO project creation and dependency management.
- Firmware compilation and preparation for testing.

## Repository

GitHub: [ODARI-CHARLES1/TempMonitor](https://github.com/ODARI-CHARLES1/TempMonitor)

**Author:** Odari K. Charles  
**Focus:** Electrical and Electronics Engineering, Embedded Systems, and IoT
