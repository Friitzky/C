#include <stdio.h>
#include <stdlib.h>

//Utilizando Struct, escreva um programa que leia o id, o nome e o salário de 8 funcionários e, em seguida, pergunte ao usuário por um id. 
//O programa deve verificar se o id existe no vetor e informar se foi encontrado ou não. Se foi encontrado mostrar o nome e o salário do funcionário, 
//senão mostrar mensagem informando o erro.

void main(){
	
	int x=0, op=0, idpesq=0;
	
	struct funcionario{
		int id;
		char nome[30];
		float salario;
	};

	struct funcionario funcionarios[3];

	for(x=0; x<3; x++){
		printf("Digite o ID do funcionario %i: ", x);
		scanf("%i", &funcionarios[x].id);
		
		printf("Informe o nome do funcionario %i: ", x);
		scanf("%s", funcionarios[x].nome);
		
		printf("Informe o salario do funcionario %i: ", x);
		scanf("%f", &funcionarios[x].salario);
		printf("\n");
		
	}
	
	printf("\nDigite o ID do funcionario que deseja procurar: ");
	scanf("%i", &idpesq);
	
	for(x=0; x<3; x++){
		
		if(funcionarios[x].id == idpesq){
			printf("Funcionario encontrado\n");
			printf("Nome: %s\n", funcionarios[x].nome);
			printf("Salario: %.2f", funcionarios[x].salario);
			op = 1;
			break;
		}
			
	}
	
	if(!op){
		printf("Funcionario com ID %i nao encontrado\n", idpesq);
	}
	
	getchar();
	
	
	
	
	
	
	
	
	
	
	
	
	
		
}

