// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

int fatorial(int N) {

    int fat;


    for(fat = 1; N > 1; N = N - 1)
    fat = fat * N;

    return fat;
}

main () {

    int n;

    printf("Insira um valor para o qual deseja calcular seu fatorial: ");
    scanf("%d", &n);
    
    printf("\nO fatorial de %i e: %i", n, fatorial(n));

}