#include <stdio.h>

int main ()
{
    int num, resp;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if(num > 0)
    {
        while(num >= 1)
        {
            resp = num;
            num = num - 1;
            printf("%d ", resp);     
        }
    }
    else
    {
        while(num <= 1)
        {
            resp = num;
            num = num + 1;
            printf("%d ", resp);
        }
    }

    return 0;
}