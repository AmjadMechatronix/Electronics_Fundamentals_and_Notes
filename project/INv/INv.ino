float T=20;  //periodic Time T=1/f
int M1_2=10;
int M3_4=9;
void setup() {
pinMode(M1_2,OUTPUT);  
pinMode(M3_4,OUTPUT) ;
digitalWrite(M1_2,LOW);
digitalWrite(M3_4,LOW);
 
}

void loop() {
digitalWrite(M3_4,LOW); 
digitalWrite(M1_2,HIGH);
delay(0.5*T);
digitalWrite(M3_4,HIGH);
digitalWrite(M1_2,LOW);
delay(0.5*T);
}
