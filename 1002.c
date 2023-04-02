/*A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.*/

#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main()
{
    double raio, circunferencia;
    scanf("%lf", &raio);

    circunferencia = (pow(raio, 2)) * pi;

    printf("A=%.4lf\n", circunferencia);
}