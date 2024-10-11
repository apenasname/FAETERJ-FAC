#include <stdio.h>

void main () 
{
    float saldoMedio, credito;
    
    printf("Qual seu saldo medio do ultimo ano? R$ ");
    scanf("%f", &saldoMedio);
    
    if (saldoMedio > 1000 && saldoMedio <= 1499.99) {
        credito = saldoMedio * 0.20;
    } else if (saldoMedio >= 1500 && saldoMedio <= 2499.99) {
        credito = saldoMedio * 0.30;
    } else if (saldoMedio >= 2500) {  
        credito = saldoMedio * 0.40;
    } else {
        credito = 0.0; 
    }
    
    printf("O valor do credito concedido e: R$%.2f", credito);  
}

