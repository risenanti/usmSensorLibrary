const int TiltsensorPin = 2;     // the number of the tilt sensor pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int tiltsensorState = 0;         // variable for reading the tiltsensor status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(TiltsensorPin, INPUT);
}

void loop() {
  // read the state of the tilt sensor value:
  tiltsensorState = digitalRead(TiltsensorPin);

  // check if the sensor is tilted. If it is, the tiltsensorState is HIGH:
  if (tiltsensorState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
