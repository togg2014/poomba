#include <PS4Controller.h>
#include <Arduino.h>
#include <analogWrite.h>



int doodyspeed = 130;
int doodytime = 4000;
int doodynema = 3500;

int rpwm = 32;
int lpwm = 27;
int rdirect = 33;
int ldirect = 12;

int nemastep = 21;
int nemadir = 14;

int swiff = 255;
int swiffdown = 26;
int swiffup = 25;

int waterpump = 4 ;



void notify()
{}
void onConnect()
{
  Serial.println("Connected!.");
}

void onDisConnect()
{
  Serial.println("Disconnected!.");    
}

void setup() 
{
  Serial.begin(115200);
  PS4.attach(notify);
 PS4.attachOnConnect(onConnect);
  PS4.attachOnDisconnect(onDisConnect);
  PS4.begin();
  Serial.println("Ready.");

 


  pinMode(nemastep, OUTPUT);
  pinMode(nemadir, OUTPUT);
  pinMode(rdirect, OUTPUT);
  pinMode(ldirect, OUTPUT);
  pinMode(waterpump, OUTPUT);
  pinMode(swiffup, OUTPUT);
  pinMode(swiffdown, OUTPUT);
  analogWrite(rpwm, 0);
  analogWrite(lpwm, 0);

}

void loop() {

       Drive_Motors();
       Stepper_Motor();
       Linear_Actuator();
       Water_Pump();
       Vacuum_Fan();
       
       if (PS4.Triangle()==1){
        Doody_Cycle();
}
          

  }
     
