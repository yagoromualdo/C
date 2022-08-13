// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>


int calc(int N) {

    int soma, i;

    soma = 0;

    for (i=1; i<=N; i++) 
        soma = soma + i;
        return (soma);
    
}

main () {

    int n;

    printf ("Digite o um valor inteiro: ");
    scanf ("%i", &n);

    printf ("O resultado e: %i\n", calc(n));

}
