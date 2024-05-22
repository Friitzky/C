#include <stdio.h>
#include <stdlib.h>

//8 – Fazer um programa que utilizando Vetor leia a idade de 12 pessoas. 
//Criar as funções 1 Mostra todas as idades 2 Mostra a média das idades 3 Mostra somente as idades de índice ímpar.

tidades(int y, int x, int idade[]){

	for(x=0;x< y;x++){
		printf("\nIdade %i: %i", x, idade[x]);
	}	
}

medidades(int y, int x, int idade[]){
	
	float soma = 0;
	for(x=0; x < y; x++){
		soma += idade[x];
	}
	
	return ( printf("\n\nMedia de idades: %.2f", soma / y) );	
}

idadespares(int y, int x, int idade[]){
	
	printf("\n");
	for(x=1; x < y; x += 2){
		printf ("\nIdade par %i:  %i", x, idade[x]);
	}
	
}

void main(){
	
	
	int idade[12], x, y=12;
	int soma=0;
	float med=0;
	
	
	for(x=0;x<12;x++){
		printf("Informe a idadade %i: ", x);
		scanf("%i", &idade[x]);	
		
		soma += idade[x];			
	}
	
	
	tidades(y, x, idade);
	medidades(y, x, idade);
	idadespares(y, x, idade);
	
	
	
	

	
	
	
	getchar();

	
}