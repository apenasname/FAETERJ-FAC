#include <stdio.h>

void main ()
{
	int I, N, Y;
	
	printf("Digite o valor de N: "); //inteiro 
	scanf("%d", &N);
	
	printf("Digite o valor de Y: "); //multiplos e inferiores ao inteiro
	scanf("%d", &Y);
	
	for (I=Y; I<N; I+=Y) //inicia com I = a Y, permanece com I sendo < que N, atualização com atribuição I + Y
	{
		printf("%d ", I);
	}
}
