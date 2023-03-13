/* 

            O objetivo deste programa é demosntrar, através do Serial Plotter, a filtragem de um foltro de média móvel. Para isso um potenciômetro será lido na porta A0.

            Na prática, a filtragem por média móvel, assim como o Plotter Serial, funcionaram perfeitamente.
            

*/

// Mapeamento de hardware
#define pot A0


// Protótipos de funções auxiliares
long media_Movel();

// Variáveis auxiliares
#define n 10

int leitura = 0,
    vet[n],
    sinalFiltrado = 0;

void setup() {
  
    pinMode(pot, INPUT);

    Serial.begin(9600);
}

void loop() {
  
    leitura = analogRead(pot);

    sinalFiltrado = media_Movel();

    Serial.print(leitura);
    Serial.print(" ");
    Serial.println(sinalFiltrado);

    delay(20);
}



// Funções auxiliares

long media_Movel(){

    long soma = 0;
  
    for(int i=n-1; i > 0; i--) vet[i] = vet[i-1];

    vet[0] = leitura;

    for(int i=0; i < n; i++) soma += vet[i];

    return soma/n;  
} // end void media_Movel
