#include <stdio.h>
#include <stdlib.h>

void main (){
	
	int op=0, alunos=0, a1cc=0, a2cc=0, a3cc=0, a4cc=0, rpe=0;
	
	for (alunos=0;alunos<=15;alunos++) {
		printf("Informe a serie %i: ", alunos);
		scanf("%i", &op);
		fflush(stdin);
		
		switch (op){
		
		case 1:
		  	a1cc++;
		break;
		
		case 2:
			a2cc++;
		break;
		
		case 3:
			a3cc++;
		break;
		
		case 4:
			a4cc++;
		break;
		
		default:
			rpe++;
		break;
	}
}
	
	printf("\n\nTotal alunos 1CC: %i", a1cc);
	printf("\nTotal alunos 2CC: %i", a2cc);
	printf("\nTotal alunos 3CC: %i", a3cc);
	printf("\nTotal alunos 4CC: %i", a4cc);
	printf("\nTotal respostas erradas: %i", rpe);
	
	
	getchar();
	

}