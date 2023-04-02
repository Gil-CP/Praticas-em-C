#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    int condicao1, condicao2, condicao3;
    int triangulo;

    scanf("%lf %lf %lf", &a, &b, &c);
    condicao1 = a + b > c;
    condicao2 = a + c > b;
    condicao3 = b + c > a;
    triangulo = condicao1 && condicao2 && condicao3;

    if(triangulo)
    {
        printf("Perimetro = %.1lf\n", a + b + c);
    }
    else
    {
        double area;
        area = ((a + b) * c)/2;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}