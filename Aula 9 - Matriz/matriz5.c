#include <stdio.h>
#include <stdlib.h>

void main()
{
	float boletim[5][3];
	int aluno,nota;

	for(aluno=0;aluno<5;aluno++){
		for(nota=0;nota<3;nota++){
			float valor=0;
			printf("digite as notas do aluno ");
			scanf("%f",&valor);	
			fflush(stdin);
	       	boletim[aluno][nota]=valor;  
	    } 
	    printf("\n");
	}

	for (aluno=0;aluno<5;aluno++){
		float somanota=0, media=0;
		for (nota=0;nota<3;nota++){
			printf("%.2f ",boletim[aluno][nota]);
			somanota += boletim[aluno][nota];	
		}
	    media = somanota/3;
		printf("%.2f ",media);
		printf("\n");
	}
	system("pause");
}
