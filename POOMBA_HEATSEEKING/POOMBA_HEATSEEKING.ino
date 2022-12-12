 
#include "Adafruit_VL6180X.h"

//#include  <WiFi.h>
//#include <FirebaseESP32.h>
//#include <PS4Controller.h>
#include <Arduino.h>
#include <analogWrite.h>
#include <Adafruit_MLX90640.h>
unsigned long lastTimeStamp = 0;
#include <Wire.h>
#include "headers/MLX90640_API.h"
#include <Adafruit_I2CDevice.h>


Adafruit_VL6180X vl = Adafruit_VL6180X();
#define PRINT_TEMPERATURES


Adafruit_MLX90640 mlx;
float frame[32*24]; // buffer for full frame of temperatures
int mod = 0;
int therm =0;
int term =0;
int headingError=0;
int max_temp = 0;
int max_col = 0;
int max_row = 0;
int Speed = 120;
int cmdDelta = 0;
int kp = 4;
int cmdLeftMotor = 0;
int cmdRightMotor = 0;


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



//FirebaseData firebaseData;
//FirebaseJson json;


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


TaskHandle_t Task1;
TaskHandle_t Task2;
TaskHandle_t Task3;

void setup() 
{
  Serial.begin(115200);

//PS4.attach(notify);
// PS4.attachOnConnect(onConnect);
//  PS4.attachOnDisconnect(onDisConnect);
//  PS4.begin();
//  Serial.println("Ready.");
  

  pinMode(nemastep, OUTPUT);
  pinMode(nemadir, OUTPUT);
  pinMode(rdirect, OUTPUT);
  pinMode(ldirect, OUTPUT);
  pinMode(waterpump, OUTPUT);
  pinMode(swiffup, OUTPUT);
  pinMode(swiffdown, OUTPUT);
  analogWrite(rpwm, 0);
  analogWrite(lpwm, 0);

 
 Serial.println("Adafruit VL6180x test!");
  if (! vl.begin()) {
    Serial.println("Failed to find sensor");
    while (1);
  }
  Serial.println("Sensor found!");



  


      
   Serial.println("Adafruit MLX90640 Simple Test");
  if (! mlx.begin(MLX90640_I2CADDR_DEFAULT, &Wire)) {
    Serial.println("MLX90640 not found!");
    while (1) delay(10);
  }
  Serial.println("Found Adafruit MLX90640");

  Serial.print("Serial number: ");
  Serial.print(mlx.serialNumber[0], HEX);
  Serial.print(mlx.serialNumber[1], HEX);
  Serial.println(mlx.serialNumber[2], HEX);
  
  //mlx.setMode(MLX90640_INTERLEAVED);
  mlx.setMode(MLX90640_CHESS);
  Serial.print("Current mode: ");
  if (mlx.getMode() == MLX90640_CHESS) {
    Serial.println("Chess");
  } else {
    Serial.println("Interleave");    
  }
  Wire.setClock(4000000);
  mlx.setResolution(MLX90640_ADC_18BIT);
  Serial.print("Current resolution: ");
  mlx90640_resolution_t res = mlx.getResolution();
  switch (res) {
    case MLX90640_ADC_16BIT: Serial.println("16 bit"); break;
    case MLX90640_ADC_17BIT: Serial.println("17 bit"); break;
    case MLX90640_ADC_18BIT: Serial.println("18 bit"); break;
    case MLX90640_ADC_19BIT: Serial.println("19 bit"); break;
  }

  mlx.setRefreshRate(MLX90640_16_HZ);
  Serial.print("Current frame rate: ");
  mlx90640_refreshrate_t rate = mlx.getRefreshRate();
  switch (rate) {
    case MLX90640_0_5_HZ: Serial.println("0.5 Hz"); break;
    case MLX90640_1_HZ: Serial.println("1 Hz"); break; 
    case MLX90640_2_HZ: Serial.println("2 Hz"); break;
    case MLX90640_4_HZ: Serial.println("4 Hz"); break;
    case MLX90640_8_HZ: Serial.println("8 Hz"); break;
    case MLX90640_16_HZ: Serial.println("16 Hz"); break;
    case MLX90640_32_HZ: Serial.println("32 Hz"); break;
    case MLX90640_64_HZ: Serial.println("64 Hz"); break;
}

//    xTaskCreatePinnedToCore(
//      Ultra_Sonic, /* Function to implement the task */
//      "Task1", /* Name of the task */
//      10000,  /* Stack size in words */
//      NULL,  /* Task input parameter */
//      1,  /* Priority of the task */
//      &Task1, /* Task handle. */
//      0);  /*core */
//
//       xTaskCreatePinnedToCore(
//      thermal, /* Function to implement the task */
//      "Task2", /* Name of the task */
//      150000,  /* Stack size in words */
//      NULL,  /* Task input parameter */
//      2,  /* Priority of the task */
//      &Task2, /* Task handle. */
//      0);  /*core*/
//
//         xTaskCreatePinnedToCore(
//      Doody_Cycle, /* Function to implement the task */
//      "Task3", /* Name of the task */
//      150000,  /* Stack size in words */
//      NULL,  /* Task input parameter */
//      3,  /* Priority of the task */
//      &Task3, /* Task handle. */
//      1);  /*core*/
//
//    vTaskSuspend(Task3);


}
void loop() {
  
     thermal3();
//      timeofflight();
//   if (range<100){
//    analogWrite(lpwm, 0);
//    digitalWrite(ldirect, LOW);
//     analogWrite(rpwm, 0);
//    digitalWrite(rdirect, HIGH);  
//    Serial.println("initiate Doody Cycle"); 
//    delay(10000);  
//
//   }

 
   }
       
      
 
