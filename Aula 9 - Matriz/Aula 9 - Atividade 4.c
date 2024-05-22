#include <stdio.h>
#include <stdlib.h>

//4 – Escreva um programa que leia valores de produtos em uma matriz 3 x 3

void main(){
		
	float matriz[3][3];
	int lin, col; 
	float total=0, med=0;
	
	
	for(lin=0;lin<3;lin++){
		for(col=0;col<3;col++){
			
			printf("Digite os valores dos produtos[%i][%i]: ", lin + 1, col + 1);
			scanf("%f", &matriz[lin][col]);
			total += matriz[lin][col];
		}
		printf("\n");
	}
	
	med = total / ( 3 * 3 );
	
	printf("\nValor total dos produtos: R$%.2f", total);
	printf("\nValor medio dos produtos: R$%.2f", med);
	

}