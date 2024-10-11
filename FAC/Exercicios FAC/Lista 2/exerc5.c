#include <stdio.h>

void main ()
{
	float preco, total;
	int quantidade, codigo;
	
	printf("Lista de precos e codigos dos produtos: \n\n");
	
	printf("Cachorro quente: 100 \nPreco: R$3,50\n\n");
	printf("Bauru simples: 101 \nPreco: R$4,50\n\n");
	printf("Bauru com ovo: 102 \nPreco: R$5,20\n\n");
	printf("Hamburger 103 \nPreco: R$3,00\n\n");
	printf("Cheeseburger: 104 \nPreco: R$4,00\n\n");
	printf("Refrigerante: 105 \nPreco: R$2,50\n\n");
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigo);
	
	if (codigo == 100) {
		preco = 3.50;
	} else if (codigo == 101) {
		preco = 4.50;
	} else if (codigo == 102) {
		preco = 5.20;
	} else if (codigo == 103) {
		preco = 3.00;
	} else if (codigo == 104) {
		preco = 4.00;
	} else {
		preco = 2.50;
	}
	
	printf("Digite a quantidade: ");
	scanf("%d", &quantidade);
	
	total = preco * quantidade;
	
	printf("O total a ser pago: R$%.2f", total);
}
