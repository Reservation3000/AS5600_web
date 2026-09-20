#include <Arduino.h>
#include <Wire.h>
#include "AS5600.h"

AS5600 as5600;  
float realAngle; 
int unlimitAngle;
int realRad;
int unlimitRad;

void setup() {
    Serial.begin(115200);
    Wire.begin();
    Serial.println("init successful");

    Serial.print("AS5600 lib verson: ");
    Serial.println(AS5600_LIB_VERSION);

    int isConnect = as5600.isConnected();
    Serial.print("connect successful");
    Serial.println(isConnect);
    delay(1000);

}

void loop() {   
    realAngle = as5600.rawAngle() * (360.0f / 4096.0f); 
    Serial.println(realAngle);
}
