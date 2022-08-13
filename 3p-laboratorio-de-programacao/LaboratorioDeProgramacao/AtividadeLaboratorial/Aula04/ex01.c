// Dev: Yago Romualdo Vieira
// Matricula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int somarIntervaloDivisiveis(int a,int b,int c){
int maior, menor,i,soma=0;
if(b<c){
    menor = b;
    maior = c;
}else{
    menor = c;
    maior = b;
    }
   for(i=menor;i<=maior;i++){
        if(i%a==0){
       soma = soma + i;
        }
   }
   return soma;
}


    main()
{
   int a, b, c;
   printf(" Digite o Primeiro Valor: ");
   scanf("%d",&a);
   printf(" Digite o Segundo Numero: ");
   scanf("%d",&b);
   printf(" Digite o Terceiro Numero: ");
   scanf("%d",&c);
   int total = somarIntervaloDivisiveis(a,b,c);
   printf("Total da soma do Intervalo %d ",total);
}
