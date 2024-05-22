#include <stdio.h>
#include <stdlib.h>

//5 – Escreva um programa que leia o 3 preços para cada tipo de produto Monitor, teclado, mouse e HD – Matriz 4 x 3

void main(){
		
		float matriz[4][3];
		int lin, col;
		float total=0, medmon=0, medtec=0, medmou=0, medhd=0;
		
		
		for(lin=0;lin<4;lin++){
			for(col=0;col<3;col++){
				printf("Informe o valor do produto[%i][%i]: R$", lin + 1, col +1);
				scanf("%f", &matriz[lin][col]);
				
				total += matriz[lin][col];
				
			}
			printf("\n");
		}		
		
		

		
	
}