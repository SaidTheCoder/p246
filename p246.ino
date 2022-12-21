#define POTENTIOMETER_PIN 15
const byte led_pin=18;
void setup() {
  Serial.begin(9600);
  pinMode(PONTENTIOMETER_PIN,INPUT);
  ledcAttachPin(led_pin,0);
  ledcSetup(0,4000,8);

}

void loop() {
  int analogValue=analogRead(POTENTIOMETER_PIN);
  int brightness=map(analogValue,0,4095,0,255;
  ledcWrite(0,brightness);
  Serial.println(brightness);
  delay(30);

}
