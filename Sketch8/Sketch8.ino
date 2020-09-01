/*
 Name:		Sketch8.ino
 Created:	7/28/2020 12:14:50 PM
 Author:	Janie
*/
#pragma region Includes and imports
#include <Servo.h>
Servo myServo;
#pragma endregion
#pragma region Variables
int const potPin = A0;
int potVal,angle;
#pragma endregion

// the setup function runs once when you press reset or power the board
void setup() {
	myServo.attach(9);
	Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
	potVal = analogRead(potPin);
	Serial.print("potVal: ");
	Serial.println(potVal);
	angle = map(potVal, 0, 1023, 0, 179);
	Serial.print(", angle: ");
	Serial.println(angle);
	myServo.write(angle);
	delay(15);
}
