// C++ code
//
// Define the digital pins for each LED
int redLed = 10;
int yellowLed = 9;
int greenLed = 8;

void setup() {
  // Set all LED pins as outputs
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // 1. Red Light ON (Green and Yellow OFF) - Cars Stop
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  delay(5000); // Wait 5 seconds

  // 2. Green Light ON (Red and Yellow OFF) - Cars Go
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(5000); // Wait 5 seconds

  // 3. Yellow Light ON (Red and Green OFF) - Cars Slow Down
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  digitalWrite(greenLed, LOW);
  delay(2000); // Wait 2 seconds
}
