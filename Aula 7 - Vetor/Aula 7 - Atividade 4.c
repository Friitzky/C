#include <stdio.h>
#include <stdlib.h>

//Fazer um programa que leia a idade de todos os alunos da sala de aula e mostre todas as idades lidas.

void main(){
	
	
	int x=0, a=0;
	
	printf("Informe a quantidade de alunos: ");
	scanf("%i", &a);
	fflush(stdin);
	
	int idade[a];
	for(x=0;x < a; x++){
		printf("Informe a idade do aluno %i: ", x);
		scanf("%i", &idade[x]);
	}
	
	for(x=0; x < a; x++){
		printf("\n\nIdade do aluno %i: %i", x, idade[x]);
	}


	getchar();
	
	
	
}
		
	
	
		

		
	


	


