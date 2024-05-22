#include <stdio.h>
#include <stdlib.h>


//Elabo  re um programa que efetue a leitura sucessiva de valores numéricos e apresente no final o total do
//somatório, a média e o total de valores lidos. O programa deve fazer as leituras dos valores enquanto o usuário
//estiver fornecendo valores positivos. Ou seja, o programa deve parar, quando o usuário digitar um valor
//negativo

#include <stdio.h>
#include <stdlib.h>

void main(){

	int num=0, tot=0, qntd=0;
	float med=0;
	
	printf("Informe um valor numerico: ");
	scanf("%i", &num);
	fflush(stdin);
	
	while(num >= 0){
		qntd++;
		tot += num;
		
		printf("Informe o proximo valor numerico ( Valor negativo para sair): ");
		scanf("%i", &num);
	}
	
	med = tot / qntd;
	
	
	printf("\n\nTotal de valores lidos: %i", tot);
	printf("\nMedia dos valores lidos: %.2f", med);
	printf("\nQuantidade de valores lidos: %i", qntd);
	


}


	


