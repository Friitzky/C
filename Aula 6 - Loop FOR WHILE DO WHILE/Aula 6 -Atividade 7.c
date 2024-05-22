#include <stdio.h>
#include <stdlib.h>

//Leia a quantidade de clientes a serem atendidos. Montar um laço que execute a quantidade de vezes lida. 
//Dentro desse laço leia quantos produtos o cliente pretende comprar. Dentro desse segundo laço ler e acumular o preço dos produtos. 
//Ao final mostrar o valor da compra e voltar a ler dados dos próximo cliente até que não tenha mais clientes.

void main(){
		
		int func=0, x=1;
		float salario=0, totsal=0, medsal=0, maior=0,maiorsal=0, dolar= 4.99;
		
		
		while(x >= 1){
			
			
			printf("Informe o valor do salario em dolar: $", x);
			scanf("%f", &salario);
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
			maiorsal = maior * dolar;
		}	
		
		
		
	printf("\nTotal de salarios em dolar: $%.2f", totsal);	
	printf("\nMedia de salario em dolar: $%.2f", medsal);
	printf("\nMaior salario convertido em real: R$%.2f\n", maiorsal);
	
	getchar();	
}
		
		
		
		
		
		
		
		

	
	
	

	


