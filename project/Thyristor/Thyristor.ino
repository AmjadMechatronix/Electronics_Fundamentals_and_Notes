float T=1/50;  //periodic Time T=1/f
int firing_angle =45; 
float fA_start =0; // the time of the firing angle which will start form it
const int pulse_width=0.5;
const int  thyristor1_2=10;//thyristor 1 and thyristor 2 will be connected to pin 10  
const int thyristor3_4=11;//thyristor 3 and thyristor 4 will be connected to pin 11  

void setup() {
pinMode(thyristor1_2,OUTPUT);  
pinMode(thyristor3_4,OUTPUT) ;
digitalWrite(thyristor1_2,LOW);
digitalWrite(thyristor3_4,LOW);
 
 fA_start= (firing_angle*T)/360;
}

void loop() {
delay(fA_start);
digitalWrite(thyristor1_2,HIGH);
delay(pulse_width);
digitalWrite(thyristor1_2,LOW);
delay((T/2)-pulse_width);
digitalWrite(thyristor3_4,HIGH);
delay(pulse_width);
digitalWrite(thyristor3_4,LOW);
delay((T/2)-(pulse_width+fA_start));
}
