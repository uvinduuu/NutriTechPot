void sendBluetoothData() {
  bluetooth.print("Soil Moisture: ");
  bluetooth.print(soilMoisturePercentage);
  bluetooth.println("%");

  bluetooth.print("Water Level: ");
  if (waterLevel < WATER_LEVEL_THRESHOLD) {
    bluetooth.print("Low");
    bluetooth.println(" - Refill Needed!");
  } else {
    bluetooth.print(map(waterLevel, 0, 1023, 0, 100)); // Convert water level to percentage
    bluetooth.println("%");
  }
}