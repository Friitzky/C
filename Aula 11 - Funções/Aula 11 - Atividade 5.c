#include <stdio.h>
#include <stdlib.h>

//5 – Faça um procedimento que receba a idade de um nadador por parâmetro e retorna, também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:

int categoria(int num){
	if(num >= 5 && num <= 7){
		return( printf("\nNadador categoria: Infantil A") );
	}
	else if(num >= 8 && num <=10 ){
		return( printf("\nNadador categoria: Infantil B" ) );
	}
	else if(num >= 11 && num <=13 ){
		return( printf("\nNadador categoria: Juvenil A") );
	}
	else if(num >=14 && num <=17){
		return( printf("\nNadador categoria: Juvenil B") );
	}
	else if(num >= 18){
		return ( printf("\nNadador categoria: Adulto") );
	}
	else{
		return( printf("\nIdade invalida! Encerrando programa") );
	}
}



void main(){
	
	int num;
	
	printf("\nInforme a idade do nadador: ");
	scanf("%i", &num);
	
	categoria(num);
	
	getchar();
}