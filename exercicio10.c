#include <stdio.h>

int main ()
{
    int N, i, somaDiv = 0;

    do
    {
        printf("Digite um numero inteiro positivo:\n");
        scanf("%d", &N);
    } while (N < 0);

    for(i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            somaDiv += i;
        }
    }

    printf("%d", somaDiv);

    return 0;
}