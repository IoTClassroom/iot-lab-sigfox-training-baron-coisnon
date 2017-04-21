int pin = 9;        
int brightness = 0;    
int fadeAmount = 5;    

void setup() {
  // declare pin 9 to be an output:
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  analogWrite(pin, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  Serial.print("brightness : ");
  Serial.println(brightness);
  delay(50);


}
