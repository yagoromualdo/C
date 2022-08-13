// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define ROW 3
#define COL 10

int main(int argc, char** argv) {
    int notas[ROW][COL], 
            l, k, 
            menor,
            prova1, prova2, prova3;

    printf("Digite as notas: \n");
    for (l = 0; l < ROW; l++) {
        printf("\nNotas para a prova %d\n", l+1);
        for (k = 0; k < COL; k++) {
            printf("Nota para o aluno %d = ", k+1);
            scanf("%d", &notas[l][k]);
        }
    }
    

    printf("\n\nRELATORIO:");
    prova1 = prova2 = prova3 = 0;
    for (k = 0; k < COL; k++) {
        printf("\n\n\nPara o aluno %d as notas foram: \n\t", k+1);
        menor = 10;      
        for (l = 0; l < ROW; l++) {
            if(notas[l][k] <= menor)
                menor = notas[l][k];
            
            printf("Nota para a prova %d foi = %d\n\t", l+1, notas[l][k]);
        }

        printf("\n\tPara este aluno a MENOR nota foi: %d", menor);
   
        for (l = 0; l < ROW; l++) {
            if(menor == notas[l][k] && l == 0){
                prova1++;
                break;
            }
            else if(menor == notas[l][k] && l == 1){
                prova2++;
                break;
            }
            else if(menor == notas[l][k] && l == 2){
                prova3++;
                break;
            }
        }
    }
    
    printf("\n\n\nQuantidade de alunos que tiveram menor notas na prova 1 foi de %d\n", prova1);
    printf("Quantidade de alunos que tiveram menor notas na prova 2 foi de %d\n", prova2);
    printf("Quantidade de alunos que tiveram menor notas na prova 3 foi de %d\n", prova3);
    
    return (EXIT_SUCCESS);
}