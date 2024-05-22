#include <stdio.h>
#include <stdlib.h>


//Crie um programa que leia o sexo 1 para masculino ou 2 para feminino, faça os testes, conte os valores e
//informe o total de alunos, o total de homens e o total de mulheres na sala de aula. O programa vai ler o sexo
//até que um número diferente de 1 e 2 seja encontrado.

#include <stdio.h>
#include <stdlib.h>

void main(){

	int sexo=0, tota=0, totm=0, totf=0;
	
	printf("[1] - Sexo Masculino\n");
	printf("[2] - Sexo Feminino");
	printf("\n\nInforme o sexo do aluno: ");
	scanf("%i", &sexo);
	fflush(stdin);
	
	while(sexo == 1 || sexo == 2){
		tota += tota;
		
		
		if(sexo ==1){
			totm++;
		}
		else if (sexo == 2){
			totf++;
		}
		
		printf("Informe o sexo do proximo aluno: ");
		scanf("%i", &sexo);
	}
	
	printf("\n\nTotal de alunos: %i", tota);
	printf("\nTotal de alunos do sexo masculino: %i", totm);
	printf("\nTotal de alunos do sexo feminino: %i", totf);
	

}


	


