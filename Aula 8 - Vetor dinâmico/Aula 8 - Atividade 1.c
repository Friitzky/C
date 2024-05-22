#include <stdio.h>
#include <stdlib.h>

//1 – Fazer um programa que leia a idade, o peso e a altura de 10 funcionários. 
//Fazer os cálculos necessários, mostre o dados lidos, o total e a média de altura, peso e idade dos funcionários.

void main(){
	
		int x=0, idade[2], toti=0;
		float altura[2], peso[2], totp=0,  medp=0, medi=0, tota=0, meda=0; 
		
		for (x=0; x<2; x++){
			printf("Informe a idade do funcionario %i:", x);
			scanf("%i", &idade[x]);
		
			
			printf("Informe a altura do funcionario %i:", x);
			scanf("%f", &altura[x]);
			
			
			printf("Informe o peso do funcionario %i:", x);
			scanf("%f", &peso[x]);
			
			toti += idade[x];
			medi = toti / 2;
			
			tota += altura[x]; //NÃO COLOCAR MÉDIA DENTRO DO LOOP
			meda = tota / 2;
			
			totp += peso[x];
			medp = totp / 2;
					
		}
		
		system("cls");
			
		for(x=0; x<2; x++){
			
			printf("\n Idade funcionario %i: %i", x, idade[x]);
			printf("\n Altura funcionario %i: %.2f", x, altura[x]);
			printf("\n Peso funcionario %i: %.2f", x, peso[x]);
			
		}
		
		system("cls");
		
		printf("\n\nTotal de idade: %i", toti);	
		printf("\nMedia de idade: %.2f", medi);
		
		printf("\n\nTotal de peso: %.2f", totp);	
		printf("\nMedia de peso: %.2f", medp);
				
		printf("\n\nTotal de altura: %.2f", tota);	
		printf("\nMedia de altura: %.2f", meda);
		
		
		getchar();		
}