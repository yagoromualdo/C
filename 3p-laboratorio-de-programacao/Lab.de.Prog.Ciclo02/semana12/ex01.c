// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 15


 void preencheVetor(int vetor[]) {

   int i;
    for (i = 0; i < N; i++)
     scanf("%d", & vetor[i]);
     
 }

 float verificaMaior(int vetor[]) {

   int i;
   float ultimo;
   ultimo = vetor[0];
   for (i = 0; i < N; i++) {
     if (vetor[i] > ultimo) {
       ultimo = vetor[i];
     }
   }
   return ultimo;
}

void divide(int vetor[], float div, float vetor2[]) {
   int i;
   for (i = 0; i < N; i++) {
     vetor2[i] = vetor[i] / div;
   }
}

void imprimeDivisao(int vetor[], float vetor2[], float div) {
   int i;
   for (i = 0; i < N; i++) {
     printf("%d / %.0f = %.2f\n", vetor[i], div, vetor2[i]);
    }
}


void imprimeVetor(int vetor[], float vetor2[], float div) {
   int i;
   for (i = 0; i < N; i++) {
     printf("[%.2f] ", vetor2[i]);
    }
}
 

 int main() {

  float vetor2[N], div;
  int vetor[N];

  printf("Digite %d numeros inteiros: ", N);

  preencheVetor(vetor);

  div = verificaMaior(vetor);

  divide(vetor, div, vetor2);

  printf("\n");

  imprimeDivisao(vetor, vetor2, div);

  printf("\n");

  imprimeVetor(vetor, vetor2, div);

  return 0;
}