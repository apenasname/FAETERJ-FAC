#include <stdio.h>

void main ()
{
	float peso, altura, imc;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	imc = peso/(altura*altura);
	
	if (imc < 18.5) {
		printf("IMC = %.2f (Abaixo do peso)", imc);
	} else if (imc >= 18.5 && imc < 25) {
		printf("IMC = %.2f (Peso ideal)", imc);
	} else if (imc >= 25 && imc < 30) {
		printf("IMC = %.2F (Sobrepeso)", imc);
	} else if (imc >= 30 && imc < 35) {
		printf("IMC = %.2f (Obesidade grau I)", imc);
	} else if (imc >= 35 && imc < 40) {
		printf("IMC = %.2f (Obesidade grau II)", imc);
	} else {
		printf("IMC = %.2f (Obesidade grau III)", imc);
	}
}
