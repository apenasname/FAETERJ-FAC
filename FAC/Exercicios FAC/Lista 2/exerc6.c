#include <stdio.h>

void main() {
    int i, a, b, c, maior, menor, meio;

    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Escolha uma opcao (1 = crescente, 2 = decrescente, 3 = maior no meio): ");
    scanf("%d", &i);

    if (i == 1) {  
        if (a > b) { int temp = a; a = b; b = temp; }
        if (b > c) { int temp = b; b = c; c = temp; }
        if (a > b) { int temp = a; a = b; b = temp; }
        printf("Ordem crescente: %d %d %d\n", a, b, c);
    } 
    else if (i == 2) {  
        if (a < b) { int temp = a; a = b; b = temp; }
        if (b < c) { int temp = b; b = c; c = temp; }
        if (a < b) { int temp = a; a = b; b = temp; }
        printf("Ordem decrescente: %d %d %d\n", a, b, c);
    } 
    else if (i == 3) {  
        if (a > b && a > c) {
            maior = a;
            if (b > c) { meio = b; menor = c; }
            else { meio = c; menor = b; }
        } else if (b > a && b > c) {
            maior = b;
            if (a > c) { meio = a; menor = c; }
            else { meio = c; menor = a; }
        } else {
            maior = c;
            if (a > b) { meio = a; menor = b; }
            else { meio = b; menor = a; }
        }

        printf("Maior no meio: %d %d %d\n", menor, maior, meio);
    } 
    else {
        printf("Opção invalida!\n");
    }

}
