//void thermal(void * parameter) {
//  
//
// for(;;) {
//  
//   max_temp=0;
//  delay(100);
//  if (mlx.getFrame(frame) != 0) {
//    Serial.println("Failed");
//    return;
//  }
//  //Serial.println();
// // Serial.println();
//  for (uint8_t h=0; h<24; h++) {
//    for (uint8_t w=0; w<32; w++) {
//      float t = frame[h*32 + w];
//       if (t > max_temp){ 
//          max_temp = t;
//          max_col = w;   
//      }
//  }
//  }
//      Serial.print(max_temp);
//      Serial.println("deg");
//
//      Serial.print("column");      
//      Serial.println(max_col);
//      
//      
//
//if (max_col<16){
//  headingError=16-max_col;
//  cmdDelta = kp * headingError;
//        cmdLeftMotor = -cmdDelta + Speed;
//        cmdRightMotor = cmdDelta + Speed;
//      
//        cmdLeftMotor = constrain(cmdLeftMotor, 0, 255);
//        cmdRightMotor = constrain(cmdRightMotor,0, 255);
//}
//
//
// else if (max_col>17){
//  headingError=max_col-17;
//
//    
//   cmdDelta = kp * headingError;
//        cmdLeftMotor = cmdDelta + Speed;
//        cmdRightMotor = -cmdDelta + Speed;
//      
//        cmdLeftMotor = constrain(cmdLeftMotor, 0, 255);
//        cmdRightMotor = constrain(cmdRightMotor,0, 255);
// }
//
// else {
//  headingError=0;
//
//    
//   cmdDelta = kp * headingError;
//        cmdLeftMotor = cmdDelta + Speed;
//        cmdRightMotor = cmdDelta + Speed;
//      
//        cmdLeftMotor = constrain(cmdLeftMotor, 0, 255);
//        cmdRightMotor = constrain(cmdRightMotor,0, 255);
//
//
//  
// }
//          
//    analogWrite(lpwm, cmdLeftMotor);
//    digitalWrite(ldirect, LOW);
//     analogWrite(rpwm, cmdRightMotor);
//    digitalWrite(rdirect, HIGH);     
//
// 
//  
//         Serial.print("cmdLeftMotor: ");
//        Serial.println(cmdLeftMotor);
//         Serial.print("cmdRightMotor: ");
//        Serial.println(cmdRightMotor);
//         Serial.print("headingError: ");
//        Serial.println(headingError);
//
//            }}
