#include <stdio.h>
#include <stdlib.h>


//Crie um programa que leia um número do teclado até que encontre um número igual a zero. No final,
//mostre a soma dos números digitados.

#include <stdio.h>
#include <stdlib.h>

void main(){

	int num=0, soma=0;
	
	printf("Digite um numero (0 para sair): ");
	scanf("%i", &num);
	fflush(stdin);
	
	
	while(num != 0){
		soma += num;
		printf("Digite um numero (O para sair): ");
		scanf("%i", &num);	
		fflush(stdin);
	}	
	
	printf("\n\nSoma dos numeros digitados: %i", soma);
	
	
}


	


