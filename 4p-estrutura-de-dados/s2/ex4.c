#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[40];
    int ano_nasc;
};
typedef struct aluno aluno;

int main() {

    int n, i;
    aluno *ptr;
    printf("\n Numero de registros que voce deseja fazer: ");
    scanf("%d", &n);

    ptr = (aluno*)malloc(n * sizeof(aluno));


    for(i = 0 ; i < n; i++) {
        printf("\n Numero de matricula: ");
        scanf("%d", &ptr[i].matricula);
        printf("\n Nome: ");
        scanf(" %[^\n]", ptr[i].nome);
        printf("\n Ano de nascimento: ");
        scanf("%d", &ptr[i].ano_nasc);
        printf("\n\n");
    }

    for(i = 0 ; i < n; i++) {
        printf("\n Numero de matricula %d \n", ptr[i].matricula);
        printf("\n Nome: %s \n" , ptr[i].nome);
        printf("\n Ano de nascimento: %d\n\n" , ptr[i].ano_nasc);
    }

    free(ptr);

    printf("\n\n_");
    return 0;
}