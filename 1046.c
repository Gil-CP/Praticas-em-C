#include <stdio.h>

int main()
{
    int ini, fim, duracao;

    scanf("%d%d", &ini, &fim);

    if(ini < fim)
    {
        duracao = fim - ini;
    }
    else
    {
        duracao = (24 - ini) + fim;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);
}