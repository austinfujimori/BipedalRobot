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
int pos1 = 80;

//knee joint
int pos2 = 90;

//thigh vertical
int pos3 = 90;

//thigh horizontal joint
int pos4 = 85;


//Grey Leg


//ankle joint
int pos5 = 100;

//knee joint
int pos6 = 92;

//thigh vertical
int pos7 = 95;

//thigh horizontal joint
int pos8 = 90;

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

    delay(2000);

      //WALK ONE STEP


// #################################################### 2 ####################################################

  for (pos0 = 0; pos0 <= 25; pos0 += 1) {
    //GRAY LEG
    if (pos0 <= 15){
      //thigh
      myservo7.write(pos7 - pos0);
     //ankle
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

    delay(2000);
  // #################################################### 3 ####################################################

  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //GRAY LEG 
    if (pos0 <= 10){
    //thigh
    myservo7.write(pos7 - 15 - pos0);
    //ankle
    myservo5.write(pos5 + 15 + pos0);
    }

    //WHITE LEG
    //thigh
    if (pos0 <= 10){
    myservo3.write(pos3 - 25 - pos0) ;
    }
    //knee
    myservo2.write(pos2 - 30 + pos0);

    delay(20);
  }

    delay(2000);
  // #################################################### 4 ####################################################

  for (pos0 = 0; pos0 <= 35; pos0 += 1) {
    //GRAY LEG 
    //thigh
    if (pos0 <= 20){
    myservo7.write(pos7 - 15 - 10 + pos0);
    }
    //knee
    if (pos0 <= 20){
    myservo6.write(pos6 + pos0);
    }
    //ankle
    myservo5.write(pos5 + 15 + 10 - pos0);

    //WHITE LEG
    //thigh
    if (pos0 <= 10){
    myservo3.write(pos3 - 25 - 10 + pos0) ;
    }
    //knee
    if (pos0 <= 10){
    myservo2.write(pos2 - 30 + 20 - pos0);
    //ankle
    myservo1.write(pos1 - pos0);
    }

    delay(20);
  }

    delay(2000);
  // #################################################### 5 ####################################################

    for (pos0 = 0; pos0 <= 60; pos0 += 1) {
    //GRAY LEG 
    //thigh
    if(pos0 <= 50){
    myservo7.write(pos7 - 15 - 10 + 20 + pos0);
    }
    //knee
    if(pos0 <= 10){
    myservo6.write(pos6 + 20 - pos0);
    }
    //ankle
    if(pos0 <= 10){
    myservo5.write(pos5 + 15 + 10 - 35 + pos0);
    }

    //WHITE LEG
    //thigh
    myservo3.write(pos3 - 25 - 10 + 10 + pos0) ;
    //knee
    if(pos0 <= 20){
    myservo2.write(pos2 - 30 + 20 - 10 + pos0);
    }
    //ankle
    if(pos0 <= 15){
    myservo1.write(pos1 - 10 - pos0);
    }

    delay(20);
  }
    delay(2000);
  // #################################################### 6 ####################################################

    for (pos0 = 0; pos0 <= 35; pos0 += 1) {
    //GRAY LEG 
    if(pos0 <= 10){
    //thigh
    myservo7.write(pos7 - 15 - 10 + 20 + 50 - pos0);
    //knee
    myservo6.write(pos6 + 20 - 10 + pos0);
    //ankle
    myservo5.write(pos5 + 15 + 10 - 35 + 10 + pos0);
    }

    //WHITE LEG
    if(pos0 <= 20){
    //thigh
    myservo3.write(pos3 - 25 - 10 + 10 + 60 - pos0) ;
    //knee
    myservo2.write(pos2 - 30 + 20 - 10 + 20 - pos0);
    }
    //ankle
    myservo1.write(pos1 - 10 - 15 + pos0);

    delay(20);
  }

    delay(2000);
  // #################################################### 6 ####################################################


  for (pos0 = 0; pos0 <= 60; pos0 += 1) {
    //GRAY LEG 
    if(pos0 <= 60){
    //thigh
    myservo7.write(pos7 - 15 - 10 + 20 + 50 - 10 - pos0);
    }
    //knee
    if(pos0 <= 5){
    myservo6.write(pos6 + 20 - 10 + 10 + pos0);
    }
    if(pos0 <= 10){
    //ankle
    myservo5.write(pos5 + 15 + 10 - 35 + 10 + 10 - pos0);
    }


    //WHITE LEG
    if(pos0 <= 50){
    //thigh
    myservo3.write(pos3 - 25 - 10 + 10 + 60 - 20 - pos0) ;
    }
    //knee
    if(pos0 <= 30){
    myservo2.write(pos2 - 30 + 20 - 10 + 20 - 20 - pos0);
    }
    if(pos0 <= 10){
    //ankle
    myservo1.write(pos1 - 10 - 15 + 35 - pos0);
    }


    delay(20);
  }

  delay(2000);

  //return back to stationary position
  // #################################################### RETURN ####################################################


  for (pos0 = 0; pos0 <= 50; pos0 += 1) {
    //GRAY LEG 
    if(pos0 <= 25){
    //thigh
    myservo7.write(pos7 - 15 - 10 + 20 + 50 - 10 - 60 + pos0);
    }
    //knee
    if(pos0 <= 25){
    myservo6.write(pos6 + 20 - 10 + 10 + 5 - pos0);
    }


    //WHITE LEG
    if(pos0 <= 45){
    //thigh
    myservo3.write(pos3 - 25 - 10 + 10 + 60 - 20 -50 + pos0) ;
    }
    //knee
    if(pos0 <= 50){
    myservo2.write(pos2 - 30 + 20 - 10 + 20 - 20 - 30 + pos0);
    }


    delay(20);
  }
  

  delay(5000);
}