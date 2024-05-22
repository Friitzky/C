#include <stdio.h>
#include <stdlib.h>

//1 – Fazer um programa que utilizando 4 vetores, leia SOMENTE o preço de 5 produtos em cada vetor.
// Mostre e acumule o preço dos produtos dos 4 vetores, um de cada vez. Mostre o valor a pagar somando o acumulado de cada vetor.

void main(){
	
	int x=0;
	float vetor1[5], vetor2[5], vetor3[5], vetor4[5], total=0, tot1=0, tot2=0, tot3=0, tot4=0;
	

	for (x=0; x <5; x++){
		
		printf("Informe o valor do produto %i do vetor 1: ", x);
		scanf("%f", &vetor1[x]);
		fflush(stdin);
		
		tot1 += vetor1[x];
		
		
	}

	printf("\nTotal vetor 1: R$%.2f", tot1);
	printf("\n");
	printf("\n");

	for (x=0; x <5; x++){
		
		printf("Informe o valor do produto %i do vetor 2: ", x);
		scanf("%f", &vetor2[x]);
		fflush(stdin);
		
		tot2 += vetor2[x];	
	}
	
	printf("\nTotal vetor 2: R$%.2f", tot2);
	printf("\n");
	printf("\n");
	
	for (x=0; x <5; x++){
		
		printf("Informe o valor do produto %i do vetor 3: ", x);
		scanf("%f", &vetor3[x]);
		fflush(stdin);
		
		tot3 += vetor3[x];	
	}
	
	printf("\nTotal vetor 3: R$%.2f", tot3);
	printf("\n");
	printf("\n");
	
	for (x=0; x <5; x++){
		
		printf("Informe o valor do produto %i do vetor 4: ", x);
		scanf("%f", &vetor4[x]);
		fflush(stdin);
		
		tot4 += vetor4[x];		
	}
	
	total = tot1 + tot2 + tot3 + tot4;
	
	printf("\nTotal vetor 4: R$%.2f", tot4);
	
	
	printf("\n\nValor total de todos produtos: R$%.2f", total);

	
}
		
	
	
		

		
	


	


