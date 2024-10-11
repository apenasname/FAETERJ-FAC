#include <stdio.h>

void main ()
{
	float percurso, kmPorLitro, precoCombustivel, combustivelConsumido, custoTotal;
	
	printf("Qual o percurso percorrido (em km)? ");
	scanf("%f", &percurso);
	
	printf("Qual o numero de km que o carro percorre por L de combustivel? ");
	scanf("%f", &kmPorLitro);
	
	printf("Quanto custa o preco do litro do combustivel? ");
	scanf("%f", &precoCombustivel);
	
	combustivelConsumido = percurso / kmPorLitro;	
	
	custoTotal = combustivelConsumido * precoCombustivel;
	
	printf("Combustivel consumido: %.2f litros \n", combustivelConsumido);
	printf("Custo total de combustivel: R$%.2f", custoTotal);
}
