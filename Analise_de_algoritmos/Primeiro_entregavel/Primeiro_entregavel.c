#include <stdio.h>
#include <stdlib.h>

char menu();
void cadastra_produto();
void remove_produto();
void lista_produtos();
void cadastra_cidade();
void exibe_lista_de_cidades();

int main()
{
    char opcao = 0;
    
    while(opcao != 'x' && opcao != 'X')
    {
        opcao = menu();
        system("cls");
        switch(opcao)
        {
            case '1':
            cadastra_produto();
            break;
            case '2':
            remove_produto();
            break;
            case '3':
            lista_produtos();
            break;
            case '4':
            cadastra_cidade();
            break;
            case '5':
            exibe_lista_de_cidades();
            break;
            default:
            printf("\nOpcao invalida!");
            
        }
    }
    return 0;
}

char menu()
{
    char opcao;
    
    printf("\nSeja bem vindo! Para comecar selecione uma opcao");
    printf("\n\t1 - Cadastrar produto\n\t2 - Excluir produto cadastrado\n\t3 - Listar produtos\n\t4 - Cadastrar cidades\n\t5 - Listar cidades\n\n\tPrecione 'x' para sair do programa\n");
    scanf(" %c", &opcao);
    printf("\nA opcao selecionada foi: %c", opcao);

    return opcao;
}
void cadastra_produto()
{
    printf("\nNao e possivel cadastrar um produto no momento\n");
}
void remove_produto()
{
    printf("\nNao e possivel remover produto\n");
}
void lista_produtos()
{
    printf("\nNao ha produtos a serem exibidos\n");
}
void cadastra_cidade()
{
    printf("\nNao e possivel cadastrar uma cidade no momento!\n");
}
void exibe_lista_de_cidades()
{
    printf("\nNao existem cidades cadastradas\n");
}