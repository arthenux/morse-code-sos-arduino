# Morse Code SOS Generator (Arduino)

A C++ based emergency signal generator that uses an Arduino to broadcast the universal SOS Morse code signal (... --- ...) through a physical LED.

🚀 Overview

This project demonstrates the use of control loops and timing variables to create a structured communication signal. By using for loops to handle the repetitive "dot" and "dash" sequences, the code remains organized and easy to read for technical reviewers.

🧠 Technical Implementation

* Loop Structures: Uses for loops to efficiently handle the three-part repetition required for each Morse character.
* Variable Timing: Centralized timing variables (dit, dah, longWait) allow for easy calibration of the signal speed without searching through the code.
* Sequence Logic: Implements the standard Morse structure:
    * 3 short flashes (S)
    * Inter-character delay
    * 3 long flashes (O)
    * 3 short flashes (S)


🛠️ Hardware Requirements

* Microcontroller: Arduino Uno (or any Arduino-compatible board)
* LED: 1x Red LED
* Resistor: 1x 220Ω Resistor
* Connection: Breadboard and jumper wires

🔌 Wiring Diagram

Component	Arduino Pin
LED Anode (+)	Digital Pin 8 (via Resistor)
LED Cathode (-)	GND

💻 Installation & Usage

1. Clone the repository:bash git clone https://github.com    
2. Open the morse-code-sos-arduino.ino file in the Arduino IDE.
3. Connect your Arduino board via USB.
4. Select your board type and port under the Tools menu.
5. Click Upload.

📄 License

This project is open-source and available under the MIT License.
