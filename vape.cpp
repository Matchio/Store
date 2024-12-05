#include <SoftwareSerial.h>

const int pmSensorTX = 10;
const int pmSensorRX = 11;
const int sim900TX = 7;
const int sim900RX = 8;

SoftwareSerial pmSerial(pmSensorRX, pmSensorTX);
SoftwareSerial sim900Serial(sim900RX, sim900TX);

void setup() {
  Serial.begin(9600);
  pmSerial.begin(9600);
  sim900Serial.begin(9600);

  sim900Serial.println("AT");
  delay(1000);
  sim900Serial.println("AT+CMGF=1");
  delay(1000);
}

void loop() {
  if (pmSerial.available()) {
    int pmData = pmSerial.read();
    Serial.print("PM2.5 Data: ");
    Serial.println(pmData);

    if (pmData > 100) { 
      sendSMS();
    }
  }
  delay(1000);
}

void sendSMS() {
  sim900Serial.println("AT+CMGS=\"+1234567890\"");
  delay(1000);
  sim900Serial.print("Vape smoke detected.");
  delay(1000);
  sim900Serial.write(26);
  delay(1000);
}