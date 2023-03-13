/* 

          Este programa tem a função de demonstrar como se utiliza os servo motores sem o uso da biblioteca de servos. O sinal para controlar o Servo
     é basicamente um PWM com frequência de 50Hz, que dá um período de 20ms. Nesses 20ms, o duty positivo controla a posição do servo motor. Um duty com
     apenas 1ms (ou 0,6ms) deixa o Servo em 0º, um duty com 2ms (ou 2,4ms) deixa o Servo em 180º. Posições intermediárias correspondem a dutys interme-
     diários. No caso do meu Servo, o intervalo de dutys é 0,6ms à 2,4ms.

          Na prática o programa funcionou perfeitamente.

*/

//Mapeamento de hardware
#define servo 33

// Funções auxiliares
void servo_0graus();
void servo_90graus();
void servo_180graus();

void setup() {
  
    pinMode(servo, OUTPUT);
} // end void setup

void loop() {
  
    for(int i=0; i < 100; i++)  servo_0graus();
    for(int i=0; i < 100; i++)  servo_90graus();
    for(int i=0; i < 100; i++)  servo_180graus();
    for(int i=0; i < 100; i++)  servo_90graus();
} // end void loop

void servo_0graus(){

    digitalWrite(servo, HIGH);
    delayMicroseconds(600);                                   // 600us = 0,6ms
    digitalWrite(servo, LOW);
    for(int i=0; i < 32; i++) delayMicroseconds(600);         // 32 * 0,6ms = 19,4ms
}


void servo_90graus(){

    digitalWrite(servo, HIGH);
    delayMicroseconds(1500);                                   // 1,5ms
    digitalWrite(servo, LOW);
    for(int i=0; i < 12; i++) delayMicroseconds(1500);         // 12 * 1,5ms = 18,5
}


void servo_180graus(){

    digitalWrite(servo, HIGH);
    delayMicroseconds(2400);                                  // 2400 = 2,4ms
    digitalWrite(servo, LOW);
    for(int i=0; i < 7; i++) delayMicroseconds(2400);         // 7* 2,4ms = 17,6ms
}
