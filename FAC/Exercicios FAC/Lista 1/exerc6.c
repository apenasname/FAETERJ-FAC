#include <stdio.h>

void main ()
{
	int dia, mes, diaDoAno;
	
	printf("Informe o dia: ");
	scanf("%d", &dia);
	
	printf("Informe o mes: ");
	scanf("%d", &mes);
	
	diaDoAno = dia;
	
	if (mes > 1) diaDoAno += 31; //Janeiro
	if (mes > 2) diaDoAno += 28; //Fevereiro
	if (mes > 3) diaDoAno += 31; //Março
	if (mes > 4) diaDoAno += 30; //Abril
	if (mes > 5) diaDoAno += 31; //Maio
	if (mes > 6) diaDoAno += 30; //Junho
	if (mes > 7) diaDoAno += 31; //Julho
	if (mes > 8) diaDoAno += 31; //Agosto
	if (mes > 9) diaDoAno += 30; //Setembro
	if (mes > 10) diaDoAno += 31; //Outubro
	if (mes > 11) diaDoAno += 30; //Novembro

	printf("A data %d/%d e o %d dia do ano", dia, mes, diaDoAno);

}
