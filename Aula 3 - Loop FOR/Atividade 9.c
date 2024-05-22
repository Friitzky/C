#include <stdio.h>
#include <stdlib.h>

void main (){
	
	int x=0, num=0, menor=99999;
	

	for(x=0; x <=10; x++){
		printf("Digite um numero %i: ", x);
		scanf("%i", &num);
	 	fflush(stdin);
	 	
	 	
	 	if (num < menor){
	 		menor = num;
		 }
	
	} 

	printf("\nO menor numero e: %i", menor);
		
	getchar();
	



}