#include <stdio.h>

void main()
{
	int cf, pd, i, custo, total;
	
	printf("Digite o custo de fábrica de um carro: R$");
	scanf("%d", &cf);
	
	printf("Digite a porcentagem do distribuidor: ");
	scanf("%d", &pd);
	
	printf("Digite a porcentagem dos impostos: ");
	scanf("%d", &i);
	
	custo = (pd*cf)/100 + (i*cf)/100;
	total = custo + cf;
	
	printf("O preco total do carro vai ser de: R$%d",total);
}
