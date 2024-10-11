#include <stdio.h>

void main ()
{
	int num1, num2, soma = 0;
	
	num2 = 50;
	for (num1=1; num1<=50; num1++)
	{
		printf("%d %d ", num1, num2);
		
		soma += num1; 
		soma += num2;
		
		num2--;
	}
	
	printf("\n\nA soma dos numeros e: %d", soma);
}
