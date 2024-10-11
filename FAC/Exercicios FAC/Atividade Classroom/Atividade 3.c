#include <stdio.h>

void main ()
{
	int num, i, j;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for (i=1; i<=num; i++) {
		
		if (i % 2 == 1) {
			
			for (j = 1; j <= i; j++) {	
				printf("%d ", j);
			}
		} else {
			
			for (j = i; j >= 1; j--) {
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}
