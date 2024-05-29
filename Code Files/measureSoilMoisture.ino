void measureSoilMoisture() {
  digitalWrite(POWER_PIN, HIGH);  // Turn the sensor ON
  delay(10);                      // Wait 10 milliseconds
  moistureLevel = analogRead(SIGNAL_PIN); // Read the analog value from sensor
  digitalWrite(POWER_PIN, LOW);   // Turn the sensor OFF

  soilMoisturePercentage = map(moistureLevel, OpenAirReading, WaterReading, 0, 100);
  
  if (soilMoisturePercentage >= 100) {
    Serial.println("\nMaximum - 100 %");
    soilMoisturePercentage = 100;
  } else if (soilMoisturePercentage <= 0) {
    Serial.println("\nMinimum - 0 %");
    soilMoisturePercentage = 0;
  } else {
    Serial.print(soilMoisturePercentage);
    Serial.println("%");
  }
}