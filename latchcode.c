const int powerLatch = 5;
const int ledPin = 6;  // LED connected to pin 6

void setup() {
  pinMode(powerLatch, OUTPUT);
  digitalWrite(powerLatch, HIGH); // Keep power on

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);     // Turn LED ON

  delay(10000);                   // Wait 10 seconds

  digitalWrite(ledPin, LOW);      // Turn LED OFF
  digitalWrite(powerLatch, LOW);  // Cut power 
}

void loop() {
  //  Nothing
}
