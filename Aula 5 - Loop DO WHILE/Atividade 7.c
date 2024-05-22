#include <stdio.h>
#include <stdlib.h>


//Elabore um programa que efetue a leitura de valores positivos inteiros até que um valor negativo seja informado. 
//Ao final devem ser apresentados o maior e menor valores informados pelo usuário.


void main(){

	int vldep= 0;
	float  hrtrab=0, vlhora=0, hrextra=0, salario=0, vlhrextra=0;
	
	printf("Informe o valor por hora trabalhadas: R$");
	scanf("%f", &vlhora);
	fflush(stdin);
	
	printf("Informe a quantidade de horas trabalhadas: ");
	scanf("%f", &hrtrab);
	fflush(stdin);
	
	printf("Informe a quantidade de horas extrar trabalhadas: ");
	scanf("%f", &hrextra);
	fflush(stdin);

	printf("Informe a quantidade de dependentes funcionario possui: ");
	scanf("%i", &vldep);
	fflush(stdin);
	
	vlhrextra = vlhora + (vlhora / 2);
	vldep = vldep * 32;
	salario = ( hrtrab * vlhora ) + vlhrextra + vldep;
	
	if (salario < 900 ){
		salario = salario + 100;
		printf ("\n\nSalario ISENTO de IRPF");
		printf("\nSalario a receber: R$%.2f", salario);
	}
	else if(salario >=900 && salario < 1400){
		printf("\n\nIRPF de 10%%");
		printf("\n\nSalario a receber: R$%.2f", salario);
		
		if (salario <= 950){
			salario = salario - (salario * 0.10)+ 100;
			printf("\n\nSalario a receber: R$%.2f", salario);
		}
	}
	else if(salario > 1400){
		printf("\n\nIRPF de 20%%");
		salario = salario - ( salario * 0.20) + 50;
		printf("\n\nSalario a receber: R$%.2f", salario);
	}
	
	getchar();
	
}



	


