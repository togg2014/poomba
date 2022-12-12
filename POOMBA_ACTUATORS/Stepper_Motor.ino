void Stepper_Motor()
{
  digitalWrite(nemastep, LOW);
  digitalWrite(nemadir, LOW);

   
  if (PS4.Up() == 1) {
    //stepper down
   // Set the spinning direction counterclockwise:
     digitalWrite(nemadir, LOW);
    // These four lines result in 1 step:
    digitalWrite(nemastep, HIGH);
    delayMicroseconds(50);
    digitalWrite(nemastep, LOW);
    delayMicroseconds(50);
    Serial.println(PS4.Down());
  }
 if (PS4.Down() == 1) {

   // Set the spinning direction clockwise:
     digitalWrite(nemadir, HIGH);
    // These four lines result in 1 step:
    digitalWrite(nemastep, HIGH);
    delayMicroseconds(50);
    digitalWrite(nemastep, LOW);
    delayMicroseconds(50);
    Serial.println(PS4.Up());
   }

  
}
