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

    delay(3000);


// INITIATE GAIT CYCLE

  for (pos0 = 0; pos0 <= 30; pos0 += 1) {
    //GRAY LEG
    //thigh
    if (pos0 <= 15){
    myservo7.write(pos7 - pos0);
    }
    //ankle
    if (pos0 <= 30){
    myservo5.write(pos5 + pos0);
    }

    //WHITE LEG
    //thigh
    myservo3.write(pos3 - pos0);
    //knee
    if (pos0 <= 30){
    myservo2.write(pos2 - pos0);
    }
    delay(20);
  }

  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //WHITE LEG
    //thigh
    myservo3.write(pos3 - 30 - pos0);
    //knee
    if (pos0 <= 10){
    myservo2.write(pos2 - 30 - pos0);
    }
    delay(20);
  }

  delay(500);

  int steps = 0;
  while(steps <3){

    // START GAIT CYCLE   START GAIT CYCLE  START GAIT CYCLE  START GAIT CYCLE  START GAIT CYCLE  START GAIT CYCLE

  // INITIAL POS  INITIAL POS INITIAL POS INITIAL POS INITIAL POS INITIAL POS
  for (pos0 = 0; pos0 <= 50; pos0 += 1) {
    //WHITE LEG
    //thigh
    myservo3.write(pos3 - 50 + pos0);
    //knee
    if (pos0 <= 30){
    myservo2.write(pos2 - 40 + pos0);
    }
    delay(20);
  }

  delay(500);


  // GRAY LEG SWEEP GRAY LEG SWEEP  GRAY LEG SWEEP  GRAY LEG SWEEP  GRAY LEG SWEEP
  for (pos0 = 0; pos0 <= 40; pos0 += 1) {
    //GRAY LEG
    //thigh
    myservo7.write(pos7 - 15 + pos0);

    //knee
    myservo6.write(pos6 + pos0);
    delay(20);
  }
  for (pos0 = 0; pos0 <= 30; pos0 += 1) {
    //GRAY LEG
    //thigh
    myservo7.write(pos7 + 25 + pos0);

    //knee
    myservo6.write(pos6 + 40 + pos0);

    //ankle
    myservo5.write(pos5 + 30 -pos0);

    //WHITE LEG
    //thigh
    if (pos0 <= 15){
    myservo3.write(pos3 + pos0);
      }
    //knee
    if (pos0 <= 10){
    myservo2.write(pos2 - 10 + pos0);
    }
    //ankle
    if (pos0 <= 20){
    myservo1.write(pos1 - pos0);
    }
    delay(20);
  }
  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //GRAY LEG
    //knee
    myservo6.write(pos6 + 70 - pos0);
  }
  delay(500);

  // FULL STEP FULL STEP FULL STEP FULL STEP FULL STEP FULL STEP FULL STEP 
  for (pos0 = 0; pos0 <= 15; pos0 += 1) {
    //GRAY LEG
    //knee
    if (pos0 <= 10){
    myservo6.write(pos6 + 50 - pos0);
    }
    //thigh
    if (pos0 <= 5){
    myservo7.write(pos7 + 55 - pos0);
    }

    delay(20);
  }

  delay(500);


// INITIAL POS  INITIAL POS INITIAL POS INITIAL POS INITIAL POS INITIAL POS SWAP SWAP SWAP SWAP SWAP
  for (pos0 = 0; pos0 <= 40; pos0 += 1) {
    //GRAY LEG
    //thigh
    myservo7.write(pos7 + 50 - pos0);
    //knee
    if (pos0 <= 30){
    myservo6.write(pos6 + 40 - pos0);
    }
    delay(20);
  }



  // WHITE LEG SWEEP WHITE LEG SWEEP  WHITE LEG SWEEP  WHITE LEG SWEEP  WHITE LEG SWEEP
  for (pos0 = 0; pos0 <= 40; pos0 += 1) {

    //WHITE LEG
    //thigh
    myservo3.write(pos3 + 15 - pos0);

    //knee
    myservo2.write(pos2 - pos0);


    delay(20);
  }
  
  for (pos0 = 0; pos0 <= 30; pos0 += 1) {
    //GRAY LEG
    //thigh
    if (pos0 <= 20){
    myservo7.write(pos7 + 10 - pos0);
      }
    //knee
    if (pos0 <= 10){
    myservo6.write(pos6 + 10 - pos0);
    }
    //ankle
    if (pos0 <= 20){
    myservo5.write(pos5 + pos0);
    }
    delay(20);

    //WHITE LEG

    if (pos0 <= 15){
    //thigh
    myservo3.write(pos3 - 25 - pos0);

    //knee
    myservo2.write(pos2 - 40 - pos0);
    }

    delay(20);
  }
  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //WHITE LEG
    //knee
    myservo2.write(pos2 - 70 + pos0);

  }

  // FULL STEP FULL STEP FULL STEP FULL STEP FULL STEP FULL STEP FULL STEP 
  for (pos0 = 0; pos0 <= 15; pos0 += 1) {

    //WHITE LEG
        //ankle
    myservo1.write(pos1 - 15 + pos0);
    //knee
    if (pos0 <= 10){
    myservo2.write(pos2 - 50 + pos0);
    }
    //thigh
    if (pos0 <= 5){
    myservo3.write(pos3 - 55 + pos0);
    }

    //GRAY LEG
    //ankle
    if (pos0 <= 15){
    myservo5.write(pos5 + 15 + pos0);
    }
    delay(10);
  }

    steps++;
    delay(500);
  }

  delay(3000);
}