#include <stdio.h>

void main () 
{
	char figura;
	float area, raio, base, altura, lado;
	float pi = 3.14159;
	
        printf("Escolha uma figura para calcular a area:\n");
        printf("[C] - Circulo\n");
        printf("[R] - Retangulo\n");
        printf("[Q] - Quadrado\n");
        printf("[T] - Triangulo\n");
        printf("Digite a letra correspondente: ");
        scanf("%c", &figura);
        
        if (figura == 'C') {
        	printf("Digite o valor do raio do circulo: ");
        	scanf("%f", &raio);
        	
        	if (raio > 0) {
        		area = pi * (raio * raio);
        		printf("A area do cirgulo e: %.2f", area);
			} else {
				printf("Valor de raio invalido!");
			}
		} 
		else if (figura == 'R') {
			printf("Digite o valor da base do retangulo: ");
			scanf("%f", &base);
			printf("Digite o valor da altura do retangulo: ");
			scanf("%f", &altura);
			
			if (base > 0 && altura > 0) {
				area = base * altura;
				printf("A area do retangulo e: %.2f", area);
			} else {
				printf("Valores de base ou altura invalidos!");
			}
		}
		else if (figura == 'Q') {
			printf("Digite o valor do lado do quadrado: ");
			scanf("%f", &lado);
			
			if (lado > 0) {
				area = lado * lado;
				printf("A area do quadrado e: %.2f", area);
			} else {
				printf("Valor de lado invalido!");
			}
		}
		else if (figura == 'T') {
			printf("Digite o valor da base do triangulo: ");
			scanf("%f", &base);
			printf("Digite o valor da altura do triangulo: ");
			scanf("%f", &altura);
			if (base > 0 && altura > 0) {
				area = (base * altura) / 2;
				printf("A area do triangulo e: %.2f", area);
			} else {
				printf("Valores de base ou altura invalidos!");
			}
		} else {
			printf("Opcao invalida! Encerrando o programa.");
		}
	
	return 0;
}
