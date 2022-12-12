//#include <FirebaseESP32.h>
//#include  <WiFi.h>
//
//
//
//
//#include <Arduino.h>
//
//
//#include <Adafruit_MLX90640.h>
//
//#include "headers/MLX90640_API.h"
//#include <Adafruit_I2CDevice.h>
//
//
//#define FIREBASE_HOST "esp32poomba-default-rtdb.firebaseio.com"
//#define WIFI_SSID "pablojaxx" // Change the name of your WIFI
//#define WIFI_PASSWORD "pablojaxx" // Change the password of your WIFI
//#define FIREBASE_Authorization_key "5Ae4H0umkqKO7FguZEWwtq9oBrK27LFkW7digNqE"
//
//
//#include "Adafruit_VL6180X.h"
//
//Adafruit_VL6180X vl = Adafruit_VL6180X();
//
//FirebaseData firebaseData;
//FirebaseJson json;
//
//Adafruit_MLX90640 mlx;
//float frame[32*24]; // buffer for full frame of temperatures
//int mod = 0;
//int therm =0;
//int term =0;
//int headingError=0;
//int max_temp = 0;
//int max_col = 0;
//int max_row = 0;
//int Speed = 150;
//int cmdDelta = 0;
//int kp = 6;
//int cmdLeftMotor = 0;
//int cmdRightMotor = 0;
//
//
//
//void setup() {
//  
//  Serial.begin(115200); // // Serial Communication is starting with 9600 of baudrate speed
//
//   WiFi.begin (WIFI_SSID, WIFI_PASSWORD);
//   Serial.print("Connecting...");
//  while (WiFi.status() != WL_CONNECTED)
//  {
//    Serial.print(".");
//    delay(300);
//  }
//  Serial.println();
//  Serial.print("IP Address: ");
//  Serial.println(WiFi.localIP());
//  Serial.println();
//  Firebase.begin(FIREBASE_HOST,FIREBASE_Authorization_key);
//
//
//  Serial.println("Adafruit MLX90640 Simple Test");
//  if (! mlx.begin(MLX90640_I2CADDR_DEFAULT, &Wire)) {
//    Serial.println("MLX90640 not found!");
//    while (1) delay(10);
//  }
//  Serial.println("Found Adafruit MLX90640");
//
//  Serial.print("Serial number: ");
//  Serial.print(mlx.serialNumber[0], HEX);
//  Serial.print(mlx.serialNumber[1], HEX);
//  Serial.println(mlx.serialNumber[2], HEX);
//  
//  //mlx.setMode(MLX90640_INTERLEAVED);
//  mlx.setMode(MLX90640_CHESS);
//  Serial.print("Current mode: ");
//  if (mlx.getMode() == MLX90640_CHESS) {
//    Serial.println("Chess");
//  } else {
//    Serial.println("Interleave");    
//  }
// 
//  mlx.setResolution(MLX90640_ADC_18BIT);
//  Serial.print("Current resolution: ");
//  mlx90640_resolution_t res = mlx.getResolution();
//  
//  Wire.setClock(4000000);
//
//  mlx.setRefreshRate(MLX90640_16_HZ);
//  Serial.print("Current frame rate: ");
//  mlx90640_refreshrate_t rate = mlx.getRefreshRate();
//
//
//  Serial.println("Adafruit VL6180x test!");
//  if (! vl.begin()) {
//    Serial.println("Failed to find sensor");
//    while (1);
//  }
//  Serial.println("Sensor found!");
//
//  
//
//}
//void loop() {
//  thermal();
//  timeofflight();
//  delay(300);
//
//}
