#include <stdio.h>

float altura, pesoIdeal;
char genero[9];

int main() 
{
    printf("Qual seu genero? ");
    scanf("%s", &genero);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    if (strcmp(genero, "Masculino") == 0) {
        pesoIdeal = (72.7 * altura) - 58;
    } else {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("O peso ideal e: %.2f\n", pesoIdeal);

    return 0;
}

