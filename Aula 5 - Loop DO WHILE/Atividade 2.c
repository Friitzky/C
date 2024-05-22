#include <stdio.h>
#include <stdlib.h>


//Crie um programa que leia o preço de 5 produtos, acumule esses valores e informe o valor médio dos
//preços.

#include <stdio.h>
#include <stdlib.h>

void main(){

	int x=0;
	float preco=0, total=0, med=0;
	
	for(x=1; x <=5; x++){
		
		printf("Informe valor do produto %i: R$ ", x);
		scanf("%f", &preco);
		total += preco;
		fflush(stdin);
	}
	
	
	med = total / 5;
	
	printf("\n\nValor medio dos produtos: R$%.2f", med);
	
}


	


