#include <stdio.h>
#include <stdlib.h>

void main (){
	
	float vp=0, valor=0, total=0;
	int x=0;
	

	for(x=1; x<=8; x++){
		printf("\nInforme valor %i: R$", x);
		scanf("%f", &valor);
		fflush(stdin);
		
		total = total + valor;
		
	}


	printf("\n\nValor total: R$%.2f", total);
	
	getchar();
	



}