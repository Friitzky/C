#include <stdio.h>
#include <stdlib.h>

//2 – Fazer um programa que leia e acumule o valor de 5 produtos e informe o valor a pagar.
//Mostre um menu com 3 formas de pagamento – 1 para pagamento parcelado em 24 vezes – 2 para pagamento parcelado em 36 vezes – 3 para pagamento parcelado em 48 vezes.
//Criar uma função para cada forma de pagamento, cada função deve fazer o cálculo e informar o valor das parcelas na própria função.

float opum (float tot){
	
	return( printf("\nValor das parcelas: R$%.2f", tot / 24) );
	
}

float opdois (float tot){
	
	return( printf("\nValor das parcelas: R$%.2f", tot / 36) );
	
}

float optres ( float tot){
	
	return( printf("\nValor das parcelas: R$%.2f", tot / 48) );
	
}





void main(){
	
	int x=0, op=0;
	float preco[5], tot=0, totp=0;
	
	for (x=0; x<5; x++){
		
		printf("Informe o valor do produto %i: R$", x);
		scanf("%f", &preco[x]);
		fflush(stdin);		
		
		tot += preco[x];
		
	}
	
	printf("\nTotal: R$%.2f", tot);
	
	printf("\n\n[1] - Parcelado em 24 vezes");
	printf("\n[2] - Parcelado em 36 vezes");
	printf("\n[3] - Parcelado em 48 vezes");
	
	printf("\n\nESCOLHA A FORMA DE PAGAMENTO: ");
	scanf("%i", &op);
	
	if(op == 1){
	
		opum(tot);	
	}
	else if(op == 2){
		
		opdois(tot);
		
	}
	else if(op == 3){
		
		optres(tot);
	}
		
	
}
		
	
	
		

		
	


	


