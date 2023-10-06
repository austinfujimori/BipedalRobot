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

  //SQUAT
  for (pos0 = 0; pos0 <= 60; pos0 += 1) {
    //GRAY LEG
    //Knee
    myservo6.write(pos6 + pos0);
    //WHITE LEG
    //Knee
    myservo2.write(pos2 - pos0);


    //ankle
    if (pos0 <= 30){
    myservo5.write(pos5 + pos0);
    }
    //ankle
    if (pos0 <= 30){
    myservo1.write(pos1 - pos0);
    }

    //Thigh
    if (pos0 >= 40){
    myservo3.write(pos3 - (pos0-40) );
    }
    //Thigh
    if (pos0 >= 40){
    myservo7.write(pos7 + (pos0-40) );
    }
    delay(20);
  }
  for (pos0 = 0; pos0 <= 20; pos0 += 1) {
    //Thigh
    myservo3.write(pos3 - 20 - pos0 );
    //Thigh
    myservo7.write(pos7 + 20 + pos0 );
    delay(20);
  }

  delay(2000);



  int squats = 0;

  while(squats < 3){
  //SQUAT DEEP
  for (pos0 = 0; pos0 <= 40; pos0 += 1) {
    //GRAY LEG
    //Knee
    myservo6.write(pos6 + 60 + pos0);
    //WHITE LEG
    //Knee
    myservo2.write(pos2 - 60 - pos0);


    //ankle
    if (pos0 <= 30){
    myservo5.write(pos5 + 30 +  pos0);
    }
    //ankle
    if (pos0 <= 30){
    myservo1.write(pos1 - 30 - pos0);
    }

    //Thigh
    if (pos0 >= 30){
    myservo3.write(pos3 - 40 + (pos0-30) );
    }
    //Thigh
    if (pos0 >= 30){
    myservo7.write(pos7 + 40 - (pos0-30) );
    }
    delay(20);
  }

  delay(500);

  //SQUAT BACK
  for (pos0 = 0; pos0 <= 40; pos0 += 1) {
    //Thigh
    if (pos0 <= 10){
    myservo3.write(pos3 - 30 - pos0 );
    }
    //Thigh
    if (pos0 <= 10){
    myservo7.write(pos7 + 30 + pos0 );
    }


    //ankle
    if (pos0 <= 30){
    myservo5.write(pos5 + 60 -  pos0);
    }
    //ankle
    if (pos0 <= 30){
    myservo1.write(pos1 - 60 + pos0);
    }

    //Knee
    myservo6.write(pos6 + 100 - pos0);
    //Knee
    myservo2.write(pos2 - 100 + pos0);


    delay(20);
  }
  squats++;
  delay(500);
  }


    //SQUAT BACK DEEP
  for (pos0 = 0; pos0 <= 60; pos0 += 1) {
    //ankle
    if (pos0 <= 30){
    myservo5.write(pos5 + 30 - pos0);
    }
    //ankle
    if (pos0 <= 30){
    myservo1.write(pos1 - 30 +  pos0);
    }

    //Knee
    myservo6.write(pos6 + 60 - pos0);
    //Knee
    myservo2.write(pos2 - 60 +  pos0);

    delay(20);
  }
  for (pos0 = 0; pos0 <= 40; pos0 += 1) {
    //Thigh
    myservo3.write(pos3 - 40 + pos0 );
    //Thigh
    myservo7.write(pos7 + 40 - pos0 );
    delay(30);
  }


  

  delay(1000);
}