#include <stdio.h>
#include <stdlib.h>

//Fazer um programa que leia o salário em dólar de N funcionários de uma empresa até que um salário NEGATIVO seja informado. 
//Informar o maior salário convertido em real, o menor salário convertido em real, a soma de todos os salários em dólar e o salário médio dos funcionários em dólar.

void main(){
		
		int func=0, x=1;
		float salario=0, totsal=0, medsal=0, maior=0,maiorsal=0, dolar= 4.99;
		
		
		while(x >= 1){
			
			
			printf("Informe o valor do salario %i em dolar: $", x);
			scanf("%f", &salario);
			x++;
			func++;
			
			if(salario <= 0){
				break;
			}
			
			maior =  salario;
			
			if( salario > maior){
			maior = salario;
			}
			
		
			totsal += salario;
			medsal = totsal / func;	
			maiorsal = maior * 4.99;
		}	
		
		
		
	printf("\nTotal de salarios em dolar: $%.2f", totsal);	
	printf("\nMedia de salario em dolar: $%.2f", medsal);
	printf("\nMaior salario convertido em real: R$%.2f\n", maiorsal);
	
	getchar();	
}
		
		
		
		
		
		
		
		

	
	
	

	


