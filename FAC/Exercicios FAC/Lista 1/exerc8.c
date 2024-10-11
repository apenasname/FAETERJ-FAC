#include <stdio.h>
#include <string.h>

 void main ()
 {
 	char nomeHospede[100];
 	char tipoApt;
 	int numDiarias;
 	float valorConsumo, valorDiaria, valorTotalDiarias, taxaServico, totalGeral, subtotal;
 	
 	printf("Informe o nome do hospede: ");
 	fgets(nomeHospede, sizeof(nomeHospede), stdin);
 	
 	printf("Informe o tipo de apartamento (A, B, C ou D): ");
 	scanf("%c", &tipoApt);
 	
 	printf("Informe o numero de diarias: ");
 	scanf("%d", &numDiarias);
 	
 	printf("Informe o valor do consumo interno: ");
 	scanf("%f", &valorConsumo);
 	
 	if (tipoApt == 'A') {
 		valorDiaria = 350;
	 } else if (tipoApt == 'B') {
	 	valorDiaria = 275;
	 } else if (tipoApt == 'C') {
	 	valorDiaria = 200;
	 } else {
	 	valorDiaria = 150;
	 }
	 
    valorTotalDiarias = numDiarias * valorDiaria;
    subtotal = valorTotalDiarias + valorConsumo;
    taxaServico = subtotal * 0.10;
    totalGeral = subtotal + taxaServico;
	
    printf("\nConta Hotel\n");
    printf("Nome do hospede: %s", nomeHospede);
    printf("Tipo de apartamento: %c\n", tipoApt);
    printf("Valor total das diárias: R$%.2f\n", valorTotalDiarias);
    printf("Valor do consumo interno: R$%.2f\n", valorConsumo);
    printf("Subtotal: R$%.2f\n", subtotal);
    printf("Taxa de serviço (10%%): R$%.2f\n", taxaServico);
    printf("Total geral: R$%.2f\n", totalGeral);
	
 }
