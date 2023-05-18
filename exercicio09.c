#include <stdio.h>

int main ()
{
    int num, i = 0;
    float soma = 0.0, media;

    do
    {
        printf("Digite um numero inteiro\n");
        scanf("%d", &num);
        if(num > 0)
        {
            soma += num;
            i++;
        }
    } while(num > 0);

    media = soma / i;    
    printf("%.1f", media);

    return 0;
}