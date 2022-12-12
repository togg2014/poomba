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
//      



      

 
if (range>180){  
//Serial.println(range);
if (max_temp>35){
if (max_col>10){
  
if (max_row<12){
  headingError=12-max_row;
  cmdDelta = kp * headingError;
        cmdLeftMotor = cmdDelta + Speed;
        cmdRightMotor = -cmdDelta + Speed;
      
        cmdLeftMotor = constrain(cmdLeftMotor, 0, 255);
        cmdRightMotor = constrain(cmdRightMotor,0, 255);
}


 else if (max_row>13){
  headingError=max_row-13;

    
   cmdDelta = kp * headingError;
        cmdLeftMotor = -cmdDelta + Speed;
        cmdRightMotor = cmdDelta + Speed;
      
        cmdLeftMotor = constrain(cmdLeftMotor, 0, 255);
        cmdRightMotor = constrain(cmdRightMotor,0, 255);
 }

 else {
  headingError=0;

    
   cmdDelta = kp * headingError;
        cmdLeftMotor = cmdDelta + Speed;
        cmdRightMotor = cmdDelta + Speed;
      
        cmdLeftMotor = constrain(cmdLeftMotor, 0, 255);
        cmdRightMotor = constrain(cmdRightMotor,0, 255);


  
 }
          
    analogWrite(lpwm, cmdLeftMotor);
    digitalWrite(ldirect, LOW);
     analogWrite(rpwm, cmdRightMotor);
    digitalWrite(rdirect, HIGH);     

//         Serial.print("column"); Serial.println(max_col);
//          Serial.print("row"); Serial.println(max_row);
//         Serial.print("Range: "); Serial.println(range);
//         Serial.print("cmdLeftMotor: "); 
//         Serial.println(cmdLeftMotor);
//         Serial.print("cmdRightMotor: "); 
         Serial.println(cmdRightMotor);
//         Serial.print("headingError: "); Serial.println(headingError);

            }
             else{
              //  Serial.println("stage 2");
              analogWrite(lpwm, Speed-30);
              digitalWrite(ldirect, LOW);
              analogWrite(rpwm, Speed-30);
              digitalWrite(rdirect, HIGH); 
              }

            
            }
            else{
             //   Serial.println("stage 2");
              analogWrite(lpwm, Speed-30);
              digitalWrite(ldirect, LOW);
              analogWrite(rpwm, Speed-30);
              digitalWrite(rdirect, HIGH); 
              }

}
            else {  
        
              if (range<130){
               
                Serial.println("doody cycle");
                Doody_Cycle();
                max_temp=0;
             
               
              }
               else{
              //  Serial.println("stage 3");
              //  Serial.println(range);
              analogWrite(lpwm, Speed-30);
              digitalWrite(ldirect, LOW);
              analogWrite(rpwm, Speed-30);
              digitalWrite(rdirect, HIGH); 
              }
             

            }
            }
            
