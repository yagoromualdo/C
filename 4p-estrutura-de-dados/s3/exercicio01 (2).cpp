/*
Alunos:
	Joao Pedro Barbaresco - 2110290
	Yago Romualdo - 2012064
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Struct Pessoas
typedef struct Pessoa{
	char nome[50];
	int data_nascimento;
	char cpf[14];
}Pessoa;

//Funcao para preencher os dados das pessoas
Pessoa preencher_pessoa(int quant){
	
	Pessoa p;
	
	printf("Nome:");
	scanf("%s", p.nome);
	printf("Data de Nacimento:");
	scanf("%d", &p.data_nascimento);
	printf("CPF:");
	scanf("%s", p.cpf);	
	
	return p;
}
//Funcao para plotar os dados registrados
Pessoa mostrar_pessoa(Pessoa pessoa){
	printf("Nome: %s\n", pessoa.nome);
	printf("Data de Nascimento: %i\n", pessoa.data_nascimento);
	printf("CPF: %s\n", pessoa.cpf);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Declarando variaveis de apoio
	int quant, i;
	//Declarando Ponteiro do Struct
	Pessoa *var_pessoa;
	//Alocando a variavel de pessoa dinamicamente
	var_pessoa = (Pessoa*)malloc(quant*sizeof(Pessoa));
	
	
	//Solicitando a quantidade de pessoas ao usuario
	printf("Quantas pessoas deseja registrar?");
	scanf("%i", &quant);
	
	//Estrutura de repeticao para chamar a fucao de input dos dados na quantidade de vezes solicitada pelo usuario
	for(i=0; i<quant; i++){
		printf("-------------Pessoa %i-------------\n", i+1);
		var_pessoa[i] = preencher_pessoa(quant);
	}
	
	printf("\n\n");
	
	//Estrutura de repeticao para chamar a funcao que plota os dados na quantidade de dados armazenados
	for(i=0; i<quant; i++){
		printf("-------------Pessoa %i-------------\n", i+1);
		var_pessoa[i] = mostrar_pessoa(var_pessoa[i]);
	}
	
	//Limpando a variavel pessoa
	free(var_pessoa);
}

