#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int slider = 0;

float valor1 = 0;
float valor2 = 0;
float valor3 = 0;
float valor4 = 0;
float valor5 = 0;
float valor6 = 0;

void setup() {
 
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(8);
  servo5.attach(10);
  servo6.attach(11);
 
  Serial.begin(9600);
}

void loop() {

  if ( Serial.available() > 0 )  {
    slider = Serial.read();

    if (slider == 49) {
      valor1 = Serial.parseInt();
      Serial.print(valor1);
      if(valor1 > 0){
        servo1.write(valor1);
        }
    }

    if (slider == 50) {
      valor2 = Serial.parseInt();
      Serial.print(valor2);
      if(valor2 > 0){
        servo2.write(valor2);
        }
    }
    
        if (slider == 51) {
      valor3 = Serial.parseInt();
      Serial.print(valor3);
      if(valor3 > 0){
        servo3.write(valor3);
        }
    }
    
        if (slider == 52) {
      valor4 = Serial.parseInt();
      Serial.print(valor4);
      if(valor4 > 0){
        servo4.write(valor4);
        }
    }
    
        if (slider == 53) {
      valor5 = Serial.parseInt();
      Serial.print(valor5);
      if(valor5 > 0){
        servo5.write(valor5);
        }
    }
    
        if (slider == 54) {
      valor6 = Serial.parseInt();
      Serial.print(valor6);
      if(valor6 > 0){
        servo6.write(valor6);
        }
    }


  }
}
