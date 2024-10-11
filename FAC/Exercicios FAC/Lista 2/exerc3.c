#include <stdio.h>

void main ()
{
	float preco, valorAVista, valor5x, valor10x, precoJuros;
	
	printf("Digite o valor do produto: R$");
	scanf("%f", &preco);
	
	valorAVista = preco * 0.90;
	
	valor5x = preco /  5;
	
	precoJuros = preco * 1.20;
	
	valor10x = precoJuros / 10;
	
	printf("Formas de pagamento: \n");
	printf("A vista (10%% de desconto): R$%.2f\n", valorAVista);
	printf("Parcelar em 5x (sem juros): R$%.2f\n", valor5x);
	printf("Parcelar em 10x (com juros de 20%%): R$%.2f", valor10x);
}
