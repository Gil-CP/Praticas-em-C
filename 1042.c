/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.*/

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
    {
        if(b > c)
        {
            printf("%d\n%d\n%d\n", c, b, a);
        }
        else
        {
            printf("%d\n%d\n%d\n", b, c, a);
        }
    }
    else if(b > a && b > c)
    {
        if(a > c)
        {
            printf("%d\n%d\n%d\n", c, a, b);
        }
        else
        {
            printf("%d\n%d\n%d\n", a, c, b);
        }
    }
    else if(c > a && c > b)
    {
        if(a > b)
        {
            printf("%d\n%d\n%d\n", b, a, c);
        }
        else
        {
            printf("%d\n%d\n%d\n", a, b, c);
        }
    }

    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}