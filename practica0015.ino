// C++ code



  
  #define pinA 10 //entrada 10
  #define  pinB 9 //entrada 9
  #define  pinC 8 //entrada 8
  #define  pinS 11 //salida 11 rele
  int tempo =4000;
  bool condicion = -1;
  bool a, b, c = -1;
  void setup ()
  {
  pinMode (pinA,INPUT);
  pinMode (pinB,INPUT);
  pinMode (pinC,INPUT);
  pinMode (pinS,OUTPUT);
  
  }
  
 void loop(){
 

a = digitalRead(pinA);
b = digitalRead(pinB);
c = digitalRead(pinC);

condicion = (!a && b && !c) ||(a && b && !c) || (a && b && c);

if (condicion){
     digitalWrite(pinS,HIGH);
     delay(400);
 }
 else{
   digitalWrite(pinS,LOW);
     delay(400);
 }}
