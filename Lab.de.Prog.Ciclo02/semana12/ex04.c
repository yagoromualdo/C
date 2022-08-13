// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int mat[2][2];
    int i, j;
    int maiornumero;
    int linhamaiornumero;

    printf("\n Informe os numeros da matriz: \n");

    for(i=0;i<1;i++){
        for(j=0;j<4;j++){
           scanf("%i", &mat[i][j]);
           
           if(j==0)
                maiornumero = mat[i][j];
           else if(mat[i][j]>maiornumero)
                maiornumero = mat[i][j];
        }
        for(j=0;j<4;j++){
            mat[i][j]*=maiornumero;
        }
    }


    printf("\nEsse e o resultado da mutiplicacao pelo maior elemento, em forma de matriz: \n\n");

    for (i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("[%i] ",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
