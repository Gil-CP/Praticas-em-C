/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   */

#include <stdio.h>

int main()
{
    int a, b, prod;
    scanf("%d %d", &a,  &b);
    prod = a * b;

    printf("PROD = %d", prod);
    printf("\n");
}