#include <stdio.h>
#include<locale.h>

main() {

    setlocale(LC_ALL,"Portuguese");

    int a;
    int *Ptra;
    a = 7;
    Ptra = &a;

    printf("O endere de %p. \
    \nO valor de Ptra é %p.", &a, Ptra);

    printf("\n\nO valor de a e: %i. \ 
    \nO valor de *Ptra e %i.", a, *Ptra);

    printf("\n\nMostrando que  * e & sao complementos \
    \n um do outro\n &*Ptr = %p \
    \n*&Ptra = %p. \n", &*Ptra, *&Ptra);
}