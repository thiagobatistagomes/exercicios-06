#include <stdio.h>
/*
    Faça um programa que leia um número N e mostre a soma dos N primeiros  termos da seguinte 
    expressão, com precisão de duas casas decimais: S = 0/1 + 2/2 + 4/4 + 6/8 + 8/16 + 10/32 + 12/64 + 14/128 
    + ...
*/
int main ()
{
    int N;
    float S = 0;

    printf("Digite um numero: ");
    scanf("%d", &N);

    int numerador = 0;
    int denominador = 1;

    for (int i = 1; i <= N; i++)
    {
        S += (float) numerador / denominador;
        numerador += 2;
        denominador *= 2;
    }

    printf("A soma dos %d primeiros termos da expressão e: %.2f\n", N, S);

    return 0;
}