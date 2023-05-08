#include <stdio.h>
#include <stdlib.h>

typedef struct pilha
{
    char c;
    struct pilha *proximo;
}pilha;
pilha* empilha(pilha *topo, char str)
{
    pilha *novo = malloc(sizeof(pilha));

    if(novo)
    {
        novo->c = str;
        novo->proximo = topo;
        return novo;
    }
    else
    {
        return NULL;
    }
}
pilha* desempilha(pilha **topo)
{
    if(topo)
    {
        pilha *removido;
        removido = *topo;
        *topo = removido->proximo;
        return removido;
    }
    else
    {
        return NULL;
    }
}
/*void imprime_pilha(pilha *topo)
{
    if(topo)
    {while(topo)
        {
            printf("\n%c", topo->c);
            topo = topo->proximo;
        }
    }
    else
        printf("\nVazia");
}*/
int forma_par(char p, char d)
{
    switch(d)
    {
        case ')':
            if(p == '(')
                return 1;
            else
                return 0;
        case '}':
            if(p == '{')
                return 1;
            else
                return 0;
        case ']':
            if(p == '[')
                return 1;
            else
                return 0;
    }
}
int formacao(char x[])
{
    int contador = 0;
    int i = 0;
    pilha *topo = NULL, *removido = NULL;
    while(x[i] != '\0')
    {
        if(x[i] == '(' || x[i] == '{' || x[i] == '[')
        {
            topo = empilha(topo, x[i]);
            //imprime_pilha(topo);
        }
        else if(x[i] == ')' || x[i] == '}' || x[i] == ']')
        {   
            contador++;
            removido = desempilha(&topo);
            if(removido)
            {
                contador--;
            }
            if(topo == NULL ||forma_par(x[i], removido->c) == 0)
            {
                printf("incorrect\n");
                return 1;
                //free(removido);
            }
            free(removido);
        }

        i++;
    }

    if(topo || contador != 0)
    {
        printf("incorrect\n");
    }
    else
    {
        printf("correct\n");
    }
}
int main()
{
    char expressao[10];
    scanf("%9[^\n]", expressao);
    formacao(expressao);

}