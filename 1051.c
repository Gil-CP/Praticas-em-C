#include <stdio.h>

int main()
{
    double salario, imposto, dif;
    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 2000)
    {
        printf("Isento\n");
    }
    else if(salario > 2000 && salario <= 3000)
    {
        dif = salario - 2000;

        imposto = (dif * 0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 3000 && salario <= 4500)
    {
        dif = salario - 2000;
        
        if(dif > 1000)
        {
            imposto = dif * 0.;
            dif -= 1000;
            printf("R$ %.2lf\n", imposto);
        }
        else
        {
            imposto = dif * 0.18;
            printf("R$ %.2lf", imposto);
        }
    }
    
}
