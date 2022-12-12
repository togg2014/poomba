void thermal3(){
  


  float lux = vl.readLux(VL6180X_ALS_GAIN_5);

  
  
  uint8_t range = vl.readRange();
  uint8_t status = vl.readRangeStatus();

  
   max_temp=0;
  delay(100);
  if (mlx.getFrame(frame) != 0) {
    Serial.println("Failed");
    return;
  }
  //Serial.println();
 // Serial.println();
  for (uint8_t h=0; h<24; h++) {
    for (uint8_t w=0; w<32; w++) {
      float t = frame[h*32 + w];
       if (t > max_temp){ 
          max_temp = t;
          max_col = w;  
          max_row = h; 
      }
  }
  }
//      Serial.print(max_temp);
//      Serial.println("deg");
//
//      Serial.print("column");      
//      Serial.println(max_col);
 Serial.print("row"); Serial.println(max_row);
//      

if (max_row<12 ){
  Firebase.setInt(firebaseData, "/POOMBASENSOR/THERMAL", 0);
//   Serial.print("column");      
//      Serial.println(max_col);
//delay(500);
}

else if(max_col>13 ){
  Firebase.setInt(firebaseData, "/POOMBASENSOR/THERMAL", 0);
//   Serial.print("column");      
//      Serial.println(max_col);
//delay(500);
}
else{ 
  Firebase.setInt(firebaseData, "/POOMBASENSOR/THERMAL", 1);
   Serial.print("column");      
      Serial.println(max_col);
//delay(500);

  

}



      

 

            }
            
