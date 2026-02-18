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
