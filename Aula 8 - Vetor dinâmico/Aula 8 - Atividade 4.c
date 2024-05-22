#include <stdio.h>
#include <stdlib.h>

//4 – Fazer um programa que leia o preço de 10 produtos. 
//Leia a cotação do dólar e a cotação do euro uma ÚNICA vez. Mostre os preços dos produtos lidos e seus respectivos valores em dólar e euro.

void main(){
	
	int x=0;
	float dolar=0, euro=0, preco[10], p1[10], p2[10];
	
	for(x=0; x <10; x++){
		
		printf("Informe o preco do produto %i: R$", x);
		scanf("%f", &preco[x]);
		
			
	} 
	
	printf("\nInforme o preco do dolar: $");
	scanf("%f", &dolar);
	
	printf("Informe o valor do euro: €");
	scanf("%f", &euro);
	
	
	
	for(x=0; x<10;x++){
		
		p1[x] = preco[x] * dolar;
		p2[x] = preco[x] * euro;
	
		printf("\nPreco do produto %i em reais: R$%.2f", x, preco[x]);
		printf("\nPreco do produto %i em dolar: $%.2f", x, p1[x]);
		printf("\nPreco do produto %i em euro: €%.2f", x, p2[x]);		
	}
	
	getchar();
	
	
	
	
	
	
	
	
	
	
		
}

