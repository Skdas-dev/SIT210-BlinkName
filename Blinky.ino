// ------------
// Blink an LED
// ------------

/*-------------

We've heavily commented this code for you. If you're a pro, feel free to ignore it.

Comments start with two slashes or are blocked off by a slash and a star.
You can read them, but your device can't.
It's like a secret message just for you.

Every program based on Wiring (programming language used by Arduino, and Particle devices) has two essential parts:
setup - runs once at the beginning of your program
loop - runs continuously over and over

You'll see how we use these in a second. 

This program will blink an led on and off every second.
It blinks the D7 LED on your Particle device. If you have an LED wired to D0, it will blink that LED as well.

-------------*/

#define BUTTON_PIN 4


// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

int led = D2; 

int button = D3; 
// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {
pinMode(button, INPUT_PULLUP);
pinMode(led, OUTPUT);
  
}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  //L
  

int buttonState = digitalRead(button);
bool pushed = false;
if(buttonState == LOW)
{
    pushed = true;
}

if(pushed)
{
    
   //L
   Dot();
   Dash();
   Dot();
   Dot();
   
   //A
   Dot();
   Dash();
   
   //C
   Dash();
   Dot();
   Dash();
   Dot();
   
   //H
   Dot();
   Dash();
   
   //L
   Dot();
   Dash();
   Dot();
   Dot();
   
   //A
   Dot();
   Dash();
   
   //N
   Dash();
   Dot();

pushed = false;
}
 


  

}

void Dot()
{
      // To blink the LED, first we'll turn it on...

  digitalWrite(led, LOW);

  // We'll leave it on for 1 seconds...
  delay(1000);
  // Then we'll turn it off...
  digitalWrite(led, HIGH);

 
  // Wait 1 second...
  delay(1000);
  
}

void Dash()
{
      // To blink the LED, first we'll turn it on...
  digitalWrite(led, LOW);


  // We'll leave it on for 3 seconds...
  delay(3000);
  // Then we'll turn it off...
  digitalWrite(led, HIGH);

  // Wait 1 second...
  delay(1000);
}

//Byrne, D. (n.d.). Tutorial: Using a pushbutton. [online] DioT Labs. Available at: https://diotlabs.daraghbyrne.me/docs/getting-inputs/buttons/. Accessed 23 March 2023


