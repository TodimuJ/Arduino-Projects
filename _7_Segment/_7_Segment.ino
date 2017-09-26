int E = 6;
int D = 5;
int C = 4;
int DP = 1;
int B = 3;
int A = 2;
int F = 7;
int G = 8;

void zero()
{
 digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(C, HIGH);
digitalWrite(DP, HIGH);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
}

void one()
{
 digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
}

void two()
{
 digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(C, LOW);
digitalWrite(DP, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
}

void three()
{
 digitalWrite(E, LOW);
digitalWrite(D, HIGH);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
}
void four()
{
 digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}

void five()
{
 digitalWrite(E, LOW);
digitalWrite(D, HIGH);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, LOW);
digitalWrite(A, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}

void six()
{
 digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, LOW);
digitalWrite(A, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}

void seven()
{
 digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
}

void eight()
{
 digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}

void nine()
{
 digitalWrite(E, LOW);
digitalWrite(D, HIGH);
digitalWrite(C, HIGH);
digitalWrite(DP, LOW);
digitalWrite(B, HIGH);
digitalWrite(A, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}


void setup() {
  // put your setup code here, to run once:
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);  
}


void loop() 
{
  // put your main code here, to run repeatedly:
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
  eight();
  delay(1000);
  seven();
  delay(1000);
  six();
  delay(1000);
  five();
  delay(1000);
  four();
  delay(1000);
  three();
  delay(1000);
  two();
  delay(1000);
  one();
  delay(1000);
}
