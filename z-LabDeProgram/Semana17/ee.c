// Dev: Yago Romualdo Vieira
// Matricula: 2012064

#include<stdio.h>
#include<stdlib.h>

struct aluno {
    int numero;
    char nome[10];
    char curso[10];
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
printf("\n\n=== MENU PARA CADASTRO DE ALUNOS ===\n\n");
printf("1. Incluir\n");
printf("2. Listar\n");
printf("3. Alterar\n");
printf("0. Sair\n\n");
printf("Digite sua opcao: ");
scanf("%d", &opcao);
if ((opcao < 0) || (opcao > 5))
printf ("Opcao Digitada Incorreta!\n");
} while ((opcao < 0) || (opcao > 5));

return opcao;
}

void incluir(){
struct aluno alunos;

FILE *arq = fopen("ALUNOS.DAT", "ab");
if (arq == NULL){
printf("Erro ao abrir arquivo");
return;
}
printf("Digite o numero do aluno: \n");
scanf("%d", &alunos.numero);
printf("Digite o nome do aluno: \n");
fflush(stdin);
gets(alunos.nome);
printf("Digite o curso do aluno: \n");
scanf("%d", &alunos.curso);
printf("Digite a primeira nota do aluno: \n");
scanf("%d", &alunos.nota1);
printf("Digite a segunda nota do aluno: \n");
scanf("%d", &alunos.nota2);
fwrite (&alunos, sizeof(alunos), 1, arq);
fclose(arq);
}

void listar (){

struct aluno alunos;
FILE *arq = fopen("ALUNOS.DAT", "rb");
if (arq == NULL){
printf("Aluno inexistente!");
return;
}

while (fread (&alunos, sizeof(alunos), 1, arq))
printf("Numero: %d --- Nome: %d --- Curso: %d --- Nota 1:%d --- Nota 2:%d\n",alunos.numero, alunos.nome, alunos.curso, alunos.nota1, alunos.nota2);

fclose(arq);
}

void alterar(){
FILE *arq = fopen("ALUNOS.DAT", "r+b");
if (arq == NULL){
printf("Aluno inexistente!");
return;
}

struct aluno alunos;
int cod, achei = 0;
printf ("\nDigite o codigo que deseja alterar: \n");
scanf ("%d", &cod);

while (fread (&alunos, sizeof(alunos), 1, arq)){
if (cod == alunos.numero){
printf("Numero: %d --- Nome: %d --- Curso: %d --- Nota 1:%d --- Nota 2:%d\n",alunos.numero, alunos.nome, alunos.curso, alunos.nota1, alunos.nota2);
achei = 1;

fseek(arq,sizeof(struct aluno)*-1, SEEK_CUR);
printf("\nDigite o novo nome: \n");
fflush(stdin);
gets(alunos.nome);
printf("\nDigite o novo curso: \n");
fflush(stdin);
gets(alunos.curso);
printf("\nDigite a nova nota 1: \n");
gets(alunos.nota1);
printf("\nDigite a nova nota 2: \n");
gets(alunos.nota2);

fwrite(&alunos, sizeof(alunos), 1, arq);
fseek(arq, sizeof(alunos)* 0, SEEK_END);
return;
}
}

if (!achei)
printf ("\n Numero nao cadastrado!!\n");

fclose(arq);
}


