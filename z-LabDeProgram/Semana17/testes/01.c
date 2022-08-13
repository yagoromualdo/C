#include<stdio.h>
#include<stdlib.h>

// Registro / Tipo de Variavel
struct tProduto {
int codigo;
char descricao[10];
float valor;
char deletado; // deletado = '*' / nao deletado = ' ' - exclusao logica
};

//Prototipos
int menu();
void inclusao();
void listar();
void consultar();
void alterar();
void excluir();
void organizar();
void copiar();

//Programa Principal
int main(void) {
int op;

do{
op = menu();
switch (op) {

case 1:
printf("\n===Incluir===\n\n");
inclusao();
break;

case 2:
printf("\n===Listar===\n\n");
listar();
break;

case 3:
printf("\n===Consultar===\n\n");
consultar();
break;

case 4:
printf("\n===Alterar===\n\n");
alterar();
break;

case 5:
printf("\n===Excluir===\n\n");
excluir();
break;

case 6:
printf("\n===Organizar Arquivo===\n\n"); //funciona como uma exclusao fisica
organizar();
break;

case 7:
printf("\n===Backup===\n\n");
copiar();
break;

case 8:
printf("\n===Restore===\n\n");
copiar();
}
}while (op != 0);

// system("pause");
return 0;
}

//Menu de Opcoes
int menu (void){

int opcao;
do {
printf("\n\n=== MENU PARA CADASTRO DE PRODUTOS ===\n\n");
printf("1. Incluir\n");
printf("2. Listar\n");
printf("3. Consultar\n");
printf("4. Alterar\n");
printf("5. Excluir\n");
printf("6. Organizar Arquivo\n");
printf("7. Backup\n");
printf("8. Restore\n");
printf("0. Sair\n\n");
printf("Digite sua opcao: ");
scanf("%d", &opcao);
if ((opcao < 0) || (opcao > 8))
printf ("Opcao Digitada Incorreta!\n");
} while ((opcao < 0) || (opcao > 8));

return opcao;
}

//Funcao Inclusao
void inclusao(){
struct tProduto produtos;

FILE *arq = fopen("produtos.pro", "ab");
if (arq == NULL){
printf("Erro ao abrir arquivo");
return;
}
printf("Digite o codigo do produto: \n");
scanf("%d", &produtos.codigo);
printf("Digite a descricao do produto: \n");
fflush(stdin);
gets(produtos.descricao);
printf("Digite o valor do produto: \n");
scanf("%f", &produtos.valor);
fwrite (&produtos, sizeof(produtos), 1, arq);
fclose(arq);
}

//Funcao Listar
void listar (){

struct tProduto produtos;
FILE *arq = fopen("produtos.pro", "rb");
if (arq == NULL){
printf("Arquivo inexistente!");
return;
}

while (fread (&produtos, sizeof(produtos), 1, arq))
printf("Cod %d --- Descricao: %-8s --- Valor R$ %4.2f --- Deletado?(%c)\n",produtos.codigo, produtos.descricao, produtos.valor, produtos.deletado);

fclose(arq);
}

//Funcao Consultar
void consultar(){

FILE *arq = fopen("produtos.pro", "rb");
if (arq == NULL){
printf("Arquivo inexistente!");
return;
}

struct tProduto produtos;
int cod, achei = 0;
printf ("\nDigite o codigo que procura: \n");
scanf ("%d", &cod);

while (fread (&produtos, sizeof(produtos), 1, arq)){
if ((cod == produtos.codigo) && (produtos.deletado != '*')) {
printf("Cod %d --- Descricao: %-8s --- Valor R$ %4.2f\n",produtos.codigo, produtos.descricao, produtos.valor);
achei = 1;
}
}

if (!achei)
printf ("\nCodigo nao cadastrado!!\n");

fclose(arq);

}

//Funcao Alterar
void alterar(){
FILE *arq = fopen("produtos.pro", "r+b");
if (arq == NULL){
printf("Arquivo inexistente!");
return;
}

struct tProduto produtos;
int cod, achei = 0;
printf ("\nDigite o codigo que deseja alterar: \n");
scanf ("%d", &cod);

while (fread (&produtos, sizeof(produtos), 1, arq)){
if (cod == produtos.codigo){
printf("Cod %d --- Descricao: %-8s --- Valor R$ %4.2f\n\n",produtos.codigo, produtos.descricao, produtos.valor);
achei = 1;

fseek(arq,sizeof(struct tProduto)*-1, SEEK_CUR);
printf("\nDigite a nova descricao: \n");
fflush(stdin);
gets(produtos.descricao);
printf("\nDigite o novo preco....: \n");
scanf("%f", &produtos.valor);

fwrite(&produtos, sizeof(produtos), 1, arq);
fseek(arq, sizeof(produtos)* 0, SEEK_END);
return;
}
}

if (!achei)
printf ("\nCodigo nao cadastrado!!\n");

fclose(arq);
}

//Exclusao Logica
void excluir(){

FILE *arq = fopen("produtos.pro", "r+b");
if (arq == NULL){
printf("Arquivo inexistente!");
return;
}

struct tProduto produtos;
int cod, achei = 0;
char certeza;
printf ("\nDigite o codigo que deseja EXCLUIR: \n");
scanf ("%d", &cod);

while (fread (&produtos, sizeof(produtos), 1, arq)){
if (cod == produtos.codigo){
printf("Cod %d --- Descricao: %-8s --- Valor R$ %4.2f\n\n",produtos.codigo, produtos.descricao, produtos.valor);
achei = 1;

printf("\nTem certeza que quer excluir este produto? s/n \n");
fflush(stdin);
scanf("%c", &certeza);
if (certeza == 's'){
produtos.deletado = '*';
printf("\nProduto excluido com Sucesso! \n");
fseek(arq,sizeof(struct tProduto)*-1, SEEK_CUR);
fwrite(&produtos, sizeof(produtos), 1, arq);
fseek(arq, sizeof(produtos)* 0, SEEK_END);
return;
}
else if (certeza == 'n')
return;
}
}

if (!achei)
printf ("\nCodigo nao cadastrado!!\n");

fclose(arq);
}

//Organizar Arquivo
void organizar(){
struct tProduto produtos;
//struct tProduto produtosB; // arquivo de backup

FILE *arq = fopen("produtos.pro", "rb");
if (arq == NULL){
printf("Arquivo inexistente!");
return;
}

FILE *arqB = fopen("BackupProdutos.pro", "wb");
if (arqB == NULL){
printf("Erro na abertura!");
return;
}

while (fread (&produtos, sizeof(produtos), 1, arq)){
if (produtos.deletado != '*'){

fseek(arqB,sizeof(produtos)*-1, SEEK_CUR);
fwrite(&produtos, sizeof(produtos), 1, arqB);
fseek(arqB, sizeof(produtos)* 0, SEEK_END);

}
}

fclose(arq);
fclose(arqB);

remove("produtos.pro");
int teste = 0;
teste = rename("BackupProdutos.pro", "produtos.pro");
if (teste == 0){
printf("\nArquivo Renomeado com Sucesso! \n");
printf("\nArquivo organizado com Sucesso! %d \n", teste);

}
else printf("\nErro ao Renomear! %d \n",teste);
return;

}

//Backup e Restore
void copiar(){
}