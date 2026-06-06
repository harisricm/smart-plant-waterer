// Smart Plant Waterer
// Codtech Internship
// Intern: Harisri C M

const int sensorPin = 34;
const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

  Serial.println("Smart Plant Waterer Started");
}

void loop() {
  int moisture = analogRead(sensorPin);

  Serial.print("Soil Moisture Value: ");
  Serial.println(moisture);

  if (moisture < 2000) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Soil Dry - Water Pump ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Soil Wet - Water Pump OFF");
  }

  Serial.println("-------------------");
  delay(2000);
}
