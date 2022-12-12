void Water_Pump(){
  
  if (PS4.Circle() ==1){
    digitalWrite(waterpump, HIGH);
  }
  else {digitalWrite(waterpump, LOW);
}
}
