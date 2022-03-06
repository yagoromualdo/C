// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, i=1, c, i50=0, media10e20=0, pessoas=0;
    float altura, peso, p40=0, somaAlt=0;

    for(c = 1; c<=25; c++) {
        printf("\n\tPessoa %d\n\nIdade: ", i);
        scanf("%d", &idade);
        printf("Altura: ");
        scanf("%f", &altura);
        printf("Peso: ");
        scanf("%f", &peso);
        if( idade > 50 )
            i50++;
        if( idade >= 10 && idade <= 20 ){
            somaAlt += altura;
            media10e20++;
        }
        if( peso < 40 )
            p40++;

        pessoas++;
        i++;

    }
    printf("\n\t\tRESULTADO:\n\nQuantidade de pessoa com idade superior a 50 anos: %d", i50);
    if( media10e20 == 0 )
        media10e20= 1;
    printf("\nMedia das alturas de pessoas entre 10 e 20 anos: %0.0f", somaAlt/media10e20);
    printf("\nPorcentagem de pessoas com peso inferior a 40kg: %.2f%%\n\n", p40*100/pessoas);
}