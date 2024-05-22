#include <stdio.h>
#include <stdlib.h>

//Fazer um programa que leia a conta de luz, de agua e de telefone dos últimos 3 meses de uma residência. 
//Faça os cálculos e informe o valor total e o valor médio gasto com luz, com agua e com telefone. Informe também o valor total gasto.

void main(){
	
	
	int x=0, a=0, l=0, t=0; 
	float pagua=0, pluz=0, ptel=0, meda=0, medl=0, medt=0, tot=0;


	printf("Informe a quantidade de contas de Agua nos ultrimos 3 meses: ");
	scanf("%i", &a);
	fflush(stdin);
	
	printf("Informe a quantidade de contas de Luz nos ultrimos 3 meses: ");
	scanf("%i", &l);
	fflush(stdin);		
		
	printf("Informe a quantidade de contas de Telefone nos ultrimos 3 meses: ");
	scanf("%i", &t);
	fflush(stdin);		

	float conta_agua[a], conta_luz[l], conta_tel[t];
	for(x=0;x < a; x++){
		printf("Informe o valor da conta %i de agua: R$", x);
		scanf("%f", &conta_agua[x]);	
		pagua += conta_agua[x];	
	}	
		
	for(x=0;x < l; x++){
		printf("Informe o valor da conta %i de luz: R$", x);
		scanf("%f", &conta_luz[x]);		
		pluz += conta_luz[x];	
	}
		
	for(x=0;x < t; x++){
		printf("Informe o valor da conta %i de telefone: R$", x);
		scanf("%f", &conta_tel[x]);
		ptel += conta_tel[x];	
	}
			
	
	meda = pagua / a;
	medl = pluz / l;
	medt = ptel / t;
	tot = pagua + pluz + ptel;
	
	
	printf("\n\nValor total conta de agua: R$%.2f", pagua);
	printf("\nValor media conta de agua: R%.2f", meda);
	
	printf("\n\nValor total conta de luz: R$%.2f", pluz);
	printf("\nValor media conta de luz: R%.2f", medl);
	
	printf("\n\nValor total conta de telefone: R$%.2f", ptel);
	printf("\nValor media conta de telefone: R$%.2f", medt);
	
	printf("\n\nValor total das contas: R$%.2f", tot);
	
	
	getchar();
	
	
	
}
		
	
	
		

		
	


	


