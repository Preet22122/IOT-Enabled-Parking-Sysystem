int a=0,b=0,c=0,d=0,e=0,f=0;
const int buttonPin1 = 9;
const int buttonPin2 = 10; 
const int buttonPin3 = 11; 
const int buttonPin4 = 12; 
const int buttonPin5 = 13; // the number of the pushbutton pin
const int ledPinA =  8;
const int ledPinB =  2;  
const int ledPinC =  3;  
const int ledPinD =  4;  
const int ledPinE =  5;  
const int ledPinF =  6;  
const int ledPinG =  7; 
// variables will change:
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;// variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinC, OUTPUT);
  pinMode(ledPinD, OUTPUT);
  pinMode(ledPinE, OUTPUT);
  pinMode(ledPinF, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  // initialize the led pin as an output:
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
}

void loop() {
  // read the state of the nodemcu value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);

  // check if the nodemcu pin is HIGH.
  // if it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
        a=1;
        analogWrite(A0, 250);
  } else {
    a=0;
    analogWrite(A0,0);
  }
   if (buttonState2 == HIGH) {
        b=1;
        analogWrite(A1, 250);
  } else {
        b=0;
       analogWrite(A1,0);
    
  }
   if (buttonState3 == HIGH) {
        c=1;
        analogWrite(A2, 250);
  } else {
    c=0;
    analogWrite(A2,0);
  }
   if (buttonState4 == HIGH) {
        d=1;
        analogWrite(A3, 250);
  } else {
    d=0;
    analogWrite(A3,0);
  }
   if (buttonState5 == HIGH) {
        e=1;
        analogWrite(A4, 250);
  } else {
    e=0;
    analogWrite(A4,0);
  }
 
  delay(1000);
f=5-(a+b+c+d+e);
  Serial.print(a);
  Serial.print(b);
  Serial.print(c);
  Serial.print(d);
  Serial.print(e);
  Serial.print(f);
  Serial.print("//////");
   switch (f){
    case 0:
         digitalWrite(ledPinA, LOW);
         digitalWrite(ledPinB, LOW);
         digitalWrite(ledPinC, LOW);
         digitalWrite(ledPinD, LOW);
         digitalWrite(ledPinE, LOW);
         digitalWrite(ledPinF, LOW);
         digitalWrite(ledPinG, HIGH); 
         break;
    case 1:
        digitalWrite(ledPinB, LOW);
        digitalWrite(ledPinC, LOW);
        digitalWrite(ledPinA, HIGH);
        digitalWrite(ledPinD, HIGH);
        digitalWrite(ledPinE, HIGH);
        digitalWrite(ledPinF, HIGH);
        digitalWrite(ledPinG, HIGH);   
        break;
    case 2:
         digitalWrite(ledPinA, LOW);
         digitalWrite(ledPinB, LOW);
         digitalWrite(ledPinD, LOW);
         digitalWrite(ledPinE, LOW);
         digitalWrite(ledPinG, LOW);
         digitalWrite(ledPinC, HIGH);
         digitalWrite(ledPinF, HIGH);
         break;
    case 3:
         digitalWrite(ledPinA, LOW);
         digitalWrite(ledPinB, LOW);
         digitalWrite(ledPinC, LOW);
         digitalWrite(ledPinD, LOW);
         digitalWrite(ledPinG, LOW);
         digitalWrite(ledPinE, HIGH);
         digitalWrite(ledPinF, HIGH);
         break;
    case 4:
         digitalWrite(ledPinB, LOW);
         digitalWrite(ledPinC, LOW);
         digitalWrite(ledPinF, LOW);
         digitalWrite(ledPinG, LOW);
         digitalWrite(ledPinA, HIGH);
         digitalWrite(ledPinD, HIGH);
         digitalWrite(ledPinE, HIGH);
         break;
    case 5:
         digitalWrite(ledPinA, LOW);
         digitalWrite(ledPinC, LOW);
         digitalWrite(ledPinD, LOW);
         digitalWrite(ledPinF, LOW);
         digitalWrite(ledPinG, LOW);
         digitalWrite(ledPinB, HIGH);
         digitalWrite(ledPinE, HIGH);
         break;
  }
  
  }
