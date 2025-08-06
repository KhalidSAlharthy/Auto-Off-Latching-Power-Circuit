# Auto-Off-Latching-Power-Circuit
A smart power-saving circuit that turns on your Arduino for 10 seconds when triggered by a push button or sound, then shuts itself off automatically with an LED indicator

## Table of Contents
- [Components Used](#components-used)
- [How It Works](#how-it-works)
- [Circuit Diagram](#circuit-diagram)
- [Arduino Code](#arduino-code)
- [Demo Photo & Video](#demo-photo--video)
- [Power Saving Feature](#power-saving-feature)
- [Future Enhancements](#future-enhancements)

## 🪛 Components Used

| Component            | Quantity |
|----------------------|----------|
| Arduino Uno          | 1        |
| IRF4905 P-MOSFET     | 1        |
| S8050 NPN Transistor | 1        |
| Push Button          | 1        |
| White LED            | 1        |
| Sound Sensor Module  | 1        |
| 220Ω Resistor        | 2        |
| 100kΩ Resistor       | 3        |
| 10kΩ Resistor        | 1        |
| 1N4007 Diode         | 2        |
| 9V Battery           | 1        |

## How It Works

1. **Trigger Activation:**
   - A **push button press** or **loud sound** activates the transistor, pulling the MOSFET gate low, which powers the Arduino.

2. **Timed Operation:**
   - Arduino boots up and runs the code.
   - An **LED lights up** to indicate the ON state.
   - After 10 seconds, the Arduino pulls a pin LOW, turning OFF its own power.

3. **Auto Shut-Off:**
   - The Arduino loses power and turns OFF completely until the next trigger.

## Demo Video


🎬 Demo Video:
showing how the circuit behaves:
Push button or sound → LED ON → 10 sec → Auto power OFF)   



## Power Saving Feature

This project saves power by:
	•	Only turning ON when needed (sound or button trigger)
	•	Running for a short, fixed time (10 seconds)
	•	Automatically turning OFF using a MOSFET switch

Ideal for battery-powered systems or sensor-based automation that only needs short bursts of activity.

## Future Enhancements
	•	Show countdown on OLED display
	•	Store last activation time in  EEPROM
	•	Add relay for higher voltage loads
