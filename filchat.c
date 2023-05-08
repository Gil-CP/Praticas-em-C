#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int elemento;
    struct fila *proximo;
}fila;

fila* enfila(fila  **Fila, int valor)
{
    fila *aux;
    fila *novo = malloc(sizeof(Fila));
    if(novo)
    {
        novo->elemento = valor;
        novo->proximo = NULL;
        if(*Fila == NULL)
        {
            *Fila = novo;
        }
        else
        {
            aux = *Fila;
            while(aux->proximo)
            {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    }
    else
    {
        printf("Não foi possível alocar memoria\n");
    }
    return novo;
}

fila* desenfila(fila **Fila)
{
    fila *removido = NULL;
    if(*Fila)
    {
        removido = *Fila;
        *Fila = removido->proximo;
    }
    else
    {
        printf("\nFila vazia");
    }
    return removido;
}

void mostra_fila(fila *Fila)
{
    printf("*******************Fila***************\n");
    while(Fila)
    {
        printf("%d ", Fila->elemento);
        Fila = Fila->proximo;
    }
}

int main()
{
    fila *Fila = NULL, *removido = NULL;
    int valor, opcao;

    do
    {
        printf("Selecione a opcao:\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:
                printf("Digite um valor:\n");
                scanf("%d", &valor);
                if(enfila(&Fila, valor) == NULL)
                {
                    printf("Não foi possível enfileirar o valor\n");
                }
                break;
            case 2:
                removido = desenfila(&Fila);
                if(removido)
                {
                    printf("\nValor removido: %d", removido->elemento);
                    free(removido);
                }
                break;
        }
    }while(opcao);
}