#include <stdio.h>
#include <stdlib.h>

//4 – Escrever um programa que leia 16 números inteiros em um vetor

void main(){
	
	float num[15], maior=0, menor=0;
	int x=0;
	
	
	
	for(x=0;x<15;x++){
		printf("Informe o valor do produto %i: ", x);
		scanf("%f", &num[x]);
		fflush(stdin);		
	}
	
	
	for(x=1;x<16;x++){
		
		if(num[x] > 100){
			maior++;
		}
		if (num[x] < 100){
			menor++;
		}
	}
	

	
	printf("\nQuantidade de produtos com preco supeior a 100 : %.2f", maior);
	printf("\nQuantidade de produtos com preco infeior a 100: %.2f", menor);
	
		
			
}