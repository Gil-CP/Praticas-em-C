#include <stdio.h>
#include <stdlib.h>

typedef struct Fila
{
    int elemento;
    struct Fila *proximo;
}Fila;

void enfila(Fila **fila, int elemento)
{
    Fila *novo = malloc(sizeof(Fila));
    Fila *aux;

    if(novo)
    {
        novo->elemento = elemento;
        novo->proximo = NULL;
        if(*fila == NULL)
        {
            *fila = novo;
        }
        else
        {
            aux = *fila;
            while(aux->proximo)
            {
                aux->proximo;
            }
            aux->proximo = novo;
        }
    }
    else
    {
        printf("Nao foi possivel alocar memoria\n");
    }
}
Fila* desenfila(Fila **fila)
{
    Fila *removido = NULL;

    if(*fila)
    {
        removido = *fila;
        *fila = removido->proximo;
    }
    else
    {
        printf("Pilha vazia\n");
    }
    return removido;
}
void mostrafial(Fila *fila)
{
    printf("----------Fila----------\n");
    while(fila)
    {
        printf("%d ", fila->elemento);
        fila = fila->proximo;
    }
}

int main()
{
    Fila *fila = NULL;
    int opcao, elemento;
    Fila *removido;
    do
    {
        printf("Opcao: \n");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Digite o valor: \n");
                scanf("%d", &elemento);
                enfila(&fila, elemento);
                break;
            case 2:
                removido = desenfila(&fila);
                if(removido)
                {
                    printf("Valor removido: %d\n", removido->elemento);
                    free(removido);
                }
                break;
            case 3:
                mostrafial(fila);
                break;

        }
    }while(opcao);
}