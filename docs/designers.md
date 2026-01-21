# ESP32 BIOS - Guide for Device Designers

This guide shows how to create your own device using the ESP32 BIOS,
based on reference examples. It does **not** provide step-by-step assembly instructions,
but demonstrates structure, components, and BIOS usage patterns.

---

## 1. Reference Device (Example)
- Name: Portable Console
- Description: Portable, easy to use console.
- Features:
  - Full color rgb screen
  - 4 Side buttons
  - Joystick
- Components:
  - ESP32-S3 Dev Kit
  - 6 Push buttons
  - Analog Joystick
  - 2.8" SPI TFT Display
    
- Notes:
  - All connections and modifications are the responsibility of the designer
  - Use this as a template for your own custom device
  - For enthusiasts ease, make detailed tutorials on how to assemble your device

---

## 2. Rules / Guidelines for Custom Devices
1. Always interface with hardware **through BIOS functions**; do not bypass.
3. Keep core BIOS files intact; modifications should be in separate modules.
4. Your device can differ in form, components, and features, but should respect power limits and pin conventions shown in the reference.
5. Document your device and share it in your fork or branch, giving credit to the BIOS.
6. If any of theese rules are not followed, your device wouldn't have a chance in getting onto the official list.

---

## 3. Disclaimer
All devices built using the BIOS are the responsibility of their creators.
The authors provide BIOS and reference devices “as-is” and are not liable
for legal, safety, or regulatory issues.
