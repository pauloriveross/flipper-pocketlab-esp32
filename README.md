# PocketLab (ESP32 Port)

<div align="center">

<img src="screenshots/demo_v1.5.gif" alt="PocketLab Demo" width="480">

<br/>

**Gamified, on-device interactive learning for Flipper Zero, now on ESP32 development boards.**

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)
[![Target: ESP32-S3](https://img.shields.io/badge/Target-ESP32--S3-orange.svg)](https://github.com/Sor3nt/Flipper-Zero-ESP32-Port)
[![Hardware: LilyGO T-Embed](https://img.shields.io/badge/Hardware-LilyGO%20T--Embed%20CC1101-blueviolet.svg)](https://afel.cl/products/modulo-esp32-s3-t-embed-cc1101-lilygo)

</div>

---

## 🙏 Acknowledgements & Credits

This project is a port and compilation of **PocketLab** for the **Flipper Zero ESP32 ecosystem**. Huge thanks to:

* **[PerfectoWeb (@PerfectoWeb)](https://github.com/PerfectoWeb)**: Original creator of [flipper-pocketlab](https://github.com/PerfectoWeb/flipper-pocketlab), for conceptualizing and developing this fantastic gamified learning platform (interactive labs, quizzes, achievements, progression mechanics, and animations).
* **[@Sor3nt](https://github.com/Sor3nt)**: Author of the [Flipper-Zero-ESP32-Port](https://github.com/Sor3nt/Flipper-Zero-ESP32-Port), enabling Furi OS, the UI canvas, and FAP dynamic loading on ESP32 hardware (LilyGO T-Embed, Waveshare, DIY boards).
* **[Flipper Devices](https://flipperzero.one/)**: For creating the original Flipper Zero platform.

---

## 📚 What is PocketLab?

**PocketLab** is an interactive, on-device learning layer. Instead of reading through static wiki documentation, you learn by doing short hands-on labs, answering randomized quizzes, and unlocking levels, XP, streaks, and custom badges.

### ✨ Key Features:
* 🎓 **36 Hands-on Labs** across 11 tracks:
  * **Infrared (IR):** Protocols, raw learning, and universal remote principles.
  * **Sub-GHz:** Modulations, CC1101 transceiver, frequency analyzer, and RAW capture.
  * **RFID & NFC:** Reading, T5577 cloning, MIFARE key recovery (MFKey32).
  * **iButton, BadUSB, GPIO, and Bluetooth.**
* 🎲 **Randomized Quizzes:** Shuffled questions and distractors prevent position memorization and ensure real comprehension.
* 🧠 **Exam Mode:** Random quiz generated from completed labs to test retention.
* 🏆 **Progression System:** Earn XP, level up (Novice, Apprentice, Explorer... Master), maintain daily streaks, and collect unique badge artwork.
* 🔊 **Rich Feedback:** Acoustic sound notes, RGB LED illumination, and haptic vibration feedback with individual toggles in Settings.
* 🌍 **Dual Languages:** Fully available in **English** and **Russian** (including custom Cyrillic u8g2 fonts).
* 💾 **Persistent State:** Saves progress securely to microSD storage (`/ext/apps_data/pocketlab/state.bin`).

---

## 📸 Screenshots

<div align="center">

| Menu | Labs List | Quiz |
|:---:|:---:|:---:|
| <img src="screenshots/menu.png" width="220"> | <img src="screenshots/labs.png" width="220"> | <img src="screenshots/quiz.png" width="220"> |
| **Profile & XP** | **Badges** | **Level Up** |
| <img src="screenshots/profile.png" width="220"> | <img src="screenshots/achievements.png" width="220"> | <img src="screenshots/levelup.png" width="220"> |

</div>

---

## 🎮 Hardware Compatibility & Controls

This `.fap` binary is compiled for Xtensa LX7 (`xtensa-esp32s3-elf`) and tested on:

* **LilyGO T-Embed ESP32-S3 CC1101**
* **DIY ESP32-S3 development boards** with ST7789 / ILI9341 LCD displays running the Flipper ESP32 Port.
* **Any ESP32-S3 module** running the Flipper Zero ESP32 firmware port.

### Controls (LilyGO T-Embed):
* **Rotary Encoder (Rotate):** Navigate menu items, quiz options, and badge galleries.
* **Center Encoder Button (Click / OK):** Confirm selection, submit quiz answer, or start lab.
* **Side Button (Back):** Go back or exit to the main Flipper desktop.

---

## 🚀 Installation

1. Download **`pocketlab.fap`** from the [`dist/`](dist/pocketlab.fap) folder in this repository.
2. Insert your microSD card into your PC (or use the device in *USB Storage* mode).
3. Copy `pocketlab.fap` into:
   ```text
   /ext/apps/Tools/pocketlab.fap
   ```
4. Safely eject the card and reinsert it into your ESP32 board.
5. Boot the board and navigate to:  
   **Archive ➔ Apps ➔ Tools ➔ PocketLab**

> ⚠️ **Firmware API Requirement:** PocketLab utilizes notification melody notes and custom u8g2 font routines. Make sure your Flipper ESP32 firmware exports these symbols in `firmware_api.c`.

---

## 🛠️ Building from Source

To build or modify PocketLab:

```bash
# From the root directory of Flipper-Zero-ESP32-Port:
python build_fap.py /path/to/flipper-pocketlab --output-dir /path/to/flipper-pocketlab/dist
```

---

## 📄 License

This project retains the original **MIT License**. See [LICENSE](LICENSE) for details.
