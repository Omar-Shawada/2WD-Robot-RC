char reading=0;
void setup(){
  Serial.begin(9600);
  for(int i=5;i<=10;i++){
    pinMode(i,OUTPUT);
  }
}
void loop(){
  if(Serial.available()>0){
    reading=Serial.read();
    switch(reading){
      case 'f' : analogWrite(5,200);
      analogWrite(10,200);
    
      digitalWrite(9,HIGH);
      digitalWrite(7,HIGH);
       digitalWrite(8,LOW);
      digitalWrite(6,LOW);
       break;
    case 'b' :  analogWrite(5,200);
      analogWrite(10,200);
    
      digitalWrite(8,HIGH);
      digitalWrite(6,HIGH);
       digitalWrite(9,LOW);
      digitalWrite(7,LOW);
      
       break;
      case 'r' : analogWrite(5,200);
      analogWrite(10,200);
    
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
      
      break;
       case 'l' : analogWrite(5,200);
      analogWrite(10,200);
    
      digitalWrite(7,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(8,LOW);
      digitalWrite(6,LOW);
      
      break;
    case 's' : digitalWrite(9,LOW);
      digitalWrite(8,LOW);
      digitalWrite(7,LOW);
      digitalWrite(6,LOW);
    }}}
   
