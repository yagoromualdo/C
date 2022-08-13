// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>


int calc(int N) {

        if ( N > 0) {
            printf("O numero e positivo.");
        } else {
            printf ("O numero e negativo.");
        }
    
}

main () {

    int n;

    printf ("Digite o um valor inteiro: ");
    scanf ("%i", &n);

    printf ("\n", calc(n));

}
