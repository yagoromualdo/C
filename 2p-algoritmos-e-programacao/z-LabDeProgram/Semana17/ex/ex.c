// Dev: Yago Romualdo Vieira
// Matricula: 2012064

#include<stdio.h>
#include<stdlib.h>

struct aluno {
    int numero;
    char nome;
    char curso;
    int nota1;
    int nota2;
};

int menu();
void incluir();
void listar();
void alterar();

int main(void) {
int op;

do {
op = menu();
switch (op) {

case 1:
printf("\nIncluir\n\n");
incluir();
break;

case 2:
printf("\nListar\n\n");
listar();
break;

case 3:
printf("\nAlterar\n\n");
alterar();
break;
}
}while (op != 0);


return 0;
}

int menu (void){

int opcao;
do {
printf("\n\n=== MENU PARA CADASTRO DE alunos ===\n\n");
printf("1. Incluir\n");
printf("2. Listar\n");
printf("3. Alterar\n");
printf("0. Sair\n\n");
printf("Digite sua opcao: ");
scanf("%d", &opcao);
if ((opcao < 0) || (opcao > 3))
printf ("Opcao Digitada Incorreta!\n");
} while ((opcao < 0) || (opcao > 3));

return opcao;
}

void incluir(){
struct aluno alunos;

FILE *arq = fopen("ALUNOS.DAT", "ab");
if (arq == NULL){
printf("Erro ao abrir arquivo");
return;
}
printf("Numero \n");
scanf("%d", &alunos.numero);
printf("Digite a descricao do produto: \n");
fflush(stdin);
gets(alunos.nome);
printf("Numero \n");
scanf("%d", &alunos.curso);
printf("Numero \n");
scanf("%d", &alunos.nota1);
printf("Numero \n");
scanf("%d", &alunos.nota2);
fwrite (&alunos, sizeof(alunos), 1, arq);
fclose(arq);
}

//Funcao Listar
void listar (){

struct aluno alunos;
FILE *arq = fopen("ALUNOS.DAT", "rb");
if (arq == NULL){
printf("Arquivo inexistente!");
return;
}

while (fread (&alunos, sizeof(alunos), 1, arq))
printf("Cod %d --- Descricao: %-8s --- Valor R$ %4.2f --- Deletado?(%c)\n",alunos.numero, alunos.nome, alunos.curso, alunos.nota1);

fclose(arq);
}

//Funcao Alterar
void alterar(){
FILE *arq = fopen("ALUNOS.DAT", "r+b");
if (arq == NULL){
printf("Arquivo inexistente!");
return;
}

struct aluno alunos;
int cod, achei = 0;
printf ("\nDigite o codigo que deseja alterar: \n");
scanf ("%d", &cod);

while (fread (&alunos, sizeof(alunos), 1, arq)){
if (cod == alunos.numero){
printf("Cod %d --- Descricao: %-8s --- Valor R$ %4.2f\n\n",alunos.numero, alunos.nome, alunos.curso);
achei = 1;

fseek(arq,sizeof(struct aluno)*-1, SEEK_CUR);
printf("\nDigite a nova descricao: \n");
fflush(stdin);
gets(alunos.nome);
printf("\nDigite o novo preco....: \n");
scanf("%f", &alunos.curso);

fwrite(&alunos, sizeof(alunos), 1, arq);
fseek(arq, sizeof(alunos)* 0, SEEK_END);
return;
}
}

if (!achei)
printf ("\nCodigo nao cadastrado!!\n");

fclose(arq);
}

