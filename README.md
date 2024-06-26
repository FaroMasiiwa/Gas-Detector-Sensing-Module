# Gas-Detector-Sensing-Module
### Arduino Gas Detection Sensor Module with SMS Alert and Alarm

This repository provides the hardware design, software code, and instructions for building a gas detection sensor module compatible with Arduino boards. The module effectively detects gas leaks and triggers a multi-pronged response to ensure safety:

- Real-time Gas Level Monitoring: Continuously monitors the environment for the presence of gas and provides real-time readings on an LCD display.
- SMS Notification: In the event of a gas leak exceeding a pre-defined threshold, the module sends an SMS alert to a designated phone number, notifying you of the potential danger remotely.
- Audible Alarm Activation: Triggers a loud and clear alarm to raise immediate awareness within the vicinity, prompting occupants to take necessary precautions.


![Gas Detector_bb](https://github.com/FaroMasiiwa/Gas-Detector-Sensing-Module/assets/103371456/155d1de2-eb34-416c-ab4d-ac368e40efac)

### Key Features:

- Gas Detection: Customizable gas detection for a wide range of gases by selecting an appropriate sensor threshold.
- SMS Alert: Configurable SMS notification to a specified phone number upon exceeding gas level thresholds.
- Alarm Activation: Loud alarm sounds to alert people nearby of a potential gas leak.

### Applications:

- Home Safety: Enhance your home's safety by monitoring for gas leaks (e.g., natural gas, propane) and triggering alerts to prevent potential hazards.
- Industrial Monitoring: Integrate this module into industrial settings to detect gas leaks in factories, warehouses, or other environments with potential risks.
- Environmental Monitoring: Utilize the module for environmental monitoring applications, such as tracking air quality in greenhouses or laboratories.

### Getting Started:

#### Hardware Requirements:
- 1 x Arduino Uno
- 1x Gas detection sensor
- 1 x GSM module (for SMS functionality)
- 1 x Buzzer
- 2 x 220 Ohm Resistors
- 3 x 10,000 Ohm resistors
- 1 x LCD Screen Display
- 2 x LED Light Bulb
- Jumper Cables
- 1 x 5V DC power source
- 1 x 12V DC Power Source
- 1x Lm2596 Dc-DC buck converter
  
### Software Installation:
1. Download the Arduino IDE (https://www.arduino.cc/)
2. Install necessary libraries (LiquidCrystal_I2C.h & SoftwareSerial.h)

### Assembly:
Follow the detailed assembly instructions provided in the repository.

#### Customization:
##### Configure the code to:
1. Set the gas detection threshold
2. Specify the SMS recipient's phone number
3. Adjust alarm parameters (tone, volume)


##### Upload and Test:
1. Compile and Upload the code to your Arduino Uno
2. Test the gas detection, SMS sending, and alarm activation functionalities


Additional Considerations:

1. Cellular Network Coverage: Ensure your GSM module has a reliable cellular network connection for successful SMS delivery.
2. Safety Precautions: Exercise caution when working with gas leaks. Ensure proper ventilation and follow recommended safety protocols.

By following these guidelines and leveraging the resources in this repository, you can construct a robust gas detection sensor module with SMS notification and alarm functionality for your Arduino projects.

https://drive.google.com/file/d/12iAOYMpSoBIayZvwHM5AN6dp4DKFI71X/view?usp=sharing
