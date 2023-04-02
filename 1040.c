#include <stdio.h>

int main()
{
    double notas[5];
    double media;
    scanf("%lf %lf %lf %lf", &notas[0], &notas[1], &notas[2], &notas[3]);

    notas[0] *= 2;
    notas[1] *= 3;
    notas[2] *= 4;
    notas[3] *= 1;

    media = (notas[0] + notas[1] + notas[2] + notas[3]) / 10;
    printf("Media: %.1lf\n", media);

    if(media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media >= 5.0 && media <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &notas[5]);
        media = (media + notas[5]) / 2;
        printf("Nota do exame: %.1lf\n", notas[5]);
        if(media >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media);
    }
    else if(media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    
}