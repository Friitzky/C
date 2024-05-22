#include <stdio.h>
#include <stdlib.h>

void main (){
	
	int x=0, dentro_intervalo=0, fora_intervalo=0, num=0, totc=0;
	

	for(x=0; x <=10; x++){
		printf("Digite um numero %i: ", x);
		scanf("%i", &num);
	 	fflush(stdin);
	 	
	if(num >= 10 && num <= 20){
		dentro_intervalo = dentro_intervalo + 1;
	} 
	else{
		fora_intervalo = fora_intervalo + 1;
	}
		
		totc = dentro_intervalo + fora_intervalo;
	 	
	}
		
		printf("\nQuantidade de numeros entre 10 e 20: %i", dentro_intervalo);
		printf("\nQuantidade de numeros fora do intervalo: %i", fora_intervalo);
		printf("\nTotal dos contadores: %i", totc);
		
	getchar();
	
}