#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha
{
    int elemento;
    struct pilha *proximo;
    
}pilha;

pilha* empilha(pilha *topo, int valor)
{
    pilha *novo = malloc(sizeof(pilha));

    if(novo)
    {
        novo->elemento = valor;
        novo->proximo = topo;
        return novo;
    }
    else
        return NULL;
}
void desempilha(pilha **topo)
{
    pilha *remove;
        remove = *topo;
        *topo = remove->proximo;
        free(remove);
    
}
void imprime_pilha(pilha *topo)
{
    while (topo)
    {
        printf("\n%d", topo->elemento);
        topo = topo->proximo;
    }
}
int min(pilha *topo)
{
    int menor = 999999;
    while(topo)
    {
        if(topo->elemento < menor)
        {
            menor = topo->elemento;
        }
        topo = topo->proximo;
    }
        return menor;
}
int main()
{
    int valor, n, menor;
    pilha *topo = NULL;
    char texto[10];

    printf("\nLoops: ");
    scanf("%d", &n);
    
    while(n--)
    {   
        //printf("\nOpcao: ");
        scanf("%s", texto);

        if(strcmp(texto,"PUSH")==0)
        {
            scanf("%d", &valor);
            printf("Valor lido: %d\n", valor);
            topo = empilha(topo, valor);
        }
        else 
        {
            if(strcasecmp(texto,"POP")==0)
            {
                if(topo != NULL)
                {
                    desempilha(&topo);
                    //printf("Valor do topo: %d\n", topo->elemento);
                }
                else
                {
                        printf("EMPTY\n");
                }
            }
            else
            {
                    menor = min(topo);
                    printf("\n%d", menor);
                    imprime_pilha(topo);
            }
        }
        
    }
}