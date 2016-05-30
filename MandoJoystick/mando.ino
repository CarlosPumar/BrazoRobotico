#include <Servo.h>      //incluimos la librería servo.

//declaramos los servos en la librería.
Servo servo1;     
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

 //pines joystick y botones
int ejex1 = A1;
  int ejey1 = A2;
int ejex2 = A3;
int ejey2 = A4;
int button1 = 7;
int button2 = 13;
int button3 = 2;

//valores joystick
int xvalue1 = 0; 
int yvalue1 = 0;
int xvalue2 = 0;
int yvalue2 = 0;

int tiempo = 50;  //tiempo de espera de los servos

//posiciones iniciales de los servos
int posServo1 = 90; 
int posServo2 = 100;
int posServo3 = 90;
int posServo4 = 90;
int posServo5 = 90;
int posServo6 = 0;

//valores botones
int buttonvalue1;   int buttonvalue2;
int buttonvalue3;

void setup() {

//establecemos los botones como entradas digitales.
  pinMode (button1, INPUT);   
  pinMode (button2, INPUT);
  pinMode (button3, INPUT);

//pines de los servos, los declaramos en la librería
  servo1.attach(3);     
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(8);
  servo5.attach(10);
  servo6.attach(11);

  Serial.begin(9600);     //iniciamos comunicación con el puerto serie

}

void loop() {

//fijamos los valores de los joysticks a lo leido por los pines.
  xvalue1 = analogRead(ejex1);    
  yvalue1 = analogRead(ejey1);

  xvalue2 = analogRead(ejex2);
  yvalue2 = analogRead(ejey2);

  //primer joystick
  if (xvalue1 < 400)  {
    posServo2 = posServo2 - 1;
    servo2.write(posServo2);
    delay(tiempo);
    Serial.print("Servo2 - ");
    Serial.println(posServo2);
  }
  if (xvalue1 > 600)  {
    posServo2 = posServo2 + 1;
    servo2.write(posServo2);
    delay(tiempo);
    Serial.print("Servo2 - ");
    Serial.println(posServo2);
  }


  if (yvalue1 < 400)  {
    posServo3 = posServo3 - 1;
    servo3.write(posServo3);
    delay(tiempo);
    Serial.print("Servo3 - ");
    Serial.println(posServo3);
  }
  if (yvalue1 > 600)  {
    posServo3 = posServo3 + 1;
    servo3.write(posServo3);
    delay(tiempo);
    Serial.print("Servo3 - ");
    Serial.println(posServo3);
  }


  //segundojoystick
  if (xvalue2 < 400)  {
    posServo4 = posServo4 + 1;
    servo4.write(posServo4);
    delay(tiempo);
    Serial.print("Servo4 + ");
    Serial.println(posServo4);
  }
  if (xvalue2 > 600)  {
    posServo4 = posServo4 - 1;
    servo4.write(posServo4);
    delay(tiempo);
    Serial.print("Servo4 - ");
    Serial.println(posServo4);
  }


  if (yvalue2 < 400)  {
    posServo5 = posServo5 - 1;
    servo5.write(posServo5);
    delay(tiempo);
    Serial.print("Servo5 - ");
    Serial.println(posServo5);
  }
  if (yvalue2 > 600)  {
    posServo5 = posServo5 + 1;
    servo5.write(posServo5);
    delay(tiempo);
    Serial.print("Servo5 - ");
    Serial.println(posServo5);
  }

  //boton
  buttonvalue1 = digitalRead (button1);

  if (buttonvalue1 == HIGH) {
    posServo1 = posServo1 - 1;
    servo1.write(posServo1);
    delay(tiempo);
    Serial.print("Servo1 - ");
    Serial.println(posServo1);

  }
  buttonvalue2 = digitalRead (button2);

  if (buttonvalue2 == HIGH) {
    posServo1 = posServo1 + 1;
    servo1.write(posServo1);
    delay(tiempo);
    Serial.print("Servo1 - ");
    Serial.println(posServo1);
  }

  if (posServo1 > 179) {
    posServo1 = 179;
  }
  if (posServo1 < 1) {
    posServo1 = 1;
  }
  if (posServo2 > 179) {
    posServo2 = 179;
  }
  if (posServo2 < 1) {
    posServo2 = 1;
  } if (posServo3 > 179) {
    posServo3 = 179;
  }
  if (posServo3 < 1) {
    posServo3 = 1;
  } if (posServo4 > 179) {
    posServo4 = 179;
  }
  if (posServo4 < 1) {
    posServo4 = 1;
  } if (posServo5 > 179) {
    posServo5 = 179;
  }
  if (posServo5 < 1) {
    posServo5 = 1;
  }
  buttonvalue3 = digitalRead (button3);

  //boton 2
  if (buttonvalue3 == HIGH) {
    posServo6 = 0;
    servo6.write(posServo6);
    Serial.print("Servo6 - abierto");
  }

  if (buttonvalue3 == LOW) {
    posServo6 = 180;
    servo6.write

(posServo6);
  }
}










