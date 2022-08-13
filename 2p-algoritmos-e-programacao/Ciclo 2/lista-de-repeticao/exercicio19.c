// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

int main(){ 
    float valor;

    printf("Digite o Valor do carro: "); 
    scanf("%f\\n",&valor); 

    printf("A vista = %.2f (20%% de desconto)\n",
    (valor)-(valor*20/100));

    printf("6x = %.2f(acrescimo de 3%%)\n",
    (valor*3/100)+(valor)); 

    printf("12x = %.2f(acrescimo de 6%%)\n",
    valor*6/100+(valor)); 

    printf("18x = %.2f(acrescimo de 9%%)\n",
    valor*9/100+(valor)); 

    printf("24x = %.2f(acrescimo de 12%%)\n",
    valor*12/100+(valor)); 

    printf("30x = %.2f(acrescimo de 15%%)\n",
    valor*15/100+(valor)); 

    printf("36x = %.2f(acrescimo de 18%%)\n",
    valor*18/100+(valor)); 

    printf("42x = %.2f(acrescimo de 21%%)\n",
    valor*21/100+(valor)); 

    printf("48x = %.2f(acrescimo de 24%%)\n",
    valor*24/100+(valor)); 

    printf("54x = %.2f(acrescimo de 27%%)\n",
    valor*27/100+(valor)); 

    printf("60x = %.2f(acrescimo de 30%%)\n",
    valor*30/100+(valor)); 
}
