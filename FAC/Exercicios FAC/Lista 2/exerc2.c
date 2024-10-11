#include <stdio.h>

void main ()
{
	float pesoTerra, pesoPlaneta;
	int planeta;
	float gravidade[] = {0.37, 0.88, 0.38, 2.64, 1.15, 1.17};
	
	printf("Digite o seu peso na Terra (em kg): ");
	scanf("%f", &pesoTerra);
	
    printf("Escolha um planeta digitando o numero correspondente:\n");
    printf("1 - Mercurio\n");
    printf("2 - Venus\n");
    printf("3 - Marte\n");
    printf("4 - Jupiter\n");
    printf("5 - Saturno\n");
    printf("6 - Urano\n");
    printf("Numero do planeta: ");
    scanf("%d", &planeta);
    
    pesoPlaneta = (pesoTerra / 10) * gravidade[planeta - 1];
    
    printf("Seu peso no planeta escolhido e de: %.2f kg", pesoPlaneta);
}
