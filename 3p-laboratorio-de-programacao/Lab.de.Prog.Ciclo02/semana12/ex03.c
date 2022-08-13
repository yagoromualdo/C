// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 10

int main() {
  int i, j, a[TAM], b[TAM], c[TAM * 2], ax;

  for (i = 0; i < TAM; i++) {
    printf("\nDigite um valor para A[%i]: ", i);
    scanf("%i", & a[i]);
    printf("\nDigite um valor para B[%i]: ", i);
    scanf("%i", & b[i]);
  }

  for (i = 0; i < TAM * 2; ++i) {
    if (i < TAM) {
      c[i] = a[i];
    } else {
      c[i] = b[i - 10];
    }
  }

  for (i = 0; i < TAM * 2; i++) {

    for (j = 0; j < (TAM * 2) - 1; ++j) {
      if (c[j] <= c[j + 1]) {
        ax = c[j + 1];
        c[j + 1] = c[j];
        c[j] = ax;
      }
    }
  }

  printf("\n\nVetore Ordenados\n");
  for (i = 0; i < TAM * 2; ++i) {
    printf("C[%i] = %i\n", i, c[i]);
  }

  return 0;
}