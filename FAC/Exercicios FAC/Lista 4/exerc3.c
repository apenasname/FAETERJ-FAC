#include <stdio.h>
#include <math.h>

void main ()
{
	float valorInvestido, taxaRendimento, valorRend;
	int anos, meses;
	
	printf("Digite o valor investido na conta: R$");
	scanf("%f", &valorInvestido);
	
	printf("Digite a %% de rendimento fixo ao mes: ");
	scanf("%f", &taxaRendimento);
	
	printf("Digite o tempo de aplicacao em anos: ");
	scanf("%d", &anos);
	
	meses = anos*12;
	
	valorRend = valorInvestido * pow(1 + taxaRendimento / 100, meses);
	
	printf("A apos %d anos de investimento Joaozinho tem R$%.2f na conta", anos, valorRend);

}
