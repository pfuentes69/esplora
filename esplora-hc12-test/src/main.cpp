#include <Arduino.h>
#include <SoftwareSerial.h>
SoftwareSerial HC12(3, 11); // HC-12 TX Pin, HC-12 RX Pin
void setup() {
/*
  Serial.begin(115200);             // Serial port to computer
  while (!Serial) {
    delay(10); //  wait for serial port to connect. Needed for native USB
  }
//  Serial.println("START");
*/
  delay(100);
  HC12.begin(9600);               // Serial port to HC12
}
void loop() {
  delay(1000);
  HC12.write("HOLA");
  /*
  while (HC12.available()) {        // If HC-12 has data
    Serial.write(HC12.read());      // Send the data to Serial monitor
  }
  delay(10);
  while (Serial.available()) {      // If Serial monitor has data
    HC12.write(Serial.read());      // Send that data to HC-12
  }
  delay(10);
  */
}



