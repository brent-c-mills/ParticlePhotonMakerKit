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