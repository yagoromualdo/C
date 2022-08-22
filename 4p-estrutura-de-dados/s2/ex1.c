#include <stdio.h>

#include <stdlib.h>


int main() {

   float *notas;
   float somaNotas = 0;
   int alunos, i;


   printf("\n Digite a quantidade de alunos: ");
   scanf("%i", &alunos);

   notas = (float *) malloc(sizeof(float) * alunos+1);
   
   printf("\n");

   for(i=0; i < alunos; i++) {
       printf(" Nota do aluno %i: ", i+1);
       scanf("%f", &notas[i]);
   }

   for(i=0; i < alunos; i++){
       somaNotas = somaNotas + notas[i];
   }

   free(notas);

   printf("\n A media das notas foi: %.2f\n", somaNotas / alunos);


   return 0;

}
