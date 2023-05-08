#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int vet[10];

    for(int i = 0; i < 10; i++)
    {
        *(vet + i) = rand() % 100;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("\nElemento: %d", *(vet + i));
        printf("\nEndereço é: %p", (vet + i));
    }

}