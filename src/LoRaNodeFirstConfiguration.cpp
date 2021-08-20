/*
* LoRaNodeFirstConfiguration.cpp
* Function File for the LoRa Node Testing project
* Taken from the Arduino Example Library (public domain).
* Demonstrates the usage of MKR WAN 1300/1310 LoRa module.
*
* Project: LoRa Node Testing
* Author: Curtis Burke
* Company: IES, LLC
* Date Created: 08-20-2021
* Date Edited: 08-20-2021
*
*/

// Include Files
#include <LoRaNodeFirstConfiguration.h>
#include <MKRWAN.h>

// Variable Definitions


// LoRaModem node(Serial1);      // Uncomment if using the Murata chip as a module
String appEui;
String appKey;
String devAddr;
String nwkSKey;
String appSKey;

void LoRaNodeFirstConfiguration(LoRaModem node) {

  //Serial.begin(115200);

  while (!Serial);

  Serial.println("Welcome to MKRWAN1300/1310 first configuration sketch");
  Serial.println("Register to your favourite LoRa network and we are ready to go!");

  if (!node.begin(US915)) {       // change this to your regional band (eg. US915, AS923, ...)
    Serial.println("Failed to start module");
    while (1) {}
  }

  Serial.print("Your module version is: ");
  Serial.println(node.version());

  Serial.print("Your device EUI is: ");
  Serial.println(node.deviceEUI());

  /*int mode = 0;

  while (mode != 1 && mode != 2) {

    Serial.println("Are you connecting via OTAA (1) or ABP (2)?");

    while (!Serial.available());

    mode = Serial.readStringUntil('\n').toInt();

  }

  int connected;

  if (mode == 1) {

    Serial.println("Enter your APP EUI");
    while (!Serial.available());
    appEui = Serial.readStringUntil('\n');
    Serial.println("Enter your APP KEY");
    while (!Serial.available());
    appKey = Serial.readStringUntil('\n');
    appKey.trim();

    appEui.trim();

    connected = node.joinOTAA(appEui, appKey);

  } else if (mode == 2) {

    Serial.println("Enter your Device Address");

    while (!Serial.available());

    devAddr = Serial.readStringUntil('\n');

    Serial.println("Enter your NWS KEY");

    while (!Serial.available());

    nwkSKey = Serial.readStringUntil('\n');

    Serial.println("Enter your APP SKEY");

    while (!Serial.available());

    appSKey = Serial.readStringUntil('\n');

    devAddr.trim();

    nwkSKey.trim();

    appSKey.trim();

    connected = node.joinABP(devAddr, nwkSKey, appSKey);

  }

  if (!connected) {

    Serial.println("Something went wrong; are you indoor? Move near a window and retry");

    while (1) {}

  }

  delay(5000);

  int err;

  node.setPort(3);

  node.beginPacket();

  node.print("HeLoRA world!");

  err = node.endPacket(true);

  if (err > 0) {

    Serial.println("Message sent correctly!");

  } else {

    Serial.println("Error sending message :(");

  }*/
}
