#include <stdio.h>
#include <stdlib.h>


//Elabore um programa que efetue a leitura de valores positivos inteiros até que um valor negativo seja informado. 
//Ao final devem ser apresentados o maior e menor valores informados pelo usuário.


void main(){

	int num=0, maior=0, menor=0;
	
	printf("Informe um valor numerico: ");
	scanf("%i", &num);
	
	maior = menor = num;
	
	while (num >= 0){
		
		printf("\nInforme outro valor numerico (negativo para sair): ");
		scanf("%i", &num);
		
		if( num > maior){
			maior = num;
		}
		else if( num < menor && num > 0){
			menor = num;
		}
	}
	
	printf("\n\nMaior numero informado: %i", maior);
	printf("\nMenor numero informado: %i", menor);
	
	getchar();
	

}


	


