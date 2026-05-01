# Stepper Motor Driver PCB — ATtiny13A + DRV8825
A compact custom PCB stepper motor driver designed to sit directly on top of a NEMA 17 stepper motor. 
Fully open-source hardware and firmware.

# 📽️ Demo Video
https://www.linkedin.com/posts/saiteja-pulavarthi-08a77874_pcbdesign-electronics-hardwareengineering-ugcPost-7454282546252603392-6Cf-?utm_source=share&utm_medium=member_desktop&rcm=ACoAAA_GgWoBVC5vhgpox3qd95GSbuT_VeuC4Dc

# ⚙️ Components Used
| Component | Value / Part | Purpose |
| ATtiny13A | DIP-8        | Microcontroller |
| DRV8825   | Module       | Stepper Motor Driver |
| LM7805    | TO-220       | 5V Voltage Regulator |
| Capacitor | 10uF, 100nF  | Decoupling |
| Connector | 6-pin(Used-4)| Motor |
| Connector | 2mm-6 pin Wafer Male Connector Through Hole Right Angle| Motor |
| Connector | 12V DC Female Power Supply Jack Socket Connector with Round Panel PCB Mount| Supply |

# 📐 PCB Details
Designed in **KiCad**
Fits directly on top of **NEMA 17** stepper motor
Compact form factor
Double sided

# 📁 Repository Structure
├── firmware/        → ATtiny13A source code
├── hardware/
    ├── schematic/   → KiCad schematic + PDF
    ├── pcb/         → KiCad PCB layout
    └── gerbers/     → Gerber files for fabrication
    
# 📄 License
This project is licensed under the **MIT License** — see the
[LICENSE](LICENSE) file for details.
You are free to use, modify, and distribute this project.
Please give credit if you use it!

# 🙌 Contributing
Pull requests are welcome! If you find a bug or want to improve
the design, feel free to open an issue or submit a PR.

# 📬 Contact
Made by P N R K Sai Teja
