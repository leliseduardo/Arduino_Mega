/* 

              Este programa tem a funçãode demonstrar a série de Fourier a partir do Serial Plot do Arduino IDE.
              
              Na prática, a demonstração da série de Fourier para ondas quadradas funcionou perfeitamente.

*/

#define amp 500

void setup() {

    Serial.begin(9600);
}

void loop() {

    for(int i=0; i < 360; i++){
    
        Serial.println(
        
                        (amp / 1)*(sin(i * 1 * (PI/180))) +
                        (amp / 3)*(sin(i * 3 * (PI/180))) +
                        (amp / 5)*(sin(i * 5 * (PI/180))) +
                        (amp / 7)*(sin(i * 7 * (PI/180))) +
                        (amp / 9)*(sin(i * 9 * (PI/180))) +
                        (amp / 11)*(sin(i * 11 * (PI/180))) +
                        (amp / 13)*(sin(i * 13 * (PI/180))) +
                        (amp / 15)*(sin(i * 15 * (PI/180))) +
                        (amp / 17)*(sin(i * 17 * (PI/180))) +      
                        (amp / 19)*(sin(i * 19 * (PI/180))) +
                        (amp / 21)*(sin(i * 21 * (PI/180))) +
                        (amp / 23)*(sin(i * 23 * (PI/180))) +
                        (amp / 25)*(sin(i * 25 * (PI/180))) +
                        (amp / 27)*(sin(i * 27 * (PI/180))) +
                        (amp / 29)*(sin(i * 29 * (PI/180))) +
                        (amp / 31)*(sin(i * 31 * (PI/180))) +
                        (amp / 33)*(sin(i * 33 * (PI/180))) +
                        (amp / 35)*(sin(i * 35 * (PI/180))) +
                        (amp / 37)*(sin(i * 37 * (PI/180))) +
                        (amp / 39)*(sin(i * 39 * (PI/180))) +
                        (amp / 41)*(sin(i * 41 * (PI/180))) +      
                        (amp / 43)*(sin(i * 43 * (PI/180))) +
                        (amp / 45)*(sin(i * 45 * (PI/180))) +
                        (amp / 47)*(sin(i * 47 * (PI/180))) 
        
        
                      );

    }
}
