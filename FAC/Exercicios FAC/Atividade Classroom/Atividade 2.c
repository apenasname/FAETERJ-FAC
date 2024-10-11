#include <stdio.h>

void main () 
{
    int a, b, valorAtual, contador = 0, incremento = 1;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    printf("Numeros exibidos: ");

    for (valorAtual = a; valorAtual <= b;) {
        printf("%d ", valorAtual);
        contador++;
        valorAtual += incremento;
        incremento++;
    }

    printf("\n\nQuantidade de numeros exibidos: %d\n", contador);
}
