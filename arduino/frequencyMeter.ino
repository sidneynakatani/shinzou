//  Variables
int PulseSensor = 0;     
int LED_5 = 5;  


int Signal;                     // Signal value can range from 0-1024
int Threshold = 550;            // Signal to 'count as a beat'. 



void setup() {
   pinMode(LED_5,OUTPUT);         
   Serial.begin(9600);       
   
}


void loop() {

  Signal = analogRead(PulseSensor);  
                                             

   Serial.println(Signal);                 .

   
   if(Signal > Threshold){                   
     digitalWrite(LED_5,HIGH);          
   } else {
     digitalWrite(LED_5,LOW);             
   }


delay(10);
   
   
}
