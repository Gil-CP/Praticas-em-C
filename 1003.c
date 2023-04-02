/*Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.*/

#include <stdio.h>

int main()
{
    int a, b, soma;
    scanf("%d %d", &a, &b);
    soma = a + b;

    printf("SOMA = %d", soma);
    printf("\n");
}