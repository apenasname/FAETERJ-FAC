#include <stdio.h>

void main() {

    int n1, n2, temp, maior1 = 0, maior2 = 0, digito, diferenca;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    if (n1 < 1 || n1 > 999 || n2 < 1 || n2 > 999) {
        printf("Erro: os numeros devem estar entre 1 e 999.\n");
        return 1;
    }

    for (temp = n1; temp > 0; temp /= 10) {
        digito = temp % 10;
        if (digito > maior1) {
            maior1 = digito;
        }
    }

    for (temp = n2; temp > 0; temp /= 10) {
        digito = temp % 10;
        if (digito > maior2) {
            maior2 = digito;
        }
    }

    diferenca = maior1 - maior2;
    printf("A diferenca entre os maiores algarismos e: %d\n", diferenca);
}
