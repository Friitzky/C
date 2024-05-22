#include <stdio.h>
#include <stdlib.h>

//2 – Escrever um programa que leia a idade, peso e altura de 5 pessoas – Matriz 5 x 3

void main(){
	
	float matriz [5][3];
	int soma=1, lin, col, idade=0;
	float peso=0, altura=0, mediai=0, mediap=0, mediaa=0, somai=0, somap=0, somaa=0;
		
	for(lin=0;lin<5;lin++){
	
		col=1;
		printf("Informe o idade: ");
		scanf("%f", &matriz[lin][1]);
		somai+= matriz[lin][1];
		fflush(stdin);
		
		col=2;
		printf("Infomre a peso: ");
		scanf("%f", &matriz[lin][2]);
		somap+= matriz[lin][2];
		fflush(stdin);
		
		col=3;
		printf("Informe a altura: ");
		scanf("%f", &matriz[lin][3]);
		somaa+=matriz[lin][3];
		fflush(stdin);
		printf("\n");	
	}
	
	mediai= somai / 5;
	mediap = somap / 5;
	mediaa = somaa / 5;
	
	
	//MOSTRANDO SOMENTE AS IDADES LIDAS
	printf("\n");	
	for(lin=0;lin<5;lin++){
		printf("%.2f", matriz[lin][1]);
		printf("\n");
	}	
	
	//MOSTRANDO SOMENTE OS PESOS LIDOS	
	printf("\n");	
	for(lin=0;lin<5;lin++){
		printf("%.2f ", matriz[lin][2]);
		printf("\n");
	}
	
	//MOSTRANDO SOMENTE AS ALTURAS LIDAS
	printf("\n");	
	for(lin=0;lin<5;lin++){
		printf("%.2f ", matriz[lin][3]);
		printf("\n");
	}
	
	//MOSTRANDO AS MEDIAS DE PESO, IDADE E ALTURA
	printf("\n\nMEDIAS DE IDADE, PESO E ALTURA");
	printf("\nMedia idade: %.2f", mediai);
	printf("\nMEdia peso: %.2f", mediap);
	printf("\nMedia Altura: %.2f", mediaa); 	
}