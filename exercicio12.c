#include <stdio.h>
/*
    Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte 
    expressão: S = 1 –  2 + 3 –  4 + 5 –  6 + ... + N.
*/
int main ()
{
    int N, i, S = 0, sinal = 1;

    printf("Digite um numero:\n");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        S += i * sinal;
        sinal *= -1;
    }

    printf("%d", S);

    return 0;
}