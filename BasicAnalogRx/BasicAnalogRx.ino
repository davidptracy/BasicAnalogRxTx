String incomingMessage;

void setup() {
  Serial.begin(2400);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {
    for (int i = 0; i < 10; i++) {
      Serial.readStringUntil('#');
    }
    Serial.readStringUntil('%');
    incomingMessage = Serial.readStringUntil('&');
  }
  Serial.println("NARDXZ");
//  incomingMessage = "";
}

