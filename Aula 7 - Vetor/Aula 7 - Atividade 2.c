#include <stdio.h>
#include <stdlib.h>

//Elabore um programa que leia o número de horas trabalhadas e o salário por hora de 10 funcionários. 
//Faça o cálculos necessários e informe o salário a receber pelos 10 funcionários.

void main(){
	
		int x=0, horas[10];
		float salhora[10], salario[10], tot=0;
		
		
		
		for(x=0; x <=9; x++){
			
			printf("\n\nInforme a quantidade de horas trabalhadas do funcionario %i: ", x);
			scanf("%i", &horas[x]);
			
			printf("Informe o valor por hora trabalhada: ");
			scanf("%f", &salhora[x]);
					
			salario[x] = horas[x] * salhora[x];
			
		}	
		
		for(x=0; x < 10; x++){
			printf("\nSalario a receber do funcionario %i: R$%.2f", x, salario[x]);
		}
		
	
		
		getchar();
		
		
}
		
	


	


