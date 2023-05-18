#include <stdio.h>

int main ()
{
    int qtdmul, num, i, multiplo;

    do
    {
        scanf("%d", &qtdmul);
    } while (qtdmul < 0);
    
    scanf("%d", &num);

    multiplo = 0;

    for(i = 1; i <= qtdmul; i++)
    {
        multiplo = num * i;
        printf("%d ", multiplo);
    }

    return 0;
}