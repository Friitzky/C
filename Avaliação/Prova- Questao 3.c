#include <stdio.h>
#include <stdlib.h>

//Fazer um programa que leia o peso de N peças de carne que estão em uma geladeira até que um peso ZERO seja informado. 
//Após a leitura do peso o mesmo deve ser acumulado e a peça de carne contada. 
//Quando um peso zero for lido encerre o looping, informe a quantidade de peças de carne, o peso total das peças de carne e o peso médio das peças de carne. 

void main(){
		
		int pecas=0, x=1;
		float peso=0, totp=0, medp=0;
		
		
		while(x >= 1){
			
			
			printf("Informe o peso da pesa de carne %i : ", x);
			scanf("%f", &peso);
			x++;
			
			if(peso == 0){
				break;
			}
			
			pecas++;
			totp += peso;
			medp = totp / pecas;						
		}	
		
		
	printf("\nTotal de pecas: %i\n", pecas);	
	printf("\nTotal de peso: %.2f", totp);	
	printf("\nMedia de peso: %.2f", medp);
	
	
	getchar();	
}
		
		
		
		
		
		
		
		

	
	
	

	


