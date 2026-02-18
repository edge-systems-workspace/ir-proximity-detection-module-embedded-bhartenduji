/**
 * @file IR_Sensor_LED_Control.ino
 * @brief IR obstacle sensor based LED control with Serial monitoring.
 *
 * This program reads the digital output from an IR obstacle sensor.
 * When an object is detected (LOW signal), the LED turns ON
 * and a message is printed to the Serial Monitor.
 * When no object is detected, the LED turns OFF.
 *
 * @author Bhartendu Ji
 * @date 18 Feb 2026
 */

// Pin Definitions
int irPin = 7;     ///< IR sensor OUT pin connected to digital pin 7
int ledPin = 13;   ///< LED connected to digital pin 13

/**
 * @brief Initializes serial communication and pin configuration.
 *
 * This function runs once when the Arduino starts.
 * - Sets IR sensor pin as INPUT
 * - Sets LED pin as OUTPUT
 * - Starts Serial communication at 9600 baud rate
 */
void setup() {
  Serial.begin(9600);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

/**
 * @brief Continuously checks for object detection.
 *
 * If IR sensor detects an object (LOW signal):
 *  - LED turns ON
 *  - Prints "Object Detected"
 *
 * If no object is detected:
 *  - LED turns OFF
 *  - Prints "No Object"
 */
void loop() {

  int state = digitalRead(irPin);

  if (state == LOW) {   // Object detected
    digitalWrite(ledPin, HIGH);
    Serial.println("Object Detected");
  } else {              // No object
    digitalWrite(ledPin, LOW);
    Serial.println("No Object");
  }

  delay(200);
}


