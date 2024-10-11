#include <stdio.h>

int soma(int N1, int N2) 
{
  return(N1 + N2); 
}

int subtracao(int N1, int N2) 
{
  return(N1 - N2); 
}

int multiplicacao(int N1, int N2) 
{
  return(N1 * N2); 
}

int divisao(int N1, int N2) 
{
  return(N1 / N2); 
}

void main ()
{
	float num1, num2, resultado;
	int operacao;
	
	printf("Primeiro numero: ");
	scanf("%f", &num1);
	printf("Segundo numero: ");
	scanf("%f", &num2);
	
	printf("\nTipos de operacao: ");
	printf("\n1. Soma\n");
	printf("2. Subtracao\n");
	printf("3. Multiplicacao\n");
	printf("4. Divisao\n\n");
	printf("Digite o tipo de operacao: ");
	scanf("%d", &operacao);
	
	if (operacao == 1) {
		resultado = soma(num1, num2);
	} else if (operacao == 2) {
		resultado = subtracao(num1, num2);
	} else if (operacao == 3) {
		resultado = multiplicacao(num1, num2);
	} else if (operacao == 4) {
		if (num2 == 0) {
			printf("Nao e possivel dividir um numero por zero!\n");
			return 1;
		} else {
			resultado = divisao(num1, num2);
		}
	} else {
		printf("Operação invalida!\n");
		return 1;
	}

	printf("\nResultado: %.2f\n", resultado);

}
