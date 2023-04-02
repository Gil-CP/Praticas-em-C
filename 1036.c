#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double delta, raiz1,raiz2;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (pow(b, 2)) - (4 * a * c);
    if(delta >= 0)
    {
        if((2 * a) > 0)
        {
            raiz1 = (- b + (pow(delta, 0.5))) / (2 * a);
            raiz2 = (- b - (pow(delta, 0.5))) / (2 * a);
            printf("R1 = %.5lf\nR2 = %.5lf\n", delta, raiz1, raiz2); 
        }
        else
        {
            printf("Impossivel calcular\n");
        }
    }
    else
        {
            printf("Impossivel calcular\n");
        }

}