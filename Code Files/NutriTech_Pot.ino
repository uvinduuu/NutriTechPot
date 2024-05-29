#include <SoftwareSerial.h>

// Calibration constants for soil moisture sensor
const int OpenAirReading = 565;   // calibration data 1
const int WaterReading = 385;     // calibration data 2

// Pin definitions
const int MOTOR_PIN = A5;
const int POWER_PIN = 7;
const int SIGNAL_PIN = A3;
const int WATER_LEVEL_PIN = A1;   // Analog pin for water level sensor
const int LED_PIN = 13;           // LED pin for low water level indication

// HC-05 Bluetooth module pins
const int RX_PIN = 2;
const int TX_PIN = 3;

// Thresholds
const int MOISTURE_THRESHOLD = 50;
const int WATER_LEVEL_THRESHOLD = 300;  // Threshold for water level (adjust based on calibration)

// Global variables
int moistureLevel = 0;
int soilMoisturePercentage = 0;
int waterLevel = 0;
SoftwareSerial bluetooth(RX_PIN, TX_PIN);

void setup() {
  Serial.begin(9600);        // Start serial communication at 9600 bps
  bluetooth.begin(9600);     // Start Bluetooth communication at 9600 bps

  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(POWER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(POWER_PIN, LOW); // Turn the sensor OFF initially
  digitalWrite(LED_PIN, LOW);   // Turn the LED OFF initially
}

void loop() {
  measureSoilMoisture();
  measureWaterLevel();
  controlWaterPump();
  sendBluetoothData();
  delay(1000);
}







