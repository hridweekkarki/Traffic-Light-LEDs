int greenLED = 2;
int yellowLED = 3;
int redLED = 4;
void setup() {
  // put your setup code here, to run once:
pinMode(greenLED,OUTPUT);
pinMode(yellowLED,OUTPUT);
pinMode(redLED,OUTPUT);

digitalWrite(greenLED, LOW);
digitalWrite(yellowLED, LOW);
digitalWrite(redLED, LOW);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//Stop Mode
digitalWrite(greenLED, LOW);
digitalWrite(yellowLED, LOW);
digitalWrite(redLED, HIGH);
Serial.println("Light Mode: STOP");
delay(2000);

//Yield Mode
digitalWrite(greenLED, LOW);
digitalWrite(yellowLED, HIGH);
digitalWrite(redLED, LOW);
Serial.println("Light Mode: YIELD");
delay(1000);

//Go Mode
digitalWrite(greenLED, HIGH);
digitalWrite(yellowLED, LOW);
digitalWrite(redLED, LOW);
Serial.println("Light Mode: GO");
delay(2500);
}
