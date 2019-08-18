//1000ms-159degree
//6.2893 ms for 1 degree
//1000ms-22.9cm
//1212ms-360 right_cm
//10*Error in Right_cm
#include<Servo.h>

Servo servo_test;

int angle = 0;  

const int m1Pin1 = 5;  //right motor
const int m1Pin2 =6;  
const int m2Pin1 =11; //left motor
const int m2Pin2 = 3; 

int rate=100;
int ratio;
void setup() {
  // put your setup code here, to run once:
servo_test.attach(9);
   
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(m1Pin1,OUTPUT);
  pinMode(m1Pin2,OUTPUT);
  pinMode(m2Pin1,OUTPUT);
  pinMode(m2Pin2,OUTPUT);
  digitalWrite(0,LOW);
  pinMode(0,OUTPUT);
 // pinMode(1,OUTPUT);
}
//2200 -half
void loop() {
//              digitalWrite(0,LOW);
//              //digitalWrite(1,HIGH);
//             down();
//             delay(1000);
//             up();
//             delay(1000);

//analogWrite(m1Pin1,100);
//analogWrite(m1Pin2,0);
//analogWrite(m2Pin1,100);
//analogWrite(m2Pin2,0);
//delay(1000);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
up();
forward();
down();
delay(1000);
stop_bot();

              
              
}
void forward()
{
  analogWrite(m1Pin1,rate);          //Forward
  analogWrite(m1Pin2,0);
  analogWrite(m2Pin1,rate);
  analogWrite(m2Pin2,0);
}

void backward()
{
   analogWrite(m1Pin1,0);          //Backward
  analogWrite(m1Pin2,rate);
  analogWrite(m2Pin1,0);
  analogWrite(m2Pin2,rate);
}
void right_cm()
{
   analogWrite(m1Pin1,200);          //right_point
  analogWrite(m1Pin2,0);
  analogWrite(m2Pin1,0);
  analogWrite(m2Pin2,200);
}

void left_cm()
{ analogWrite(m1Pin1,0);          //left_point
  analogWrite(m1Pin2,200);
  analogWrite(m2Pin1,200);
  analogWrite(m2Pin2,0);
}
void right_turn()
{analogWrite(m1Pin1,0);          //right_turn
  analogWrite(m1Pin2,0);
  analogWrite(m2Pin1,rate);
  analogWrite(m2Pin2,0);
  
  
  
  }

void left_turn()
{analogWrite(m1Pin1,rate);          //left_turn
  analogWrite(m1Pin2,0);
  analogWrite(m2Pin1,0);
 analogWrite(m2Pin2,0);
  
  
  }
void stop_bot()
{
analogWrite(m1Pin1,0);          //left_turn
  analogWrite(m1Pin2,0);
  analogWrite(m2Pin1,0);
 analogWrite(m2Pin2,0);
}
 
  void rightmt()
  {
 analogWrite(m1Pin1,rate);          //left_turn
  analogWrite(m1Pin2,0);
  analogWrite(m2Pin1,10);
 analogWrite(m2Pin2,0);
    
  }

void p()
{         down();
          forward();
         delay(1400);
          right_cm();
         delay(300);
          rightmt();
         delay(3200);
           stop_bot();
         }

  void a()
  {     
          right_cm();
         delay(85);

         forward();
          delay(1250);


        right_cm();
        delay(544);
               
        forward();
        delay(500);

        right_cm();
        delay(510);


         forward();
        delay(668);


        up();
       
        
        backward();
        
        delay(668);

        left_cm();
        delay(301);

        
        down();
         
         
        forward();
        delay(813);
stop_bot();
  }
  void b()
  {
        forward();
          delay(1400);
          
          right_cm();
         delay(300);
         
          rightmt();
         delay(2300);


        right_cm();
        delay(600);


        rightmt();
         delay(2300);


         

        

  }

  void c()
  {
    left_cm();
    delay(300);

    right_turn();
    delay(2300);
    

  }

 void d()
 {
          forward();
          delay(1400);
          right_cm();
         delay(300);
          rightmt();
         delay(2300);
          


 
 }


 void e()
 {
     forward();
          delay(1400);
          right_cm();
         delay(300);
          rightmt();
         delay(2300);
  
  
  
  }
  

         void down()
         { 
                                 
  
    servo_test.attach(9);
     

           
                    for(angle = 5; angle < 40; angle += 1)    // command to move from 0 degrees to 180 degrees 
                                         {                                  
                                               servo_test.write(angle);                 //command to rotate the servo to the specified angle
                                                        delay(15);                       
                                           } 
 
                   
                // servo_test.detach();
                             
        
             

         }
         void up()
         {
        // servo_test.attach(9);


          
   
          for(angle = 40; angle>=5; angle-=1)     // command to move from 180 degrees to 0 degrees 
                              {                                
                                servo_test.write(angle);              //command to rotate the servo to the specified angle
                                delay(5);                       
                              } 

//servo_test.detach();

            
                                       
                    
             
                      

               
         }
         

