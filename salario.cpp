#include <iostream>
#include <stdio.h>

/* Escreva um programa para calcular o sal�rio
bruto de um profissional que recebe por hora, sabendo que ele ganha R$ 14,25/h e trabalhou 163 horas
normais e 20 horas extras (pagam o dobro). N�o use valores fixos no programa. Ao inv�s disso fa�a a
leitura dos dados de entrada em vari�veis para o valor hora, o n�mero de horas normais e o n�mero de
horas extras. */

int main() {
	
	double vl_hora, hr_trb, vl_extra, sal1, hr_extra, extra_dobro, salario_bruto;
	
	printf("Insira o valor da sua hora de trabalho: ");
	scanf("%lf", &vl_hora);
	
	printf("Insira as horas trabalhadas: ");
	scanf("%lf",&hr_trb);
	
	printf("Insira o valor da sua hora extra: ");
	scanf("%lf",&vl_extra);
	
	printf("Insira as horas extras trabalhadas: ");
	scanf("%lf",&hr_extra);
	
	sal1 = vl_hora * hr_trb;
	
	extra_dobro = (vl_extra * hr_extra)*2;
	
	salario_bruto = sal1 + extra_dobro; 
	
	printf("O valor a ser recebido sera de %.2lf", salario_bruto);
	
	return 0;
}
