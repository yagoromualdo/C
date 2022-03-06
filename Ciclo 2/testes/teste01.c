// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, valor, quantos;

    x = 0;
    printf("Escreva algo");
    scanf("%d", &valor);

    for ( ; x > 0; ) {
        if (valor > x ) {
            x = valor;
            quantos = 1;
        } else if ( valor = x ) {
            quantos = quantos + 1;
        }
        printf("Escreva algo");
        scanf("%d", &valor);
}

    printf("X = %i", x, "quantos = %0.0f", quantos );

}