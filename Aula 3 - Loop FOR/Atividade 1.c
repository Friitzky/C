#include <stdio.h>
#include <stdlib.h>

void main (){
	
	float vp=0, valor=0, total=0;
	int x=0;
	

	for(x=1; x<=5; x++){
		printf("\nInforme valor da conta %i: R$", x);
		scanf("%f", &valor);
		fflush(stdin);
		
		total = total + valor;
		
	}

	vp = total * 0.15;

	printf("\n\nValor a pagar: R$%.2f", vp);
	
	getchar();
	



}