/*
1- Cadastrar clientes no arquivo criado.
2- Incluir recebimentos no arquivo criado.
3- Excluir clientes e, consequentemente, todos os seus recibos, dos arquivos criados.
4- Alterar o cadastro de clientes. O usuário deve informar o código do cliente que será alterado.

Clientes: Cod_Cli, Nome, Endereco, Nome
Recebimentos: ssssssssssssssssssssssssssssssssssssssss
*/


//Bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Structs
struct Clientes{
    int cod_cli;
    char nome[50];
    char endereco[100];
}clientes;

struct Recebimentos{
    int num_doc;
    float valor_doc;
    int data_emissao;
    int data_vencimento;
    int cod_cli;
} recebimentos;


//Função para cadastro de cliente
/*void cadastro_cliente(){
    FILE *fp = fopen("dados.txt", "w+");

}*/


void main(){
    //Variáveis:
    int escolha;
    
    //Caracteres BR:
    setlocale(LC_ALL, "Portuguese");

    //Criação do arquivo    
    FILE *fp = fopen("dados.txt", "w+");
    //Mensagem de erro caso o arquivo não seja criado
    if((fp = fopen("dados.txt","w+")) == NULL){
      printf( "Erro na abertura do arquivo");
    }
    
    //Seleção do tipo de Operação (Cadastro de Cliente ou Registro de Recibo)
    do{
        printf("Escolha sua Operação:\n");
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Registrar Recibo\n");
        scanf("%i", &escolha);
        
        //Verificando se o usuário selecionou uma operação possível
        if(escolha!=1 && escolha!=2){
            printf("SELECIONE UMA OPERAÇÃO EXISTENTE.\n\n");
        }
    }while(escolha!=1 && escolha!=2);    
    
    
    //Sistema direcionando para a operação selecionada
    switch(escolha){
        
        //Chamada da Função de cadastro de Cliente
        case 1:
            printf("Digite o número do cliente:");
            scanf("%i", &clientes.cod_cli);
            fputc(clientes.cod_cli, fp);
            printf("Digite o nome do cliente:");
            scanf("%s", clientes.nome);
            fputs(clientes.nome, fp);
            printf("Digite o endereço do cliente:");
            scanf("%s", clientes.endereco);
            fputs(clientes.endereco, fp);
        break;
        
        //Chamada da Função de Registro de Recebimento
        case 2:
            printf("Digite o número do documento:");
            scanf("%i", &recebimentos.num_doc);
            fputc(recebimentos.num_doc, fp);
            printf("Digite o valor do documento:");
            scanf("%f", &recebimentos.valor_doc);
            fputs(recebimentos.valor_doc, fp);
            printf("Digite a Data de Emissão:");
            scanf("%i", &recebimentos.data_vencimento);
            fputs(recebimentos.data_emissao, fp);
            printf("Digite a Data de Emissão:");
            scanf("%i", &recebimentos.data_emissao);
            fputs(recebimentos.data_emissao, fp);
            printf("Digite o Código do Cliente:");
            scanf("%i", &recebimentos.cod_cli);
            fputs(recebimentos.cod_Cli, fp);
        break;
    }
}