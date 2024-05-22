#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//2 – Criar uma função para conversão entre as temperaturas Celsius e Fahrenheit.
//Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Fahrenheit, depois a conversão escolhida é realizada.
//As fórmulas de conversão são: C= (F - 32) / 1.8 F= (C * 1.8) + 32


celtofah(temp){
	float  F= (temp * 1.8) + 32;
	return( printf("\nTemperatura convertida para Fahrenheit: %.2f", F) );
}

fahtocel(temp){
	float C= (temp - 32) / 1.8;
	return( printf("\nTemperatura convertida para Celsius: %.2f", C) );
}


void main(){
	
	float temp=0;
	int op=0;
	
	printf("\nEscolha se a temperatura digitada estara em Celsius ou Fahrenheit\n\n");
	printf("[1] - Celsius\n");
	printf("[2] - Fahrenheit");
	printf("\n\nDigite a opcao: ");
	scanf("%i", &op);
	
	if(op == 1){
		printf("\nDigite a temperatura em Celsius: ");
		scanf("%f", &temp);
			
		celtofah(temp);
	}	
	else if(op == 2){
		printf("\nDigite a temperatura em Fahrenheit: ");
		scanf("%f", &temp);
		
		fahtocel(temp);
	}
		
	getchar();
	

	

	
}