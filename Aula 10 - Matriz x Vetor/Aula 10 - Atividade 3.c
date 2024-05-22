#include <stdio.h>
#include <stdlib.h>

//3 – Escrever um programa que leia números inteiros em uma matriz 4 x 4

void main(){
		
	int matriz[4][4];
	int lin, col, maior=0, menor=0;
		
	for(lin=0; lin<4; lin++){
		for(col=0;col<4;col++){
			printf("Informe valor: ");
				scanf("%i", &matriz[lin][col]);
				
		}
	printf("\n");
	}

	//MOSTRANDO A MATRIZ 
	for(lin=0;lin<4;lin++){
		for(col=0;col<4;col++){
			printf("%i ", matriz[lin][col]);
		}
		printf("\n\n");
	}


	//MAIOR VALOR
	
	printf("\nMaio Valor");
	for(lin=0;lin<4;lin++){
		maior = matriz[lin][0];
		for(col=1;col<4;col++){
			if(matriz[lin][col] > maior){
				maior = matriz[lin][col];
			}
		}
	printf("\nLinha %i: %i", lin + 1, maior);
	}
	
	//MENOR VALOR
	printf("\n\nMenor valor");
	for(lin=0;lin<4;lin++){
		menor = matriz[lin][0];
		for(col=1;col<4;col++){
			if(matriz[lin][col] < menor){
				menor = matriz[lin][col];
			}
		}
	printf("\nLinha %i: %i", lin + 1,  menor);
	}

	return 0;



}