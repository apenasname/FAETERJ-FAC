#include <stdio.h>

void main ()
{
	int numPessoas, totalProf = 0, totalMestresDr = 0, totalEspecialistas = 0, totalSFundamental = 0, somaIdadeSFundamental = 0, totalPessoasSFundamental = 0, i, tipo, idade;
	char escolaridade;
	
	printf("Qual o numero de pessoas a serem entrevistadas? ");
	scanf("%d", &numPessoas);
	
	for(i=0; i < numPessoas; i++) {
		printf("\nPessoa %d:\n", i+1);
		
		printf("Digite 1 para professor e 2 para funcionario: ");
		scanf("%d", &tipo);
		
		printf("Digite a idade: ");
		scanf("%d", &idade);
		
		printf("\nDigite o codigo da escolaridade: \n\nI = Fundamental Incompleto\nF = Fundamental Completo\nE = Ensino Medio\nG = Graduacao\nP = Especializacao\nM = Mestrado\nD = Doutorado\n\n");
		scanf(" %c", &escolaridade);
		
		if (tipo == 1) {
			totalProf++;
			if (escolaridade == 'M' || escolaridade == 'D') {
				totalMestresDr++;
			}
		}
		
		if (escolaridade == 'P') {
			totalEspecialistas++;
		}
		
		if (escolaridade == 'I') {
			somaIdadeSFundamental += idade;
			totalSFundamental++;
		}
	}
	
	if (totalProf > 0) {
		printf("\nPercentual de professores que sao mestres ou doutores: %.2f%%: \n", (totalMestresDr / (float) totalProf * 100));
	}
	
	printf("Quantidade de especialistas: %d\n", totalEspecialistas);
	
	if (totalSFundamental > 0) {
		printf("Media de idade de pessoas sem ensino fundamenal completo: %d\n", (somaIdadeSFundamental / totalSFundamental));	
	}	
}
