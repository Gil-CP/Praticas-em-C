#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    int elemento;
    struct pilha *proximo;
}Pilha;

Pilha* empilhar(Pilha *topo)
{
    int elemento;
    Pilha *novo = malloc(sizeof(Pilha));

    if(novo)
    {
        scanf("%d", &elemento);
        novo->elemento = elemento;
        novo->proximo = topo;
        return novo;
    }
    else
    {
        return NULL;
    }
}
Pilha* desempilha(Pilha **topo)
{
    Pilha *remove;
    if(*topo)
    {
        remove = *topo;
        *topo = remove->proximo;
        return remove;
    }
    else
    {
        return NULL;
    }
}
void imprime_menu()
{
        printf("\n\tSelecione uma opcao para continuar:\n\t0- Sai do programa\n\t1- Empilha\n\t2- Desempliha\n\t3- Mostra pilha\n");
}
void imprime_pilha(Pilha *topo)
{
    if(topo)
    {
        while(topo)
        {
            printf("\n\n%d", topo->elemento);
            topo = topo->proximo;
        }
    }
    else
        printf("A pilha está vazia!");
}
int main()
{
    int opcao = 1;
    Pilha *topo = NULL;
    Pilha *elm_removido = NULL;
    while(opcao)
    {
        imprime_menu();
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            topo = empilhar(topo);
            break;
        case 2:
            elm_removido = desempilha(&topo);
            if(elm_removido)
                printf("O elemento %d foi removido da pilha\n", elm_removido->elemento);
            else
            {
                printf("A pilha esta vazia\n");
            }
            break;
            case 3:
            imprime_pilha(topo);
            break;
        }
    }
}