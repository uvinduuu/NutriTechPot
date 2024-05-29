void measureWaterLevel() {
  waterLevel = analogRead(WATER_LEVEL_PIN);
  Serial.print("Water level: ");
  Serial.println(waterLevel);

  if (waterLevel < WATER_LEVEL_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH); // Turn on the LED to indicate low water level
  } else {
    digitalWrite(LED_PIN, LOW);  // Turn off the LED if water level is sufficient
  }
}