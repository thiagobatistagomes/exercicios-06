#include <stdio.h>

int main ()
{
    int num, resp;

    do
    {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &num);
    } while (num < 0);
    
    resp = 0;

    do
    {
        printf("%d ", resp);
        resp = resp + 1;
        
    } while (resp <= num);

    return 0;
}