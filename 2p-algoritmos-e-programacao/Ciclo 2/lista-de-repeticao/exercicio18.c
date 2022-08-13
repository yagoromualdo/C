// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
 
int main() {
 int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, i, r, somaprimo, somapar,
 v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, 
 v6 = 0, v7 = 0, v8 = 0, v9 = 0, v10 = 0,
 p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, p6 = 0, p7 = 0, p8 = 0, p9 = 0, p10 = 0;
 
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
    v1 = n1;
 }
 
 for (r= 0,i = 2; i <= n2 / 2; i++) {
    if (n2 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v2 = n2;
 }

 for (r= 0,i = 2; i <= n3 / 2; i++) {
    if (n3 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v3 = n3;
 }

 for (r= 0,i = 2; i <= n4 / 2; i++) {
    if (n4 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v4 = n4;
 }

 for (r= 0,i = 2; i <= n5 / 2; i++) {
    if (n5 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v5 = n5;
 }

 for (r= 0,i = 2; i <= n6 / 2; i++) {
    if (n6 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v6 = n6;
 }

 for (r= 0,i = 2; i <= n7 / 2; i++) {
    if (n7 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v7 = n7;
 }

 for (r= 0,i = 2; i <= n8 / 2; i++) {
    if (n8 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v8 = n8;
 }

 for (r= 0,i = 2; i <= n9 / 2; i++) {
    if (n9 % i == 0) {
       r++;
       break;
    }
 }
 if (r == 0) {
    v9 = n9;
 }

 for (r= 0,i = 2; i <= n10 / 2; i++) {
    if (n10 % i == 0) {
       r++;
       break;
    }
 }

 if (r == 0) { 
    v10 = n10;
 }

 somaprimo = v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9 + v10;

 printf("\nA soma dos numeros primos e igual a: %i", somaprimo);

 if(n1%2 == 0) {
     p1 = n1;
 }
 if(n2%2 == 0) {
     p2 = n2;
 }
 if(n3%2 == 0) {
     p3 = n3;
 }
 if(n4%2 == 0) {
     p4 = n4;
 }
 if(n5%2 == 0) {
     p5 = n5;
 }
 if(n6%2 == 0) {
     p6 = n6;
 }
 if(n7%2 == 0) {
     p7 = n7;
 }
 if(n8%2 == 0) {
     p8 = n8;
 }
 if(n9%2 == 0) {
     p9 = n9;
 }
 if(n10%2 == 0) {
     p10 = n10;
 }

 somapar = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10;

 printf("\n\nA soma dos numeros pares e igual a: %i", somapar);

}