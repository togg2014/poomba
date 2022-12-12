void Linear_Actuator()
{

//
    if (PS4.Right() == 1) {
   //if (PS4.Left() == 1) {
    //swiffer down
    
    digitalWrite(swiffdown  , HIGH);
    digitalWrite(swiffup , LOW);
  }
  
  
    else if (PS4.Left() == 1) {
    //if (PS4.Right() == 1) {
    //swiffer up
   
    digitalWrite(swiffup, HIGH);
    digitalWrite(swiffdown, LOW);
   }
   
   else{
    digitalWrite(swiffdown  , LOW);
    digitalWrite(swiffup , LOW);
  }

}
