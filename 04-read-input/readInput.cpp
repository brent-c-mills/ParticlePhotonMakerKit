
// We're going to start by declaring which pins everything is plugged into.
int led = A5; // We will be plugging our LED into pin A5.  The A5 pin is capable of outputting analog values from 0 to 255.
int buzzer = D1; // We will be plugging our buzzer into pin D1.  The buzzer can be used with either analog or digital output, but we'll just be sending a digital signal for this tutorial.
int potentiometer = A0; // The middle (data) pin of our potentiometer will be plugged into A0.  The other two pins are connected to 3.3v and GND.  The A0 pin is capable of reading analog values from 0 to 4095.
int button = D0; // We will be connecting one side of our button to the D0 pin.  If the button appears to not work, try rotating it 90 degrees (you may need to adjust the pins before it will fit your breadboard).

// Next we will declare the type and name of two variables.
// These variables will be used to store the values coming from our potentiometer and button.
// They will also be used to set the values for our LED and buzzer.
int analogvalue; // We will use this variable to store the analog value coming out of the potentiometer.
int digitalvalue; // We will use this variable to store the state of the button.

void setup() {

    // For setup, we will start by declaring which pins will be accepting input voltage and which will be used to output voltage.
    pinMode(led,OUTPUT); // Our LED pin is output (lighting up the LED)
    pinMode(buzzer,OUTPUT); // Our buzzer pin is also output (activate the buzzer)
    pinMode(potentiometer,INPUT); // Our potentiometer pin is input (read the signal from the potentiometer)
    pinMode(button,INPUT); // Our button is also input (read the state of the button)

    // Now we'll do a quick sound and light test just to verify that everything is hooked up correctly.
    // The LED and buzzer should flash / buzz in a pattern of long - short - short.
    digitalWrite(buzzer, HIGH);
    analogWrite(led, 255);
    delay(500);
    digitalWrite(buzzer, LOW);
    analogWrite(led, 0);
    delay(100);
    digitalWrite(buzzer, HIGH);
    analogWrite(led, 255);
    delay(100);
    digitalWrite(buzzer, LOW);
    analogWrite(led, 0);
    delay(100);
    digitalWrite(buzzer, HIGH);
    analogWrite(led, 255);
    delay(100);
    digitalWrite(buzzer, LOW);
    analogWrite(led, 0);
}


// Next is the loop function...

void loop() {
    // With each iteration of the loop function, we want to read the values from both the potentiometer and the button.
    // These values will be saved to the analogvalue and digitalvalue variables for later use.

    // Because our potentiometer inputs values between 0 and 4095, but our LED only reads values from 0 to 255, 
    // we need to divide all incoming values by 16 in order to get a 0-255 range from our potentiometer.
    // In this line, we set analogvalue (the value passed to the LED) to 1/16th of the inbound value from our potentiometer.
    analogvalue = ( analogRead(potentiometer) / 16 );

    // Our button sends a digital signal, so this line is much simpler.
    // All we do here is assign the value of digitalvalue (the value passed to our buzzer) to match the inbound value from our button.
    digitalvalue = digitalRead(button);

    // We activate and set the level of our LED by using the analogWrite function and passing the analogvalue variable as the value.
    // Since pin A5 accepts analog values from 0 to 255, anything outside of that range will fail - hence why we divided our potentiometer reading by 16.
    analogWrite(led, analogvalue);
    
    // For activation of our buzzer, we will use a simple If Then Else statement.
    // If the digitalvalue variable is LOW, we know the button is depressed and we will use the digitalWrite function to set the buzzer to HIGH.
    // Else (if digitalvalue is anything other than LOW), we will use the digitalWrite function to set the buzzer to LOW.
    if (digitalvalue == LOW) // Note that we use two "=" here.  One "=" is used to set values.  Two "=" are used when verifying the value of a variable.
    {
        digitalWrite(buzzer,HIGH);
    }
    else
    {
        digitalWrite(buzzer,LOW);
    }

}