/*Hola Mundo*/
#include <Arduino.h>

#define LED 2
int a = 0;

void setup()
{
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    Serial.println(a++);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
}