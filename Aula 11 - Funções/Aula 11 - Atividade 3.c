#include <stdio.h>
#include <stdlib.h>

//3 – Crie uma função que receba um número de 1 a 7 e retorne o dia da semana por extenso

int diadasemana(int num){
	if(num == 1){
		return( printf("\nSegunda-feira") );
	}
	else if(num ==2){
		return( printf("\nTerca-feira") );
	}
	else if(num ==3){
		return( printf("\nQuarta-feira") );
	}
	else if(num ==4){
		return( printf("\nQuinta-feira") );
	}
	else if(num ==5){
		return( printf("\nSexta-feira") );
	}
	else if(num ==6){
		return( printf("\nSabado") );
		
	}
	else if(num ==7){
		return( printf("\nDomingo") );
	}
	else{
		return( printf("\nOpcao invalida! Encerrando programa") );
	}
}



void main(){
	
	int num;
	
	printf("\nDigite um numero de 1 a 7: ");
	scanf("%i", &num);
	
	diadasemana(num);
	
	getchar();
}