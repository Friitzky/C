#include <stdio.h>
#include <stdlib.h>

//4 – Escrever um programa que leia 16 números inteiros em um vetor

void main(){
	
	int num[16], maior=0, menor=0;
	int x=0;
	
	for(x=0;x<16;x++){
		printf("Informe um numero %i: ", x);
		scanf("%i", &num[x]);
		fflush(stdin);		
	}
	
	maior = num[0];
	menor = num[0];
	
	for(x=0;x<16;x++){
		
		if(num[x] > maior){
			maior = num[x];
		}
		if (num[x] < menor){
			menor = num[x];
		}
	}
	

	
	printf("\nMaior valor: %i", maior);
	printf("\nMenor valor: %i", menor);
	
		
			
}