#include <SoftwareSerial.h>

SoftwareSerial miBT(10, 11);

void setup() {
  Serial.begin(9600);
  miBT.begin(9600);
}

void loop() {
  if(Serial.available()) {
    char c = Serial.read();
    miBT.print(c);
  }

  if(miBT.available()) {
    char c = miBT.read();
    Serial.print(c);
  }
}
