# Soil Moisture and Water Level Monitoring System

## Features:

- **Soil Moisture Measurement**: The `measureSoilMoisture` function reads the soil moisture level and maps it to a percentage.
- **Water Level Measurement**: The `measureWaterLevel` function reads the water level and turns on an LED if the level is below a certain threshold.
- **Water Pump Control**: The `controlWaterPump` function turns the water pump on or off based on soil moisture and water level.
- **Bluetooth Communication**: The `sendBluetoothData` function sends the soil moisture and water level data to a mobile application via an HC-05 Bluetooth module.

## Setup Instructions:

1. **Hardware Connections**:
   - Connect the soil moisture sensor to the analog pin A3.
   - Connect the water pump to pin A5.
   - Connect the water level sensor to analog pin A1.
   - Connect an LED to pin 13 for low water level indication.
   - Connect the HC-05 Bluetooth module to pins 2 (RX) and 3 (TX).

2. **Calibration Values**:
   - Adjust the `OpenAirReading` and `WaterReading` values in the code based on your soil moisture sensor's calibration.
   - Adjust the `WATER_LEVEL_THRESHOLD` value based on your water level sensor's calibration.

3. **Thresholds**:
   - Set the desired soil moisture threshold (`MOISTURE_THRESHOLD`) to control the water pump.

4. **Software Configuration**:
   - Ensure the correct pins are defined in the code.
   - Upload the provided Arduino sketch to your Arduino board.

5. **Bluetooth Communication**:
   - Pair the HC-05 Bluetooth module with your mobile application.
   - The soil moisture and water level data will be sent as a percentage to the connected mobile application.
   - If the water level is low, the message will include a refill alert.

## Notes:

- Adjust pin numbers, calibration values, and thresholds according to your specific setup and sensor calibration.
- Ensure proper power supply connections for the sensors and modules.
- The delay between measurements and data transmission is set to 1 second. Adjust this as needed for your application.
