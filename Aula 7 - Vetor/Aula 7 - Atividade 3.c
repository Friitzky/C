#include <stdio.h>
#include <stdlib.h>

//Elabore um programa que leia o número de horas trabalhadas de 10 operários. 
//Calcule o salário a receber sabendo-se que os operários ganham R$ 10,00 por hora. 
//Se o número de horas trabalhadas pelo operário exceder a 50 horas, calcule o excesso pagando R$ 20,00 por hora a mais que as 50 horas. 
//Mostrar o salário a receber pelos 10 operários.

void main(){
	
		int x=0, hextra=0, horas[10];
		float salhora=10, salario[10];
		
		
		
		for(x=0; x <=9; x++){
			
			printf("\n\nInforme a quantidade de horas trabalhadas do funcionario %i: ", x);
			scanf("%i", &horas[x]);
			
			if(horas[x] > 50){
				hextra = (horas[x] - 50) * 20;
			}
		
			salario[x] = ( 50 * 10 ) + hextra;
			
		}	
		
		for(x=0; x < 10; x++){
			printf("\nSalario a receber do funcionario %i: R$%.2f", x, salario[x]);
		}
		
	
		
		getchar();
		
		
}
		
	


	


