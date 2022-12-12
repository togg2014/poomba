void thermal(){

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
      }
  }
  }
      Serial.print(max_temp);
      Serial.println("deg");
//
     
      
      

//if (max_col<16 ){
//  Firebase.setInt(firebaseData, "/POOMBASENSOR/THERMAL", 0);
//   Serial.print("column");      
//      Serial.println(max_col);
////delay(500);
//}
//
//else if(max_col>17 ){
//  Firebase.setInt(firebaseData, "/POOMBASENSOR/THERMAL", 0);
//   Serial.print("column");      
//      Serial.println(max_col);
////delay(500);
//}
//else{ 
//  Firebase.setInt(firebaseData, "/POOMBASENSOR/THERMAL", 1);
//   Serial.print("column");      
//      Serial.println(max_col);
////delay(500);
//
//  
//
//}
}
