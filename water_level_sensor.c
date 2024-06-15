/*
    Project name : Water Level Sensor
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-water-level-sensor
*/

const int waterLevelPin = 2; // Digital pin connected to water level sensor OUT pin

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(waterLevelPin, INPUT); // Set water level sensor pin as INPUT
}

void loop() {
  int waterLevelState = digitalRead(waterLevelPin); // Read water level sensor state

  // Check if water level is detected
  if (waterLevelState == HIGH) {
    Serial.println("Water level detected!");
  } else {
    Serial.println("No water level detected");
  }

  delay(1000); // Add a small delay before the next reading
}
