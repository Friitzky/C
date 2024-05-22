#include <stdio.h>
#include <stdlib.h>

//1 – Escrever um programa para armazenar valores inteiros em uma matriz (5,5).

void main(){
	
	char matriz[50][3][3];
	char nomes[50][5];
	int x,y;
	
	for(x=0;x<3;x++){
		printf("Informe o nome do documento %i: ", x);
		scanf("%s", nomes[x]);
		fflush(stdin);
		
		for(y=0;y<3;y++){
			
			printf("Informe o numero do documento %i [%s]: ", y + 1, nomes[x]);
			scanf("%s", matriz[x][y]);
			
			
		}
		printf("\n");
	}
	
	
	for(x=0;x<3;x++){
		printf("%s ", nomes[x]);
		for(y=0;y<3;y++){
			printf("%s ", matriz[x][y]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	
	//MOSTRANDO SOMENTE O NOME DOS DOCUMENTOS
	for(x=0;x<3;x++){
		printf("%s", nomes[x]);
		printf("\n");
		
	}
	
	printf("\n");
	
	
	//SOMENTE NUMERO DOS DOCUMENTOS	
	for(x=0;x<3;x++){
		for(y=0;y<3;y++){
			printf("%s ", matriz[x][y]);
		}
		printf("\n");
	}		
		
			
}