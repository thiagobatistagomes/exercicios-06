#include <stdio.h>

int main ()
{

    int i, N, soma, impar;

     do
    {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &N);
    } while (N < 0);

    impar = 1;
    soma = 0;

    for(i = 1; i <= N; i++)
    {
        soma = soma + impar; 
        impar = impar + 2;
        
    }

    printf("soma dos numeros impares ate %d: %d\n", N, soma);
    
    

    return 0;
}