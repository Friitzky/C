#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//6 – Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. 
//Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.


float pesoh(float alt){
	float  peso = 72.7 * alt - 58;
	return( printf("\nPeso ideal para uma pessoa do sexo masculino com %.2f de altura: %.2fKg", alt, peso ) );
}

float pesom( float alt){
	float peso = 62.1 * alt - 44.7;
	return( printf("\nPeso idaeal para uma pessoa do sexo Feminino com %.2f de altura: %.2fKg", alt, peso) );
}


void main(){
	
	float alt;
	int op;
	
	printf("\nQual sexo da pessoa:\n");
	printf("[1] - Masculino\n");
	printf("[2] - Feminino");
	printf("\n\nDigite a opcao: ");
	scanf("%i", &op);
	
	if(op == 1){
		printf("\nDigite a altura da pessoa: ");
		scanf("%f", &alt);
			
		pesoh(alt);
	}	
	else if(op == 2){
		printf("\nDigite a altura da pessoa: ");
		scanf("%f", &alt);
		
		pesom(alt);
	}
		
	getchar();
	

	

	
}