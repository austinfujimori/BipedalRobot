#include <Servo.h>

Servo myservo1;
Servo myservo2;  
Servo myservo3; 
Servo myservo4;

Servo myservo5;
Servo myservo6;
Servo myservo7;
Servo myservo8;


//test
int pos0 = 90;




// White leg

//ankle joint
int pos1 = 90;

//knee joint
int pos2 = 90;

//thigh vertical
int pos3 = 95;

//thigh horizontal joint
int pos4 = 5;


//Grey Leg


//ankle joint
int pos5 = 100;

//knee joint
int pos6 = 93;

//thigh vertical
int pos7 = 93;

//thigh horizontal joint
int pos8 = 100;

void setup() {

  //ankle
  myservo1.attach(9); 
  myservo2.attach(10);
  myservo3.attach(11);
  myservo4.attach(12);

  //grey ankle
  myservo5.attach(6);


  myservo6.attach(4);

  myservo7.attach(7);

  myservo8.attach(5);
}

void loop() {



  //STANDING POSITION
    
  //1

  //WHITE LEG
  //ankle
  myservo1.write(pos1);
  //knee
  myservo2.write(pos2);
  //thigh
  myservo3.write(pos3);
  //hip
  myservo4.write(pos4);

//GRAY LEG
//ankle
  myservo5.write(pos5);
  //knee
  myservo6.write(pos6);
  //thigh
  myservo7.write(pos7);
  //hip
  myservo8.write(pos8);

  delay(1000);

  int steps = 0;
  while(steps <5){

  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //Hip
    myservo8.write(pos8 - pos0 );
    //Hip
    myservo4.write(pos4 + pos0);
    delay(20);
  }
  
  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //Hip
    myservo8.write(pos8 - 20 + pos0 );
    //Hip
    myservo4.write(pos4 + 20 - pos0 );
    delay(20);
  }

  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //Hip
    myservo8.write(pos8 + pos0 );
    //Hip
    myservo4.write(pos4 - pos0);
    delay(20);
  }
  
  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //Hip
    myservo8.write(pos8 + 20 - pos0 );
    //Hip
    myservo4.write(pos4 - 20 + pos0 );
    delay(20);
  }

steps++;
delay(10)

  }

    delay(1000);
}