/*
* main.cpp
* Primary Run File for the LoRa Node Testing project
*
* Project: LoRa Node Testing
* Author: Curtis Burke
* Company: IES, LLC
* Date Created: 08-20-2021
* Date Edited: 08-20-2021
*
*/

// Include Libraries
#include <Arduino.h>
#include <Wire.h>
//#include <LiquidCrystal_I2C.h>
#include <MKRWAN.h>

//Include Function Files
#include <LoRaNodeFirstConfiguration.h>

//Varible Definitions
const int BAUD_RATE = 9600;

LoRaModem MQ3B_SensorNode;

// Setup Function - to run once
void setup () {

  Serial.begin(BAUD_RATE);
  LoRaNodeFirstConfiguration(MQ3B_SensorNode);

}

//Main loop
void loop() {
  // put your main code here, to run repeatedly:
}
