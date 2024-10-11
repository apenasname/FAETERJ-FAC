#include <stdio.h>

void main ()
{
	float horasTrab, valPorHora, salario;
	
	printf("Digite o numero de horas trabalhadas na semana: ");
	scanf("%f", &horasTrab);
	
	printf("Digite o valor recebido por hora trabalhada: ");
	scanf("%f", &valPorHora);
	
	if (horasTrab <= 40) {
		salario = horasTrab * valPorHora;
	} else {
		salario = (horasTrab * valPorHora) * 1.5;
	}
	
	printf("O salario semanal e: R$%f", salario);
		
}
