#include <stdio.h>

int main ()
{
	int n1, n2;
	int centenas, dezenas, unidades;
	
	printf("Digite um numero inteiro entre 100 e 999: ");
	scanf("%d", &n1);
	
    if (n1 < 100 || n1 > 999) {
        printf("Numero invalido!\n");
        return 0;
    }
	
	centenas = n1 / 100;
	dezenas = (n1 / 10) % 10;
    unidades = n1 % 10;
	
    if (centenas > dezenas) {
        centenas = centenas + dezenas;
        dezenas = centenas - dezenas;
        centenas = centenas - dezenas;
    }
    
    if (centenas > unidades) {
        centenas = centenas + unidades;
        unidades = centenas - unidades;
        centenas = centenas - unidades;
    }
    
    if (dezenas > unidades) {
        dezenas = dezenas + unidades;
        unidades = dezenas - unidades;
        dezenas = dezenas - unidades;
    }
	
	n2 = centenas * 100 + dezenas * 10 + unidades;
	
	printf("N2: %d\n", n2);
	return 0;
}
