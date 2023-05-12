int led1 = 12;
int rx = 0;


void setup() {
    Serial.begin(9600);
    pinMode(led1, OUTPUT);
}

void loop() {
  //programacion a traves de estructura condicional
//    if (Serial.available () > 0) {
//    rx = Serial.read();
//    /*led 1*/
//    if (rx == '1') {
//      digitalWrite(led1, LOW);
//      Serial.println("LED 1 APAGADO");
//    }
//    if(rx == '2'){
//      digitalWrite(led1, HIGH);
//      Serial.println("LED 1 ENCENDIDO");
//    }
//
//
//}

if (Serial.available () > 0)
  {
    rx = Serial.read();
}
  switch(rx)
    {

      //habitacion 1
      case 'B':
      digitalWrite(led1, HIGH);
      break;
      case 'A':
      digitalWrite(led1, LOW);
      break;
  }
  
  
}
