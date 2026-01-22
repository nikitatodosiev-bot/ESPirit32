# ESP32 BIOS - Guide for Programmers / Game Developers

This guide shows how to create your own games or applications using the ESP32 BIOS.
It provides reference examples and rules for integration, **not step-by-step instructions**.

---

## 1. Application \ Game types
There are 2 types of script that you can make:
- 1: .app (applications) Applications, also called "Application Games"
  - Uses Custom pseudo language
  - Easy to make
  - Loads instantly
  - User Can exit into the menu without a restart
  - Is slower, because of a custom language

- 2: .bin (compiled binary files) Games, also called "Flash" Apps
  - Uses native "C" language
  - Can be harder to code
  - Loading takes some time, because system writes your game into flash, then reboots
  - User needs to restart the device to exit
  - Runs faster, because you have more processing power, and less backround tasks
  - Better for games with physics or\and graphics
  - After initial load, (if the user selected to continue playing the game in settings in main menu) on restart of the device, your game can start faster; if you use fast memory, user can continue playing (as if the game was just paused)

---

## 2. Reference Applications (Example)
- Name: DemoGame
- Description: Simple game using BIOS GPIO input
- Features:
  - GPIO API usage
  - Text/graphics output
  - Partial-display-update feature
 
- Name: ComparisonTest
- Description: Comparison between flash games and application games
- Features:
  - Same thing, but coded in 2 different enviroments
  - Stress test with an fps counter

- Notes:
  - Reference only; your game can implement new mechanics, visuals, and interactions, but should use correspodning BIOS API, depending on the type of your app.
  - There is an official list of games, that links to your github repository, if your game is there - you can get a sign for your game - this means no warning splash screen (if its a flash game); **WILL BE IMPLEMENTED SOON**

---

## 3. Rules / Guidelines for Custom Applications
1. Use BIOS APIs to interact with hardware; do not bypass.
2. Keep your application separate from BIOS source; they are separate files - do not modify the BIOS if you want to build just an application.
3. Document your game and share it in your fork or branch, giving credit to the BIOS.
4. Ensure compatibility with reference example as a template, but innovate freely.
5. If any of theese rules are not followed, your app or game wouldn't have a chance in getting onto the official list.

---

## 4. Disclaimer
Applications built using the BIOS are the responsibility of their creators.
The authors provide BIOS and reference applications “as-is” and are not liable
for legal, safety, or regulatory issues.
