/* 
  This example code is in the public domain.

  modified 05 setembro 2020
  by Manos barros
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // cria um objeto de contrle de um servo


int pos = 0;    // variável que armazena a posocao do servo

void setup() {
  myservo.attach(9);  // pino de conexão do servo motor
}

void loop() {
  for (pos = 0; pos <= 180; pos += 45) { // vai de  0 grau a  180 graus

    myservo.write(pos);              // diz para o servo se deslocar na posição desejada 'pos'
    delay(15);                       // espera 15ms para que o servo cheguar a posição
  }
  for (pos = 180; pos >= 0; pos -= 0) { // vai de  180graus a 0 graus
    myservo.write(pos);              // diz ao servo para ir a posocao desejada  'pos'
    delay(15);                       //
  }
}
