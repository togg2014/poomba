void Doody_Cycle()
  {
    




    analogWrite(lpwm, 0);
    analogWrite(rpwm, 0);
    

    

    Serial.println("motorstop");


for (int h=0; h < doodynema ; h++){
     // Set the spinning direction clockwise:
     digitalWrite(nemadir, HIGH);
    // These four lines result in 1 step:
    digitalWrite(nemastep, HIGH);
    delayMicroseconds(50);
    digitalWrite(nemastep, LOW);
    delayMicroseconds(50);
     Serial.println("vacuumon");
}
for (int j=0; j < 100 ; j++){
  Serial.println("vacuumon");
  delay(10);
}
    Serial.println("nemadownstop");

delay(2000);

for (int i=0; i < doodynema ; i++){
    //stepper down
   // Set the spinning direction counterclockwise:
     digitalWrite(nemadir, LOW);
    // These four lines result in 1 step:
    digitalWrite(nemastep, HIGH);
    delayMicroseconds(50);
    digitalWrite(nemastep, LOW);
    delayMicroseconds(50);
    Serial.println("nemaup");
}
      Serial.println("nemaupstop");



      Serial.println("waterpumpon");

      digitalWrite(waterpump, HIGH);
      delay(1500);
      digitalWrite(waterpump, LOW);

      Serial.println("waterpumpoff");

      
      Serial.println("swifferdown");

      digitalWrite(swiffdown, HIGH);
      delay(1000);
      digitalWrite(swiffdown, LOW);



      Serial.println("drive forward");

       analogWrite(rpwm, doodyspeed);
    digitalWrite(rdirect, HIGH);
    analogWrite(lpwm, doodyspeed);
    digitalWrite(ldirect, LOW);
    delay(doodytime);
    analogWrite(lpwm, 0);
    analogWrite(rpwm, 0);

    Serial.println("motorstop");

      Serial.println("swifferup ");

    digitalWrite(swiffup, HIGH);
      delay(1000);
      digitalWrite(swiffup, LOW);

//  vTaskSuspend(Task3);
//  vTaskResume(Task2);

      
      

      

}
