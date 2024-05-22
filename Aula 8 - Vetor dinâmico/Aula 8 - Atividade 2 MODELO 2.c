#include <stdio.h>
#include <stdlib.h>

//2 – Fazer um programa que leia o quantidade de km a ser percorrida e a quantidade de km que UM carro faz com 1 litro de combustível. 
//Fazer os cálculos qkmpercorrida[x] / consumo[x] e informe quantos litros de combustível são necessários para percorrer a distância. Fazer isso com um vetor para 6 veículos;




// EXERCICIO FEITO NA LOGICA COM MODELOS DE CARROS DIFERENTE ( MUDA A QUANTIDADE DE KM POR LITRO POR CARRO )


void main(){
	
	int x=0;
	float qkmperc[6], consumo[6], litros[6];
	
	
	
	for(x=0; x<6; x++){
		printf("Informe a quantidade de km a ser percorrida pelo veiculo %i: ", x);
		scanf("%f", &qkmperc[x]);
		
			printf("informe a quantida de km que o carro %i faz com 1L de combustivel: ", x);
		scanf("%f", &consumo[x]);
	
		
		litros[x] = qkmperc[x] / consumo[x];	
		
	}
	
	for(x=0; x<6; x++){
		printf("\n");
		printf("Quantidade de litros necessaria para o carro %i percorrer a distancia: %.2f", x, litros[x]);
			
	}

	getchar();

		
}