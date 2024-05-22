#include <stdio.h>
#include <stdlib.h>

//6 - Fazer um programa que acesse o preço de 15 produtos de uma loja. Mostre os 15 preços lidos. 
//Faça os cálculos necessários e informe o valor a pagar. No mesmo programa mostre as opções 1 para a vista 10% de desconto 2 para a prazo 15% de acréscimo 3 para parcelado em 3 vezes. 
//Calcule e Informe o valor a pagar. Verificar se tem mais clientes na loja.

void main(){
	
	
	int x=0, op=0;
	float totp=0, vpag=0, preco[15];
	
	
	while( x >= 0){
		
		
		for(x=0;x < 15; x++){
			printf("Informe o preco do produto %i: R$", x);
			scanf("%f", &preco[x]);
			
			totp += preco[x];	
		}	
			
		
		
		for(x=0; x < 15; x++){
			printf("\nPreco do produto %i: R$%.2f", x, preco[x]);
			
		}

		system("\npause");
		system("cls");
	
	
		printf("\n Valor a pagar: R$%.2f", totp);
		printf("\n\nMETEDOS DE PAGAMENTO\n\n");
		printf("\n[1] - A vista ( 10%% de desconto)");
		printf("\n[2] - A prazo ( juros de 15%%)");
		printf("\n[3] - Parcelado em 3x");
		printf("\n\nInforme a opcao de pagamento: ");
		scanf("%i", &op);
		
		switch (op){
			case 1:
				vpag = totp - (totp * 0.10);
				printf("\n\nValor a pagar: R$%.2f", vpag);
			break;
			
			case 2:
				vpag = totp + (totp * 0.15);
				printf("\n\nValor a pagar: R$%.2f", vpag);
			break;
			
			case 3:
				vpag = totp / 3;
				printf("\n\nValor a pagar: 3 parcelas de R$%.2f", vpag);
			break;	
			
			default:
				printf("\nOpcao invalida!");
				continue;					
		}
		
		
		system("\npause");
		system("cls");
		
		int op=0;
		printf("\n\nTem mais clientes?\n");
		printf("[1] - SIM\n");
		printf("[2] - NAO");
		printf("\n\nEscolha uma opcao: ");
		scanf("%i", &op);
		
		if( op == 1){
			continue;
		}
		else{
			break;
		}
		
	}
	
	printf("\n\nValor a pagar: R$%.2f", vpag );
	
	getchar();
	
	
	
}
		
	
	
		

		
	


	


