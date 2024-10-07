#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menuInicial();
int menuOpcoes();
void preencheVetor(int *vetor, int tam);
void imprimeVetor(int *vetor, int tam);
void ordenaVetor(int *vetor, int tam);

int main()
{
    int tam, opcoes;
    tam = menuInicial();
    int vetor[tam];
    preencheVetor(vetor, tam);

    
    do
    {
        opcoes = menuOpcoes();
        switch (opcoes)
        {
            case 1:
                imprimeVetor(vetor, tam);
                break;
            case 2:
                ordenaVetor(vetor, tam);
                break;
            case 3:
                break;
        
        
        }
    }while(opcoes != 3);

    return 0;
}
int menuInicial()
{
    int tam;
    printf("Seja bem vindo!\nPara comecar informe o tamanho do vetor a ser criado\n");
    scanf("%d", &tam);
    return tam;
    
}
int menuOpcoes()
{
    int opcoes;
    printf("\nO que gostaria de fazer em seguida?");
    printf("\n\t1- Imprimir vetor gerado\n\t2- Ordenar vetor\n\t3- Sair\n");
    scanf("%d", &opcoes);
    return opcoes;

}
void preencheVetor(int *vetor, int tam)
{   
    char opcao;
    printf("\nGostaria de preencher o vetor manualmente? (S/ N)\n");
    scanf(" %c", &opcao);
    if(opcao == 'S')
    {
        for(int i = 0; i < tam; i++)
        {
            scanf("%d", &vetor[i]);
        }
    }
    else
    {
        srand(time(NULL));
        for(int i = 0; i < tam; i++)
        {
            vetor[i] = rand() % 50;
        }
    }
}
void imprimeVetor(int *vetor, int tam)
{
    printf("\n");

    for (int i = 0; i < tam; i++)
    {
        printf("%2d ", vetor[i]);
    }
}
void ordenaVetor(int *vetor, int tam)
{
    int aux, ordenado;

    do
    {
        ordenado = 1;

        for (int j = 0; j < (tam - 1); j++)
        {
            if(vetor[j+1] < vetor[j])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                ordenado = 0;
            }
                
        }
    }while(!ordenado);
    
}