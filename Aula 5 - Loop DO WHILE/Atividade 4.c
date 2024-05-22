#include <stdio.h>
#include <stdlib.h>


//Crie um programa que leia o salário dos funcionários. Os salários devem ser acumulados e os funcionários
//devem ser contados. O programa vai ler o salário até que um salário = 0 seja encontrado. Informar total de
//salário, total de funcionários e média salarial.

#include <stdio.h>
#include <stdlib.h>

void main(){

	float salario=0, tots=0, meds=0;
	int funcio=0;
	
	printf("Informe salario do funcionario: R$");
	scanf("%f", &salario);
	fflush(stdin);
	
	while(salario != 0){
		funcio++;
		tots = tots + salario;
		
		printf("Informe o salario do proximo funcionario: R$ ");
		scanf("%f", &salario);
	}
	
	meds = tots / funcio;
	
	printf("\n\nTotal de salarios: R$%.2f", tots);
	printf("\nMedia de salarios: R$%.2f", meds);
	printf("\nTotal de funcionarios: %i", funcio);
	

}


	


