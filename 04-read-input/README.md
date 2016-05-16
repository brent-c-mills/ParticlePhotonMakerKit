# Particle Photon Maker Kit:
## Lesson 3: Using Variables :: Blink an External LED
Project code / wiring tutorial to blink an external LED using your Particle Photon.

                                 +-----+
                      +----------| USB |-----------+
                      |          +-----+           |
                      | [ ] VIN            3V3 [ ] | --- Breadboard + Power Bus
                      | [ ] GND            RST [ ] |
                      | [ ] TX            VBAT [ ] |
                      | [ ] RX  [S][*][R]  GND [ ] | --- Breadboard - Power Bus
                      | [ ] WKP         [*] D7 [ ] |
                      | [ ] DAC +-------+   D6 [ ] |                
        LED + Pin --- | [ ] A5  |       |   D5 [ ] |
                      | [ ] A4  |PHOTON |   D4 [ ] |
                      | [ ] A3  |       |   D3 [ ] |
                      | [ ] A2  +-------+   D2 [ ] |
                      | [ ] A1              D1 [ ] | --- Buzzer + Pin
    Potentiometer --- | [ ] A0              D0 [ ] | --- Button + Pin(s)
                      |                            |
                      \   [ ]        [_______]     /
                       \__________________________/

Breadboard Power Bus Wiring:

                 +                                    -
                |                                      |
                | --- Potentiometer + Pin              |
                |                                      |
                |           LED - Pin --- Resistor --- |
                |              Potentiometer - Pin --- |
                |                     Buzzer - Pin --- |
                |                     Button - Pin --- |
                |                                      |

Potentiometer Wiring:

        ________
       |        |---  Positive Pin (plug into Breadboard + Power Bus)
       |        |---  Data Pin (Plug into A0 Photon Pin)
       |        |---  Negative Pin (plug into Breadboard - Power Bus)
        --------


For many situations, you'll want your Photon to read a value as input and respond based on that input.  This could mean a button, a photoresistor (light sensor), a potentiometer, etc.  For this tutorial, we'll be using a button and a potentiometer as examples to digital and analog input.  If you push the button, a buzzer will go off.  As you adjust the potentiometer, an LED will dim / intensify.  

## Step 1: Wiring
For this tutorial, you will need the following:

* 1x breadboard
* 1x LED
* 1x resistor
* 1x buzzer (looks like a small black cylinder with a hole on top and two pins on the bottom - one pin longer than the other)
* 1x button
* 1x potentiometer (looks like a small blue box with a grey phillips-head plastic screw embedded in the middle and 3x pins on the bottom)

The wiring for this tutorial will be more complex than in previous tutorials, but not by much.  To start, we will need to make use of the + and - power buses on your breadboard.  These channels run on either side of the breadboard and allow you to easily use your GND and 3.3v pins for multiple components.

First, connect your 3.3v pin to the + power bus and your GND pin to the - power bus (either GND pin will work).

Next, connect your potentiometer.  This component has 3 pins.  The middle pin is your data pin and should be connected to your Photon's A0 pin.  The remaining two pins are the + and - pins (in no particular order).  One should be attached to your + power bus, the other to the - power bus.  It doesn't matter which you connect to which - the potentiometer will work either way.

Now we'll connect the button.  This one can be a little tricky as it has 4 pins but only takes two wires.  The Tinker firmware will come in handy here.  When you plug the button into your breadboard, you need to ensure it is facing the right direction.  If the button is turned 90-degrees, the system will see it as always being depressed.  First, connect one side of the button to your - power bus.  Then, connect the other side to Photon pin D0.  Make sure to use Tinker to verify that your button is installed correctly.  If you always see "LOW" in Tinker, rotate your button 90 degrees.

Next comes the buzzer.  Connect the postive pin (labelled) to your Photon's D1 pin.  Now connect the negative pin to the - power bus.

Finally, we need to connect the LED.  Connect the LED's anode (+ / longer pin) to your Photon's A5 pin.  Connect the LED's cathode (- / shorter pin) to a resistor.  Finally, connect the other end of the resistor to your - power bus.

## Step 2: Setup
If you have not already done so, install the Particle app on your phone.  Click the "+" in the butter right hand corner and choose to add a new Photon.  The app will guide you through the process to add your new Photon.

## Step 3: Code
1. Log into build.particle.io.
2. Click on the target icon along the left-hand menu bar (Devices) to list your connected Particle devices and choose your new Photon from the list.
3. Click on the < > symbol (Code), then scroll down and click the CREATE NEW APP button.  You will be prompted to give your app a title.  Let's call this one "readInput".
    4. Your new app will contain only one file called "readinput.ino".  This file will contain a blank setup() function and a blank loop() function.  Functions are defined with a type ("void" for this example), a name followed by parenthesis (either "setup" or "loop" for this example), and a set of braces which are used to contain each function.
5. We can now take the code from readInput.cpp and paste it into readinput.ino.
6. Once you have pasted the code into the readinput.ino file, click on the check mark icon along the left-hand menu.  This will verify the code - check it over to ensure there are no obvious errors.
7. Finally, click the lightning bolt icon along the left-hand menu in order to "flash" your Photon with the new code - meaning to send your new code to the Photon and overwrite any existing code on the device.
    8. Your Photon's LED should flash magenta for a moment (meaning it is flashing the new firmware from the build.particle.io website), then go back to "breathing" cyan.  However, now the blue LED should also be blinking at 1-second intervals.
