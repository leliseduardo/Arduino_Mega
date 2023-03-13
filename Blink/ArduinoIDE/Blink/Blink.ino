/* 

        Este programa é um exemplo inicial apenas para apresentar o ArduínoMega. O programa apenas pisca o led do pino 13.

        Na prática o programa funcionou.

*/

#define led 13

void setup() {
  
    pinMode(led, OUTPUT);
}

void loop() {
  
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
}
