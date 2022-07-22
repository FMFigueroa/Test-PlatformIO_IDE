/*Hola Mundo*/
#include <Arduino.h>

#define LED 5  // LED connected to digital pin 5
#define PWM 12 // LED connected to analog PWM pin 12

int a = 0;

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(PWM, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    /*===================== Blink =====================*/
    for (int i = 0; i < 5; i++)
    {
        Serial.println(a++);
        digitalWrite(LED, HIGH);
        delay(250);
        digitalWrite(LED, LOW);
        delay(250);
    }

    /*===================== Fade ======================*/
    // fade in from min to max in increments of 5 points:
    for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5)
    {
        // sets the value (range from 0 to 255):
        analogWrite(PWM, fadeValue);
        // wait for 30 milliseconds to see the dimming effect
        delay(30);
    }

    // fade out from max to min in increments of 5 points:
    for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5)
    {
        // sets the value (range from 0 to 255):
        analogWrite(PWM, fadeValue);
        // wait for 30 milliseconds to see the dimming effect
        delay(40);
    }
}
