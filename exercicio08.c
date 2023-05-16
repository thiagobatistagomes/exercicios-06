#include <stdio.h>

int main()
{
    int N, X, soma = 0;

    do {
        printf("Digite um numero inteiro positivo N: ");
        scanf("%d", &N);
    } while (N < 0);

    do {
        printf("Digite um numero inteiro positivo X: ");
        scanf("%d", &X);
    } while (X < 0);

    for (int i = X; i < N; i += X)
    {
        soma += i;
    }

    printf("A soma dos multiplos de %d menores que %d e: %d\n", X, N, soma);

    return 0;
}