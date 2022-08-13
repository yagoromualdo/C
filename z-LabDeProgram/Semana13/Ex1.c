// Devs: Yago Romualdo Vieira e Everton Vitor

#include <stdio.h>
#define L 5
#define C 4

int main() {

  int linha_par = 1,
    linha_impar = 0,
    coluna_par = 0,
    coluna_impar = 0,
    matriz[L][C],
    i, num = 0, j, teste = 0;

  printf("Preenchendo a matriz:");
  for (i = 0; i < (L * C); i++) {
    teste = 0;
    do {
      printf("\n Digite um numero inteiro: ");
      scanf("%d", & num);
      if (num % 2 == 0) {
        if (coluna_par == C) {
          linha_par += 2;
          coluna_par = 0;
        }
        if (linha_par > L) {
          printf("\n Sem lugar para numeros pares");
        } else {
          matriz[linha_par][coluna_par] = num;
          printf("\n Numero par, inserido na linha %d, coluna %d.", linha_par + 1, coluna_par + 1);
          coluna_par++;
          teste = 1;
        }
      } else {
        if (coluna_impar == C) {
          linha_impar += 2;
          coluna_impar = 0;
        }
        if (linha_impar > L) {
          printf("\n Sem lugar para numeros impares");
        } else {
          matriz[linha_impar][coluna_impar] = num;
          printf("\n Numero impar, inserido na linha %d, coluna %d.", linha_impar + 1, coluna_impar + 1);
          coluna_impar++;
          teste = 1;
        }
      }
    } while (teste == 0);
  }
  printf("\n\n Imprimindo a Matriz:");
  for (i = 0; i < L; i++) {
    for (j = 0; j < C; j++) {
      printf("[ %d ]", matriz[i][j]);
    }
    printf("");
  }
  return 0;
}


