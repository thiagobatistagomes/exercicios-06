#include <stdio.h>

int main ()
{
    int N, contador, impar;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &N);

    impar = 1;
    contador = 1;

    while (contador <= N)
    {
        printf("%d ", impar);
        impar = impar + 2;
        contador = contador + 1;
    }
    

    return 0;
}