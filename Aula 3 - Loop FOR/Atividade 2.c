#include <stdio.h>
#include <stdlib.h>

void main (){
	
	float vp=0, valor=0, total=0;
	int x=0, op=0;
	

	for(x=1; x<=8; x++){
		printf("\nInforme valor do produto %i: R$", x);
		scanf("%f", &valor);
		fflush(stdin);
		
		total = total + valor;
		
	}
	
	printf("\n\n[1] - parcelado em 5x - juros de 15%%");
	printf("\n[2] - parcelado em 12x - juros de 22%%");
	printf("\n\nEscolha forma de pagamento: ");
	scanf("%i", &op);
	fflush(stdin);
	
	switch (op){
	
		case 1:
			vp = ( total + (total * 0.15) ) / 5;
		break;
		
		case 2: 
			vp = ( total + (total * 0.22) )/ 12;
		break;
		
		default:
			vp = vp;
			printf("\n\nValor da parcela: R$%.2f", vp);
			printf("Forma de pagamento incorreta!");
			system("pause");
			return(0);
			
	}

	printf("\n\nValor a pagar: R$%.2f", vp);
	
	getchar();
	



}