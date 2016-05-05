# Particle Photon Maker Kit:
## Lesson 1: Hello World
Project code / wiring tutorial to light a built-in LED on your Particle Photon.

                   +-----+
        +----------| USB |-----------+
        |          +-----+           |
        | [ ] VIN            3V3 [ ] |
        | [ ] GND            RST [ ] |
        | [ ] TX            VBAT [ ] |
        | [ ] RX  [S][*][R]  GND [ ] |
        | [ ] WKP         [*] D7 [ ] |
        | [ ] DAC +-------+   D6 [ ] |
        | [ ] A5  |       |   D5 [ ] |
        | [ ] A4  |PHOTON |   D4 [ ] |
        | [ ] A3  |       |   D3 [ ] |
        | [ ] A2  +-------+   D2 [ ] |
        | [ ] A1              D1 [ ] |
        | [ ] A0              D0 [ ] |
        |                            |
        \   [ ]        [_______]     /
         \__________________________/


## Step 1: Wiring
For this tutorial, you won't need to do any wiring at all.  Just plug your Particle Photon into a powered USB port via the micro USB port on the Photon.

Once your Photon has power, you should see the LED ( [*] ) between the Setup ( [S] ) and Reset ( [R] ) buttons light up.  It should first flash green, and then "breath" cyan.  The slow "breathing" cyan LED indicates that your Photon is powered on and connected to the Particle cloud.

## Step 2: Setup
If you have not already done so, install the Particle app on your phone.  Click the "+" in the butter right hand corner and choose to add a new Photon.  The app will guide you through the process to add your new Photon.

## Step 3: Code
For this tutorial, we will be abandoning Tinker in favor of our own code in order to get you used to working with build.particle.io.

The Photon has a blue LED tied to pin D7.  We will write a VERY simple piece of code that will turn on this LED.

If you look at the "lightLED.cpp" file, you will notice that it is broken down into a few sections.

1. First, we have *variable declarations*.  Variables allow us to give human-readable / human-understandable names to pins, values, etc.  At first, these will be used primarily to make your code easier to read.  As you begin to write more complex programs, variables can make modifications easier.  Say I write a program that turns on an LED on pin D0, but then later need to move that LED to pin D5.  I could either search through my code and replace all instances of "D0" with "D5", or I could simply change my initial variable so that "LED" points to "D5".
2. Next, we have the *setup* function.  The setup funtion is where you do any initial configurations / definitions that you do not intend to repeat.  This is a good place to set initial values that will later be overwritten as your program runs.
3. Finally, we have the *loop* function.  This portion of your program will be run over and over in a repating loop.  The loop function will be where most of your code will run.  Here is where you will read sensor values, turn lights on and off, etc.

Given we are only going to turn an LED on and leave it on, we won't be doing a whole lot here.  We will declare a variable called "led" as being the same as pin D7.  Next we'll tell the Photon to set "led" to output mode.  Finally, we'll tell the Photon to turn on "led" by setting it's output value to "HIGH".

To put the new code on your Photon, you'll need to use the Paricle website at build.particle.io.  What Particle have done is essentially build a C development environment using a web-based version of the code editor SublimeText.  This makes development extremely fast and easy for new users.

1. Log into build.particle.io.
2. Click on the target icon along the left-hand menu bar (Devices) to list your connected Particle devices and choose your new Photon from the list.
3. Click on the < > symbol (Code), then scroll down and click the CREATE NEW APP button.  You will be prompted to give your app a title.  Let's call this one "lightLED".
    4. Your new app will contain only one file called "lightled.ino".  This file will contain a blank setup() function and a blank loop() function.  Functions are defined with a type ("void" for this example), a name followed by parenthesis (either "setup" or "loop" for this example), and a set of braces which are used to contain each function.
5. We can now take the code from lightLED.cpp and paste it into lightled.ino.
6. Once you have pasted the code into the lightled.ino file, click on the check mark icon along the left-hand menu.  This will verify the code - check it over to ensure there are no obvious errors.
7. Finally, click the lightning bolt icon along the left-hand menu in order to "flash" your Photon with the new code - meaning to send your new code to the Photon and overwrite any existing code on the device.
    8. Your Photon's LED should flash magenta for a moment (meaning it is flashing the new firmware from the build.particle.io website), then go back to "breathing" cyan.  However, now the blue LED should also be lit.

Congratulations!  You just wrote your first bit of C code and flashed it onto a microcontroller!