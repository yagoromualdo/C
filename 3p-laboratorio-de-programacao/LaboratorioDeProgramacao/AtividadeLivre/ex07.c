// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>


float media() {

    float soma, num, cont, media;

    soma = 0;

    cont = 0;

    for(num = 1; num != 0; cont++) {

        printf("\nDigite um numero positivo: ");
        scanf("%f", &num);

        soma += num;
        
    }

    media = soma / (cont - 1);

    return media;
}

main() {

    float result;

    printf("\nDigite numeros positivos para calcular a media deles: ");
    printf("\n(Obs: quando quiser parar digite 0)\n");

    result = media();

    printf("\nA media e: %.2f", result);

    printf("\n_");


}
