void Drive_Motors()
{
//analogWrite(rpwm, 0);
//analogWrite(lpwm, 0);
if (PS4.LStickY() >15) 
  {
    int leftmotorspeed = PS4.LStickY()*2 ;
   // Serial.println(PS4.LStickY());
    analogWrite(lpwm, leftmotorspeed);
    digitalWrite(ldirect, LOW);
    Serial.println(leftmotorspeed);
    }
    
  if (PS4.LStickY() <-15) 
  {
   int leftmotorspeed = PS4.LStickY()*-2 ;
   // Serial.println(PS4.LStickY());
    analogWrite(lpwm, leftmotorspeed);
    digitalWrite(ldirect, HIGH);
    Serial.println(leftmotorspeed);
    
   }
   
  if (PS4.RStickY() >15) {
    int rightmotorspeed = PS4.RStickY()*2 ;
   // Serial.println(PS4.RStickY());
    analogWrite(rpwm, rightmotorspeed);
    digitalWrite(rdirect, HIGH);
    Serial.println(rightmotorspeed);
  }
   if (PS4.RStickY() <-15) {
    int rightmotorspeed = PS4.RStickY()*-2 ;
   // Serial.println(PS4.RStickY());
    analogWrite(rpwm, rightmotorspeed);
    digitalWrite(rdirect, LOW);
    Serial.println(rightmotorspeed);

  }

  if (PS4.RStickY() >-15 && PS4.RStickY()<15 ) {
    int rightmotorspeed = 0 ;
   // Serial.println(PS4.RStickY());
    analogWrite(rpwm, rightmotorspeed);
    digitalWrite(rdirect, HIGH);
    //Serial.println(rightmotorspeed);

  }
   if (PS4.RStickY() >-15 && PS4.RStickY()<15 ) {
    int leftmotorspeed = 0 ;                                                                                                                                                                                                                                                            
   // Serial.println(PS4.LStickY());
    analogWrite(rpwm, leftmotorspeed);
    digitalWrite(rdirect, HIGH);
    //Serial.println(leftmotorspeed);

   }
}
