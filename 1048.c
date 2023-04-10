#include <stdio.h>
#define quatro 0.04
#define sete 0.07
#define dez 0.10
#define doze 0.12
#define quinze 0.15

int main()
{
    double salario, reajuste;
    scanf("%lf", &salario);

    if(salario > 0 && salario <= 400)
    {
        reajuste = salario + (salario * quinze);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - salario);
        printf("Em percentual: %.0lf %%\n", quinze * 100);
    }
    else if(salario > 400 && salario <= 800)
    {
        reajuste = salario + (salario * doze);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - salario);
        printf("Em percentual: %.0lf %%\n", doze * 100);
    }
    else if(salario > 800 && salario <= 1200)
    {
        reajuste = salario + (salario * dez);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - salario);
        printf("Em percentual: %.0lf %%\n", dez * 100);
    }
    else if(salario > 1200 && salario <= 2000)
    {
        reajuste = salario + (salario * sete);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - salario);
        printf("Em percentual: %.0lf %%\n", sete * 100);
    }
    else if(salario > 2000)
    {
        reajuste = salario + (salario * quatro);
        printf("Novo salario: %.2lf\n", reajuste);
        printf("Reajuste ganho: %.2lf\n", reajuste - salario);
        printf("Em percentual: %.0lf %%\n", quatro * 100);
    }
}