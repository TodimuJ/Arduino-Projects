int inPin = 2;
int buzzer = 11;
int rPin = 12;
int gPin = 13;
int reading; 

void setup()
{
  // put your setup code here, to run once:
 // pinMode(buzzer, OUTPUT);
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(inPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
reading = digitalRead(inPin);

if(reading==1)
{
  digitalWrite(rPin, HIGH); //If tilted, turn the red LED on
  digitalWrite(gPin, LOW);
  tone(buzzer, 494, 500); //If tilted, also turn the speaker on
  delay(500);
}

else
{
  digitalWrite(rPin, LOW); 
  digitalWrite(gPin, HIGH); //If not tilted, turn the green LED on 
}

Serial.print(reading); 
delay(100);
}



