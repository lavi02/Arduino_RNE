# include <SoftwareSerial.h>

SoftwareSerial HM10(2, 3);

void setup () {
  Serial.begin(9600);
  HM10.begin(9600);
  HM10.println("AT");
}

void loop () {
  if (HM10.available()) {
    Serial.write(HM10.read());
  }
  if (Serial.available()) {
    HM10.write(Serial.read());
  }
}
