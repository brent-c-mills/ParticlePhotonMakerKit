# Particle Photon Maker Kit:
## Lesson 3: Blink an External LED
Project code / wiring tutorial to blink an external LED using your Particle Photon.

                   +-----+
        +----------| USB |-----------+
        |          +-----+           |
        | [ ] VIN            3V3 [ ] |
        | [ ] GND            RST [ ] |
        | [ ] TX            VBAT [ ] |
        | [ ] RX  [S][*][R]  GND [ ] | ----------
        | [ ] WKP         [*] D7 [ ] |
        | [ ] DAC +-------+   D6 [ ] |
        | [ ] A5  |       |   D5 [ ] |
        | [ ] A4  |PHOTON |   D4 [ ] |
        | [ ] A3  |       |   D3 [ ] |
        | [ ] A2  +-------+   D2 [ ] |
        | [ ] A1              D1 [ ] |
        | [ ] A0              D0 [ ] | ----------  
        |                            |
        \   [ ]        [_______]     /
         \__________________________/


This tutorial builds on tutorial 2 and shows you how the same principles can be used for external components, an LED in this case.

## Step 1: Wiring
For this tutorial, you won't need to do any wiring at all.  Just plug your Particle Photon into a powered USB port via the micro USB port on the Photon.

Once your Photon has power, you should see the LED ( [*] ) between the Setup ( [S] ) and Reset ( [R] ) buttons light up.  It should first flash green, and then "breath" cyan.  The slow "breathing" cyan LED indicates that your Photon is powered on and connected to the Particle cloud.

## Step 2: Setup
If you have not already done so, install the Particle app on your phone.  Click the "+" in the butter right hand corner and choose to add a new Photon.  The app will guide you through the process to add your new Photon.

## Step 3: Code
1. Log into build.particle.io.
2. Click on the target icon along the left-hand menu bar (Devices) to list your connected Particle devices and choose your new Photon from the list.
3. Click on the < > symbol (Code), then scroll down and click the CREATE NEW APP button.  You will be prompted to give your app a title.  Let's call this one "blinkInternalLED".
    4. Your new app will contain only one file called "blinkinternalled.ino".  This file will contain a blank setup() function and a blank loop() function.  Functions are defined with a type ("void" for this example), a name followed by parenthesis (either "setup" or "loop" for this example), and a set of braces which are used to contain each function.
5. We can now take the code from blinkInternal.cpp and paste it into blinkinternalled.ino.
6. Once you have pasted the code into the lightled.ino file, click on the check mark icon along the left-hand menu.  This will verify the code - check it over to ensure there are no obvious errors.
7. Finally, click the lightning bolt icon along the left-hand menu in order to "flash" your Photon with the new code - meaning to send your new code to the Photon and overwrite any existing code on the device.
    8. Your Photon's LED should flash magenta for a moment (meaning it is flashing the new firmware from the build.particle.io website), then go back to "breathing" cyan.  However, now the blue LED should also be blinking at 1-second intervals.