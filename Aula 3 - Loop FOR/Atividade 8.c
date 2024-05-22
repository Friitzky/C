#include <stdio.h>
#include <stdlib.h>

void main (){
	
	int x=0, num=0, maior=0;
	

	for(x=0; x <=10; x++){
		printf("Digite um numero %i: ", x);
		scanf("%i", &num);
	 	fflush(stdin);
	 	
	 	if (num > maior){
	 		maior = num;
		 }
	
	} 

	printf("\nO maior numero e: %i", maior);
		
	getchar();
	



}