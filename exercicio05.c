#include <stdio.h>

int main ()
{
    int qtdmul, num, i, multiplo;

    do
    {
        printf("Digite quantos multiplos deseja ver:\n");
        scanf("%d", &qtdmul);
    } while (qtdmul < 0);
    
    

    printf("Digite o numero que deseja ver os multiplos:\n");
    scanf("%d", &num);

    multiplo = 0;

    for(i = 0; i < qtdmul; i++)
    {
        multiplo = num * i;
        printf("%d ", multiplo);
    }

    return 0;
}