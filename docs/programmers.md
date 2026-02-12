# ESP32 BIOS - Guide for Programmers / Game Developers

This guide shows how to create your own games or applications using the ESP32 BIOS.
It provides reference examples and rules for integration, **not step-by-step instructions**.


---

## 1. Example Applications
- Name: DemoGame
- Description: Simple game using BIOS GPIO input
- Features:
  - GPIO API usage
  - Text/graphics output
  - Partial-display-update feature
 
- Notes:
  - Your game can implement new mechanics, visuals, and interactions, but should use correspodning BIOS API, depending on the type of your app.
  - There is an official list of games, that links to your github repository, if your game is there - you can get a sign for your game - this means no warning splash screen (if its a flash game); **WILL BE IMPLEMENTED SOON**

---

## 2. Rules / Guidelines for Custom Applications
1. Use BIOS APIs to interact with hardware; do not bypass.
2. Keep your application separate from BIOS source; they are separate files - do not modify the BIOS if you want to build just an application.
3. Document your game and share it in your fork or branch, giving credit to the BIOS.
4. If any of theese rules are not followed, your app or game wouldn't have a chance in getting onto the official list.
---

## 3. Disclaimer
Applications built using the BIOS are the responsibility of their creators.
The authors provide BIOS and reference applications “as-is” and are not liable
for legal, safety, or regulatory issues.
