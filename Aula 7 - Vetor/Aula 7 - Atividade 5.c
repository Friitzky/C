#include <stdio.h>
#include <stdlib.h>

//5- Fazer um programa que leia o peso de todos os alunos da sala de aula.
//Faça os cálculos necessários, mostre todos os pesos lidos e informe o peso total dos alunos e a média de peso.

void main(){
	
	
	int x=0, a=0;
	float  totp=0, medp=0;
	
	printf("Informe a quantidade de alunos: ");
	scanf("%i", &a);
	fflush(stdin);
	
	float peso[a];
	for(x=0;x < a; x++){
		printf("Informe o peso do aluno %i: ", x);
		scanf("%f", &peso[x]);
		
		totp += peso[x];
		medp = totp / a;
	}	
	
	for(x=0; x < a; x++){
		printf("\nPeso do aluno %i: %.2fKg", x, peso[x]);
		
	}

		printf("\n\nTotal de peso: %.2fKg", totp);
		printf("\nMedia de peso: %.2fKg", medp);

	getchar();
	
	
	
}
		
	
	
		

		
	


	


