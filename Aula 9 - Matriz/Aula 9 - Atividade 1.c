#include <stdio.h>
#include <stdlib.h>

//Fazer um programa que leia valores de produtos em uma matriz 8 x 9. Mostrar o valor total de todos os produtos. 
//Mostrar os valores somente das linhas ímpares. Mostrar o valor somente das colunas pares. Mostrar todos os valores lidos na matriz.
void main(){
	
	float matriz [8][9];
	int soma=1, lin, col;
	float total=0;
		
	for(lin=0;lin<8;lin++){
		for(col=0;col<9;col++){
			
			printf("Digite os valores dos produtos[%i][%i]: ", lin + 1, col + 1);
			scanf("%f", &matriz[lin][col]);
			total += matriz[lin][col];
		}
		printf("\n");
	}
		
	printf("\nValor total dos produtos: R$%.2f", total);
	
	printf("\n\nSOMENTE OS VALORES LIDOS EM LINHAS IMPARES\n");
	for(lin=0;lin<8;lin=lin+2){
		for(col=0;col<9;col++){
			printf("%.0f ", matriz[lin][col]);
		}
		printf("\n");
	}	
	printf("\n");
	
	
	printf("\nSOMENTE OS VALORES LIDOS EM COLUNAS PARES\n");
	for(lin=0;lin<8;lin++){
		for(col=1;col<9;col=col+2){
			printf("%.0f ", matriz[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	
	
	printf("\nVALORES LIDOS\n");
	
	for(lin=0;lin<8;lin++){
		for(col=0;col<9;col++){
			printf("%.0f ", matriz[lin][col]);
		}
		printf("\n");
	}
	printf("\n");
		
		
		
		
		
			
}