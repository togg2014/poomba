//  void Ultra_Sonic(void * parameter)
//  {
//    for(;;) {
// 
//float lux = vl.readLux(VL6180X_ALS_GAIN_5);
//
//  Serial.print("Lux: "); Serial.println(lux);
//  
//  uint8_t range = vl.readRange();
//  uint8_t status = vl.readRangeStatus();
//
//  if (status == VL6180X_ERROR_NONE) {
//    Serial.print("Range: "); Serial.println(range);
//  }
//
//  // Some error occurred, print it out!
//  
//  if  ((status >= VL6180X_ERROR_SYSERR_1) && (status <= VL6180X_ERROR_SYSERR_5)) {
//    Serial.println("System error");
//  }
//  else if (status == VL6180X_ERROR_ECEFAIL) {
//    Serial.println("ECE failure");
//  }
//  else if (status == VL6180X_ERROR_NOCONVERGE) {
//    Serial.println("No convergence");
//  }
//  else if (status == VL6180X_ERROR_RANGEIGNORE) {
//    Serial.println("Ignoring range");
//  }
//  else if (status == VL6180X_ERROR_SNR) {
//    Serial.println("Signal/Noise error");
//  }
//  else if (status == VL6180X_ERROR_RAWUFLOW) {
//    Serial.println("Raw reading underflow");
//  }
//  else if (status == VL6180X_ERROR_RAWOFLOW) {
//    Serial.println("Raw reading overflow");
//  }
//  else if (status == VL6180X_ERROR_RANGEUFLOW) {
//    Serial.println("Range reading underflow");
//  }
//  else if (status == VL6180X_ERROR_RANGEOFLOW) {
//    Serial.println("Range reading overflow");
//  }
//  delay(50);
//
//
//if(range<100){
//  vTaskSuspend(Task2);
//
//  vTaskResume(Task3);
//  //     vTaskDelay(10/ portTICK_PERIOD_MS);
////     analogWrite(lpwm, 0);
////     analogWrite(rpwm, 0);
////   vTaskDelay(2000/ portTICK_PERIOD_MS);
////   analogWrite(lpwm, 200);
////    digitalWrite(ldirect, LOW);
////     analogWrite(rpwm, 200);
////    digitalWrite(rdirect, HIGH);
////    vTaskDelay(690/ portTICK_PERIOD_MS);
////    analogWrite(lpwm, 0);
////     analogWrite(rpwm, 0);
////   vTaskDelay(100000/ portTICK_PERIOD_MS);
//
//
//}
//
//                   
// vTaskDelay(50/ portTICK_PERIOD_MS);
// 
// 
//      
//     }}
// 
// 
// 
//  