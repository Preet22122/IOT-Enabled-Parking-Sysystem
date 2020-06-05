#include "UbidotsMicroESP8266.h"

#define DEVICE  "--------"  // Put here your Ubidots device label
#define VARIABLE  "-----"  // Put here your Ubidots variable label
#define TOKEN  "-------"  // Put here your Ubidots TOKEN
#define WIFISSID "------" // Put here your Wi-Fi SSID
#define PASSWORD "---" // Put here your Wi-Fi password

Ubidots client(TOKEN);
int value1=0;
int value2=0;
int value3=0;
int value4=0;
int value5=0;
void setup() {
    Serial.begin(15200);
    client.wifiConnection(WIFISSID, PASSWORD);
    pinMode(0,INPUT);
    pinMode(5,INPUT);
    pinMode(2,INPUT);
    pinMode(3,INPUT);
    pinMode(4,INPUT);
    
    //int servo = 6;
    //pinMode(servo, OUTPUT);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
}

void loop() {
     value1 =digitalRead(0);
     value2 =digitalRead(5);
     value3 =digitalRead(2);
     value4 =0;//digitalRead(3);
     value5 =digitalRead(4);
    client.add("u", value1);
    client.add("v", value2);
    client.add("w", value3);
    client.add("x", value4);
    client.add("y", value5);
    client.sendAll(true);
   Serial.print(value1);
    delay(1000);
}
