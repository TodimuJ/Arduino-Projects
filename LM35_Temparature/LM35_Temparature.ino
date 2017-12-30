const int pin =0;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int temp = analogRead(pin);
  //Serial.print(temp); Serial.print(" = ");
  float mVolts = (temp/1024.0)* 5000;
  float celsius = mVolts/10; //Sensor output is 10mV per degree Celsius.
  Serial.print("The temperature is "); Serial.print(celsius); Serial.print(" degrees Celsius. ");
  Serial.print("\n");
  //Serial.print((celsius*9)/ + 32); Serial.print(" degrees Fahrenheit"); //Covertion to Fahrenheit
  delay(1000); 
}

