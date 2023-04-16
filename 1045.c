#include <stdio.h>

void menor(double *a, double *b, double *c);
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    menor(&a, &b, &c);
    
    if(a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if((a * a) == ((b * b) + (c * c)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if((a * a) > ((b * b) + (c * c)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if((a * a) < ((b * b) + (c * c)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a == b && b == c && a == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a == b || b == c || a == c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}
void menor(double *a, double *b, double *c)
{
    if(*a > *b && *a > *c)
    {
        if(*b < *c)
        {
            double aux;
            aux = *b;
            *b = (*c);
            *c = aux;
        }
    }
    else if(*b > *a && *b > *c)
    {
        double aux;
        aux = (*a);
        *a = *b;
        if(aux > *c)
        {
        *b = aux;
        }
        else
        {
        *b = *c;
       ( *c) = aux;
        }
    }
    else if(*c > *a && *c > *b)
    {
        double aux;
        aux = *a;
        *a = *c;
        if(aux > *b)
        {
        *c = *b;
        *b = aux;
        }
        else
        {
        *c = aux;
        }
    }
}