#include <stdio.h>
/*
    Faça um programa que leia um número N e mostre a soma dos N primeiros termos da seguinte 
    expressão, com precisão de duas casas decimais: S = –  1 + 1/2 –  1/3 + 1/4 –  1/5 + ... + 1/N.
*/
int main ()
{
    float N, S = 0, sinal = -1.0;
    int i;
    
    printf("Digite um numero:\n");
    scanf("%f", &N);

    for(i = 1; i <= N; i++)
    {
        sinal *= -1.0;
        S += sinal / i;
    }

    printf("%.2f", S);

    return 0;
}