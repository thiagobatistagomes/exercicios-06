#include <stdio.h>

int main() {
    int N;
    float soma = 0.0;
    int numerador = 1, denominador = 1;
    int sinal = 1; 
    int contador = 0; 

 
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += sinal * (float)numerador / denominador;

        numerador += 2;
        denominador++;

        contador++;
        if (contador == 2) {
            sinal *= -1; 
            contador = 0; 
        }
    }

    printf("%.2f\n", soma);

    return 0;
}