#include <stdio.h>

int main ()
{
    int qtdmul, num, i, multiplo;

    printf("Digite quantos multiplos deseja ver:\n");
    scanf("%d", &qtdmul);

    printf("Digite o numero que deseja ver os multiplos:\n");
    scanf("%d", &num);

    for(i = 0; i < qtdmul; i++)
    {
        multiplo = num * qtdmul;
        printf("%d \n", multiplo);
    }

    return 0;
}