

int E = 6;
int D = 5;
int C = 4;
int DP = 1;
int B = 3;
int A = 2;
int F = 7;
int G = 8;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;

void zero()
{
 digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, HIGH);
}

void one()
{
 digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, HIGH);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}

void two()
{
 digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(C, HIGH);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
}

void three()
{
 digitalWrite(E, HIGH);
digitalWrite(D, LOW);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, LOW);
}
void four()
{
 digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, HIGH);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
}

void five()
{
 digitalWrite(E, HIGH);
digitalWrite(D, LOW);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, HIGH);
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
}

void six()
{
 digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, HIGH);
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
}

void seven()
{
 digitalWrite(E, HIGH);
digitalWrite(D, HIGH);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
digitalWrite(F, HIGH);
digitalWrite(G, HIGH);
}

void eight()
{
 digitalWrite(E, LOW);
digitalWrite(D, LOW);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
}

void nine()
{
 digitalWrite(E, HIGH);
digitalWrite(D, LOW);
digitalWrite(C, LOW);
digitalWrite(DP, HIGH);
digitalWrite(B, LOW);
digitalWrite(A, LOW);
digitalWrite(F, LOW);
digitalWrite(G, LOW);
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
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}




void loop()
{
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, HIGH);
    digitalWrite(D4, LOW);
    
    
    two();
    delay(1);
    
    digitalWrite(D1, LOW);
    digitalWrite(D2, LOW);
    digitalWrite(D3, LOW);
    digitalWrite(D4, HIGH);
    
    eight();
    delay(1);
    
   /*  zero();
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
 */ 
    
}
