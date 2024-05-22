#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//1 – Criar uma função de Câmbio que converte real em dólar ou real em euro ou real em guarani (moeda paraguaia). 
//Procurar a cotação do dia em sites de câmbio. Fórmulas: Dolar = Real / Cotação do dia Euro = Real / Cotação do Dia Guarani = Real * Cotação do Dia


dolar(float valor){
	return( printf("\nReal convertido em dolar: $%.2f", valor * 4.87) );
}

 euro(float valor){	
	return( printf("\nReal convertido em euro: %.2f",  valor * 5.21) );
}
 guarani(float valor){
	return( printf("\nReal convertido em guarani: %.2f", valor * 1529.90) );
}

void main(){
	
	float valor=0;
	int op=0;
	
	printf("\nDigite um valor em reais: R$");
	scanf("%f", &valor);
	
	printf("\nQuer converter esse valor em\n");
	printf("[1] - dolar\n");
	printf("[2] - euro\n");
	printf("[3] - guarani\n");
	
	
	printf("\n\nDigite a opcao: ");
	scanf("%i", &op);
	
	if(op == 1){
		 dolar(valor);
	}
	else if(op == 2){
		 euro(valor);
	}
	else if(op == 3){
		 guarani(valor);
	}
	else{
		printf("Opcao invalida!! Cancelando programa");

	}
	
	getchar();
	
}