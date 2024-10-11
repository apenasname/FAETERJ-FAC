#include <stdio.h>

void main ()
{
	float somaPositivos = 0, numero, mediaPositivos;
	int i, negativos = 0, positivos = 0;
	const int QUANT = 300;
	
	for (i=1;i<=QUANT;i++) {
		
		printf("Digite um numero: ");
		scanf("%f", &numero);
		
		if (numero > 0) {
			negativos++;
		} else if (numero > 0) {
			somaPositivos += numero;
			positivos++;
		}
	}
	
	mediaPositivos = somaPositivos/positivos;
	
	printf("\nQuantidade de negativos: %d\n", negativos);
	printf("Media dos positivos %.1f\n", mediaPositivos);
	
}
