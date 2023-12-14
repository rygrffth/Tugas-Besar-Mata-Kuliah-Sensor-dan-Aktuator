#define PIR_PIN 26 
#define LED_PIN 14 
#define BUZZER_PIN 12 

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int pirState = digitalRead(PIR_PIN);
  if (pirState) {
    Serial.println("GERAKAN TERDETEKSI!");
    Serial.println("ADA PENYUSUPP!");
    for(int i = 0; i < 8; i++) {
       digitalWrite(LED_PIN, HIGH); 
      digitalWrite(BUZZER_PIN, HIGH); 
      delay(100); 
      digitalWrite(LED_PIN, LOW); 
      digitalWrite(BUZZER_PIN, LOW); 
      delay(100); 
    }
  } else {
    Serial.println("TIDAK ADA GERAKAN TERDETEKSI.");
    Serial.println("SITUASI AMAN.");
    digitalWrite(LED_PIN, LOW); 
  }
  delay(1000); 
}