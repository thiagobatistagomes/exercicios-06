#include <stdio.h>

int main()
{
    int N;
    float S = 0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    int numerador = 1;
    int denominador = 1;
    int sinal = 1;

    for (int i = 1; i <= N; i++)
    {
        S += (float) (sinal * numerador) / denominador;
        numerador += 2;
        denominador += 1;
        sinal *= -1;
    }

    printf("A soma dos %d primeiros termos da expressão e: %.2f\n", N, S);

    return 0;
}