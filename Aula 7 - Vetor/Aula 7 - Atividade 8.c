#include <stdio.h>
#include <stdlib.h>

//8 – Fazer um programa que acesse o valor de 4 receitas e 6 despesas de uma casa. Faça os cálculos e informe o valor total das receitas e valor total com as despesas. 
//Verifique mostrando uma mensagem se o valor da receita foi suficiente para cobrir o valor das despesas. Mostre o saldo.

void main(){
	
	int x=0, y=0;
	float receitas[4], despesas[6], totr=0, totd=0, saldo=0;
	
	for(x=0; x < 4; x++){
		printf("Informe o valor da receita %i: R$%", x);
		scanf("%f", &receitas[x]);	
		totr += receitas[x];	
	}
	
	for(y=0; y < 6; y++){
		printf("Informe o valor da despesa %i: R$%", y);
		scanf("%f", &despesas[y]);
		totd += despesas[y];		
	}
	
	printf("\n\nValor total das receitas: R$%.2f", totr);
	printf("\nValor total das despesas: R$%.2f", totd);
	
	if( totr < totd){
		saldo = totd - totr;
		printf("\n\nValor de receita insuficiente para cobrir valor das despesas!! Falta um saldo de R$%.2f", saldo);
	}
	else if ( totr >= totd){
		saldo =  totr - totd;
		printf("\n\nSaldo suficiente para pagar as despesas!! Salado restante : R$%.2f", saldo);
	}
	
	
}
		
	
	
		

		
	


	


