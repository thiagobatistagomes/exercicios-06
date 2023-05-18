#include <stdio.h>
/* 
    Faça um programa que leia um inteiro X e mostre a diferença entre o quadrado da soma pela soma dos 
    quadrados dos X primeiros números naturais.
    Exemplo: seja X = 10:
    Quadrado da soma: (1 + 2 + ... + 10)2 = (55)2 = 3025 
    Soma dos quadrados: (12 + 22 + ... + 102) = 385 
    Diferença: 3025 –  385 = 2640
*/
int main ()
{
    int X, i, soma = 0, quadrSoma, quadrados = 0, somaQuadr = 0, diferenca;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &X);

    // Quadrado da soma

    for(i = 1; i <= X; i++)
    {
        soma += i;
        quadrSoma = soma * soma;
    }

    // Soma dos quadrados

    for(i = 1; i <= X; i++)
    {
        quadrados = i * i;
        somaQuadr += quadrados;
    }

    // Diferença

    diferenca = quadrSoma - somaQuadr;

    printf("%d", diferenca);

    return 0;
}