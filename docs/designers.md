**ESP32 BIOS - Guide for Device Designers**

This guide combines reference information and practical instructions for creating your own device using the ESP32 BIOS. It is intended for both designers and programmers who want to contribute custom devices. It does **not** provide step-by-step assembly instructions but demonstrates structure, components, and BIOS usage patterns.

---

# 1. Reference Device (Example)
- Name: Portable Console
- Description: Portable, easy-to-use console.
- Features:
  - Full-color RGB screen
  - 4 Side buttons
  - Joystick
- Components:
  - ESP32-S3 Dev Kit
  - 6 Push buttons
  - Analog Joystick
  - 2.8" SPI TFT Display


---

# 2. Device Guidelines

## 2.1 Hardware Interface
- Share a `Config.txt` for your device. It should include at least the following buttons:
  1. `btn_main`
  2. `btn_back`
  3. `btn_next`
  4. `btn_prev`  
  (`btn_next` and `btn_prev` can be replaced with a Joystick, see below)
- All connections and power safety are the responsibility of the designer
- For programmers’ ease, provide detailed tutorials on how to assemble your device
- Your device can differ in form, components, and features — the only limit is your imagination!

## 2.2 Rules
- Document your device and share it in your fork or branch, giving credit to the BIOS.
- Non-compliance with these rules may prevent your device from being included in the official list.

## 2.3 Designer Contract
- Provide clear pin connections for your device to the main board
### SD Card Reader (SPI only):
  - Ensure your card-reader supports SPI and has these labels on its connections:
    - `SCK / CLK`
    - `MISO`
    - `MOSI`
    - `CS`
  - Connections:
    - `SCK/CLK` → `GPIO 12`
    - `MISO` → `GPIO 13`
    - `MOSI` → `GPIO 11`
    - `CS` → `GPIO 10`

---

## 3. Safety and Disclaimer
All devices built using the BIOS are the responsibility of their creators. The authors provide BIOS and reference devices “as-is” and are not liable for legal, safety, or regulatory issues.

---
