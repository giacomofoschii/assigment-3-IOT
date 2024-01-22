#include "Potentiometer.h"
#include "Arduino.h"
Potentiometer::Potentiometer(int pin) {
    this->pin = pin;
}

int attuale;

int Potentiometer::shaft() {
  int nuovo = analogRead(pin);
  //Serial.println(nuovo);
  if (nuovo != attuale) {
    attuale = nuovo;
  }
  return attuale;
}