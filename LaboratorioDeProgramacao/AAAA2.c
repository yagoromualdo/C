#include <stdio.h>

main() {

    float sa, cont, soma, juros;

   printf("Digite o valor inicial: ");
   scanf("%f", &sa);
   while (sa != 0) {

       cont++;
       soma += sa;
       if(sa >= 100&&sa<=2000)
       juros = sa + (sa*25)/100;
       else if(sa >= 2000)
       juros = sa-(sa*15)/100;

       printf("O novo slaario fjgkofd é: %.2f.", juros);
    
   }
   
 
}