#include <stdio.h>

int main ()
{

    int num, i;

    do
    {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &num);
    } while(num < 0);
    
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
        }   
    }
    
    return 0;
}