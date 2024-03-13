// C++ code
//
const int led_verde = 11;
const int led_rojo = 12;
const int led_amarillo = 13;
const int button = 7;
int value;
int opcion;

void setup()
{
  Serial.begin(9600);
  pinMode(led_verde, OUTPUT);
  pinMode(led_rojo, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  value = digitalRead(button);
  if(value == HIGH){
        while (true) {
          digitalWrite(led_verde, HIGH);
          delay(200);
          digitalWrite(led_rojo, HIGH);
          delay(200);
          digitalWrite(led_amarillo, HIGH);
          delay(200);
          digitalWrite(led_verde, LOW);
          delay(200);
          digitalWrite(led_rojo, LOW);
          delay(200);
          digitalWrite(led_amarillo, LOW);
          delay(200);
        }
  } else{ 
    digitalWrite(led_amarillo, LOW);
    delay(200);
    digitalWrite(led_rojo, LOW);
    delay(200);
    digitalWrite(led_verde, LOW);   
  }
}