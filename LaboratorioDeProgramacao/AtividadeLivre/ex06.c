// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int pesoIdeal(float N, float ALT) {

    float x;

        if ( N == 1) {
            x =  72.7 *ALT - 58;
            printf("\nO seu peso ideal e: %f", x);
        } else if ( N == 2) {
            x = 62.1 *ALT - 44.77;
            printf("\nO seu peso ideal e: %f", x);
        }
    
}

main () {

    float n, alt;

    printf ("\nHomem, digite 1");
    printf ("\nMulher, digite 2");
    printf ("\nQual o seu sexo? ");
    scanf ("%f", &n);

    printf ("\nQual a sua altura? ");
    scanf ("%f", &alt);

    printf ("\n", pesoIdeal(n, alt));

}
