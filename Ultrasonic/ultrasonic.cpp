#include "ultrasonic.h"

void Ultrasonic::init(int _triggerPin, int _echoPin) {
  echoPin = _echoPin;
  triggerPin = _triggerPin;
  
  // Set pin modes
  pinMode(echoPin, INPUT);
  pinMode(triggerPin, OUTPUT);
};

void Ultrasonic::update() {
  // Clears the trigPin
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration_us = pulseIn(echoPin, HIGH);
  distance_cm = duration_us / 29 / 2; // Speed of sound = 340m/s, or 29 us/m
  distance_in = duration_us / 74 / 2; // Speed of sound = 1130ft/s, or 73.746 us/in
}

void Ultrasonic::dumpSerial() {
  // Print begin
  Serial.print("Ultrasonic Rangefinder: ( ");

  // Duration
  Serial.print("duration = ");
  Serial.print(duration_us);
  Serial.print("us, ");

  // Distance
  Serial.print("duration = ");
  Serial.print(distance_cm);
  Serial.print("cm, ");

  // Distance
  Serial.print("duration = ");
  Serial.print(distance_in);
  Serial.print("in");

  // Print end
  Serial.println(" )");
};
