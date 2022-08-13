// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, i, r, cont;

 cont = 0;
 
 printf("Digite um numero: ");
 scanf("%d", &n1);

 printf("Digite um numero: ");
 scanf("%d", &n2);

 printf("Digite um numero: ");
 scanf("%d", &n3);

 printf("Digite um numero: ");
 scanf("%d", &n4);

 printf("Digite um numero: ");
 scanf("%d", &n5);

 printf("Digite um numero: ");
 scanf("%d", &n6);

 printf("Digite um numero: ");
 scanf("%d", &n7);

 printf("Digite um numero: ");
 scanf("%d", &n8);

 printf("Digite um numero: ");

 scanf("%d", &n9);

 printf("Digite um numero: ");
 scanf("%d", &n10);

 printf("\n");

 for (r = 0, i = 2; i <= n1 / 2; i++) {
    if (n1 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("\n %d  ", n1);
 }
 
 for (r= 0,i = 2; i <= n2 / 2; i++) {
    if (n2 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n2);
 }

 for (r= 0,i = 2; i <= n3 / 2; i++) {
    if (n3 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n3);
 }

 for (r= 0,i = 2; i <= n4 / 2; i++) {
    if (n4 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n4);
 }

 for (r= 0,i = 2; i <= n5 / 2; i++) {
    if (n5 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n5);
 }

 for (r= 0,i = 2; i <= n6 / 2; i++) {
    if (n6 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n6);
 }

 for (r= 0,i = 2; i <= n7 / 2; i++) {
    if (n7 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n7);
 }

 for (r= 0,i = 2; i <= n8 / 2; i++) {
    if (n8 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n8);
 }

 for (r= 0,i = 2; i <= n9 / 2; i++) {
    if (n9 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n9);
 }

 for (r= 0,i = 2; i <= n10 / 2; i++) {
    if (n10 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
     cont++;
    printf("%d  ", n10);
 }

 printf("\n\nQuantidade de numeros primos: %i", cont);
 
}