#include <currentLoop.h>

#define CHANNEL CHANNEL1

void setup() {
   //Switch ON the 24V DC-DC converter
  sensorBoard.ON();

  // Inits the Serial for viewing data in the serial monitor
  Serial.begin(115200);
  delay(100);
  Serial.println("Arduino 4-20mA board switched ON...");
}

void loop() {
  if (sensorBoard.isConnected(CHANNEL)) {
    // Get the sensor value in int format (0-1023).
    int value = sensorBoard.readChannel(CHANNEL);
    Serial.print("Int value read from channel 1 : ");
    Serial.println(value);

    // Get the sensor value as a voltage in Volts.
    float voltage = sensorBoard.readVoltage(CHANNEL);
    Serial.print("Voltage value rad from channel 1 : ");
    Serial.print(voltage);
    Serial.println(" V");

    // Get the sensor value as a curren in mA.
    float current = sensorBoard.readCurrent(CHANNEL);
    Serial.print("Current value read from channel 1 : ");
    Serial.print(current);
    Serial.println(" mA");

    Serial.println("***************************************");
    Serial.print("\n");
  }
  else {
    Serial.println("The sensor is not connected...");
  }

  //Delay after reading.
  delay(2500);
}
