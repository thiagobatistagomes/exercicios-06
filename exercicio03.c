#include <stdio.h>

int main ()
{
    int num, resp;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    resp = 1;

    while (resp < num)
    {
        printf("%d ", resp);
        resp = resp + 2;
        
    }
    

    return 0;
}