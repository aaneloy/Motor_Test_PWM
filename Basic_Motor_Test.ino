//motor pins
// pin at PWM for analogWrite

const int leftmotor1 = 9; // forward pin left
const int leftmotor2 = 10;

const int rightmotor1 = 5; // forward pin right
const int rightmotor2 = 6;

// different motor speeds
int velHigh = 180;
int velLow = 80;
int velzero   = 0;



void setup() {

 //define motor pins
 pinMode(leftmotor1,OUTPUT);
 pinMode(leftmotor2,OUTPUT);
 pinMode(rightmotor1,OUTPUT);
 pinMode(rightmotor2,OUTPUT);
 
}

void loop() {
  
  int x = 1000;
  
  movFor();
  delay(x);
  movBac();
  delay(x);
  movLef();
  delay(x);
  movRig();  
  delay(x); 
   
}

//function to move ,left, right ,forward, backward and stop!

void movFor(){

 analogWrite(leftmotor1,velHigh);
 analogWrite(leftmotor2,velzero);
 analogWrite(rightmotor1,velHigh);
 analogWrite(rightmotor2,velzero);
}

void movBac(){
 analogWrite(leftmotor1,velzero);
 analogWrite(leftmotor2,velHigh);
 analogWrite(rightmotor1,velzero);
 analogWrite(rightmotor2,velHigh);  
}

void movRig(){
 analogWrite(leftmotor1,velHigh);
 analogWrite(leftmotor2,velzero);
 analogWrite(rightmotor1,velLow);
 analogWrite(rightmotor2,velzero);
}

void movLef(){
 analogWrite(leftmotor1,velLow);
 analogWrite(leftmotor2,velzero);
 analogWrite(rightmotor1,velHigh);
 analogWrite(rightmotor2,velzero);
}

void movStop(){
 analogWrite(leftmotor1,velzero);
 analogWrite(leftmotor2,velzero);
 analogWrite(rightmotor1,velzero);
 analogWrite(rightmotor2,velzero);
}
