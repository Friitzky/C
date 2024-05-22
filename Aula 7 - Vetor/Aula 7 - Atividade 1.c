#include <stdio.h>
#include <stdlib.h>

//Fazer um programa que leia a nota de 5 provas, calcule a média e verifique a situação do aluno. 
//SE a média for superior ou igual a 7, o aluno está aprovado, se a média for maior ou igual 4 e menor do que 7, o aluno estará de exame, caso contrário o aluno ficará reprovado. 
//Verificar possibilidade de ter mais alunos para calcular a média.

void main(){
	
		int alunos=1;
	
		
		while(alunos >=1 ){
			
		int x=0, alunos=1, op=0;
		float nota[5], media=0, totnot=0;
		
		
		for(x=0; x <= 4; x++){
			printf("Informe a nota %i: ", x);
			scanf("%f", &nota[x]);
			
			totnot += nota[x];	
		}
		
		media = totnot / 5;	
		
		if(media >= 7){
			printf("\nMedia: %.2f", media);
			printf("\nVoce foi aprovado!");	
		}
		else if(media >= 4 && media < 7){
			printf("\nMedia: %.2f", media);
			printf("\nVoce ficou de exame!");
		}
		else if(media < 4){
			printf("\nMedia: %.2f", media);
			printf("\nVoce esta reprovado!");
		}
		
		printf("\n\nTem mais alunos?");
		printf("\n[1] - SIM");
		printf("\n[2] - NAO");
		printf("\n\nEscolha uma opcao: ");
		scanf("%i", &op);
		
		if(op == 1 ){
			continue;
		}	
		else{
			printf("\nOpcao invalida! Encerrando programa...");
			break;
		}
}
		
		getchar();				
				
}
		
	


	


