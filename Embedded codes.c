
A. analog input
const int buttonPin = 2; // Pin connected to the button
const int ledPin = 13;   // Pin connected to the LED
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
 else 
{
    digitalWrite(ledPin, LOW);
  }
}

B. analog output
const int ledPin = 9;
void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
 for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(10);
  }
}

C. Digital Input 
const int buttonPin = 2; // Pin connected to the button
const int ledPin = 13;   // Pin connected to the LED
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}

D. Digital output
const int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for a second
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for a second
}

E. Interrupt
const int buttonPin = 2;
const int ledPin = 13;
volatile bool ledState = LOW;
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), toggleLED, CHANGE);
}
void loop() {
  digitalWrite(ledPin, ledState);
}
void toggleLED() {
  ledState = !ledState;
}

F.Timer 
#include <TimerOne.h>
const int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  Timer1.initialize(1000000); // Set timer for 1 second
  Timer1.attachInterrupt(blinkLED);
}
void loop() {
  // Main loop does nothing, blinkLED() is called by the timer interrupt
}
void blinkLED() {
  static bool state = LOW;
  state = !state;
  digitalWrite(ledPin, state);
}

G. serial communication
const int sensorPin = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
delay(500); // Delay for readability
}

.
