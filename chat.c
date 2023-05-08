#include <stdio.h>
#include <string.h>

int main() {
    char expressao[100];
    int contador = 0;
    scanf("%99[^\n]", expressao);

    for (int i = 0; i < strlen(expressao); i++) {
        if (expressao[i] == '(') {
            contador++;
        } else if (expressao[i] == ')') {
            contador--;
            if (contador < 0) {
                printf("incorrect\n");
                return 0;
            }
        }
    }

    if (contador == 0) {
        printf("correct\n");
    } else {
        printf("incorrect\n");
    }

    return 0;
}
