# IoT-Lab: Hardware setup
We are now ready to build our ordering button device and develop our first program ("sketch") for it.

To quickly wire everything up, we use a [Breadboard](Breadboard.md). The breadboard allows to set up temporary circuits and change them quickly.

<!-- MDTOC maxdepth:6 firsth1:1 numbering:0 flatten:0 bullets:1 updateOnSave:1 -->

- [IoT-Lab: Hardware setup and first test](#iot-lab-hardware-setup-and-first-test)   
   - [List of parts](#list-of-parts)   
   - [Wiring diagram](#wiring-diagram)   
      - [Notes](#notes)   

<!-- /MDTOC -->

## List of parts
The ordering button device just needs a handful of components:
  * [Breadboard](Breadboard.md)
  * NodeMCU prototyping board
  * Switch (SW)
  * LED and resistor (R)
  * cables for patching

## Wiring diagram
Before we start, some security precautions:
  * disconnect the NodeMCU from the USB cable while changing the circuit
  * don't forget the resistors when connecting an LED to the board -- otherwise the hardware may be damaged!

<img src="images/Order_button_bb.png">

### Notes
  * LEDs have a polarity. The longer of the two legs is to be connected to positive voltage (+), the other one to ground (GND)

---
Next: [set up the software for the ordering button](Software_Setup.md)
