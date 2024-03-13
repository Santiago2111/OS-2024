// C++ code
//
const int led_verde = 11;
const int led_rojo = 12;
const int led_amarillo = 13;
int opcion;

void setup()
{
  Serial.begin(9600);
  pinMode(led_verde, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
}

void loop()
{
  if(Serial.available()){
opcion = Serial.read();
    switch (opcion){
      case '1':
      digitalWrite(led_verde, HIGH);
      delay(1000);
      digitalWrite(led_verde, LOW);
      break;
      case '2':
      digitalWrite(led_rojo, HIGH);
      delay(1000);
      digitalWrite(led_rojo, LOW);
      break;
      case '3':
      digitalWrite(led_amarillo, HIGH);
      delay(1000);
      digitalWrite(led_amarillo, LOW);
      break;
      case '4':
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_rojo, HIGH);
      digitalWrite(led_amarillo, HIGH);
      break;
      case '5':
      digitalWrite(led_verde, LOW);
      digitalWrite(led_rojo, LOW);
      digitalWrite(led_amarillo, LOW);
      break;
      case '6':
        while (true) {
          digitalWrite(led_verde, HIGH);
          digitalWrite(led_rojo, HIGH);
          digitalWrite(led_amarillo, HIGH);
          delay(500);
          digitalWrite(led_verde, LOW);
          digitalWrite(led_rojo, LOW);
          digitalWrite(led_amarillo, LOW);
          delay(500);
          if (Serial.available()) {
            opcion = Serial.read();
          }
        }
      break;
    }
  }
}