#include <Arduino.h>
int irPin = 2;      // IR OUT pin connected to pin 2
int ledPin = 9;
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Harshit Sharma
 * @date 2026-02-27
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

 // TODO 1:
 // Define IR sensor digital pin (Use pin 2)

 // TODO 2:
 // Create variable to store sensor state

void setup() {
    pinMode(irPin, INPUT);
    pinMode(ledPin, OUTPUT);
    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Configure IR pin as INPUT

    // TODO 5:
    // Print system initialization message
}

void loop() {
    int sensorValue = digitalRead(irPin);

    if (sensorValue == LOW) {   // Object detected (usually LOW)
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
