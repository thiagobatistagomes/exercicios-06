#include <stdio.h>

int main ()
{
    int a, b, somaPares = 0, produtoImpar = 1;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);


    for(int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            somaPares += i;
        }
        else
        {
            produtoImpar *= i;
        }
    }

    printf("%d %d", somaPares, produtoImpar);

    return 0;
}