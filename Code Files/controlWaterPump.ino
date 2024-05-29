void controlWaterPump() {
  if (soilMoisturePercentage < MOISTURE_THRESHOLD && waterLevel >= WATER_LEVEL_THRESHOLD) {
    digitalWrite(MOTOR_PIN, HIGH); // Turn on the water pump
  } else {
    digitalWrite(MOTOR_PIN, LOW);  // Turn off the water pump
  }
}