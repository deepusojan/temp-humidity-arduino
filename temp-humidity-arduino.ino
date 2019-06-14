#include "DHT.h"
#define DHTPIN 6
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(7,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.print(h);
  Serial.print('\t');
  Serial.println(t);
}
