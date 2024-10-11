#include <stdio.h>

void main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite a primeira data (dia, mes, ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (dia, mes, ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    if (ano1 > ano2) {
        printf("A primeira data e a mais recente: %d/%d/%d\n", dia1, mes1, ano1);
    } else if (ano1 < ano2) {
        printf("A segunda data e a mais recente: %d/%d/%d\n", dia2, mes2, ano2);
    } else {
        if (mes1 > mes2) {
            printf("A primeira data e a mais recente: %d/%d/%d\n", dia1, mes1, ano1);
        } else if (mes1 < mes2) {
            printf("A segunda data e a mais recente: %d/%d/%d\n", dia2, mes2, ano2);
        } else {
            if (dia1 > dia2) {
                printf("A primeira data e a mais recente: %d/%d/%d\n", dia1, mes1, ano1);
            } else if (dia1 < dia2) {
                printf("A segunda data e a mais recente: %d/%d/%d\n", dia2, mes2, ano2);
            } else {
                printf("As duas datas sao iguais: %d/%d/%d\n", dia1, mes1, ano1);
            }
        }
    }
}
