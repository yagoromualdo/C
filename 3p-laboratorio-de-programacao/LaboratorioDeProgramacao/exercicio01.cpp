// Dev: Yago Romualdo Vieira
// Matr�cula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL,"");

    int num1, n1, n2, n3;
    float area, base, altura, a, b, c, delta, x1, x2;
    printf("\n1 - Area do triangulo \n2 - Ordem crescente e decrescente \n3 - Raiz do 2 grau \n\nQual opcao voce escolhe? ");
    scanf("%i", &num1);

    if(num1 == 1) {
        printf("\n Informe a base do triangulo: ");
        scanf("%f", &base);

        printf("\n Informe a altura do triangulo: ");
        scanf("%f", &altura);

        area=(base*altura)/2;

        printf("\n Area do triangulo= %.1f\n\n", area);
    }

    if(num1 == 2) {
    
    printf("\nDigite o 1 numero: ");
    scanf("\n %d", &n1);
    printf("\nDigite o 2 numero: ");
    scanf("\n %d", &n2);
    printf("\nDigite o 3 numero: ");
    scanf("\n %d", &n3);

    printf("\n");
    
    if (n3 > n1)
        if (n1 > n2)
        printf("A ordem crescente: %d %d %d\n", n2, n1, n3);
        else if (n2 < n3)
        printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
    if (n1 > n2)
        if (n2 > n3)
        printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
        else if (n3 < n1)
        printf("A ordem crescente: %d %d %d\n", n2, n3, n1);
    if (n1 < n2)
        if (n3 < n1)
        printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
        else if (n3 < n2)
        printf("A ordem crescente: %d %d %d\n", n1, n3, n2);

    printf("\n");
    

    if (n3 < n1)
        if (n1 < n2)
        printf("A ordem decrescente: %d %d %d\n", n2, n1, n3);
        else if (n2 > n3)
        printf("A ordem decrescente: %d %d %d\n", n1, n2, n3);
    if (n1 < n2)
        if (n2 < n3)
        printf("A ordem decrescente: %d %d %d\n", n3, n2, n1);
        else if (n3 > n1)
        printf("A ordem decrescente: %d %d %d\n", n2, n3, n1);
    if (n1 > n2)
        if (n3 > n1)
        printf("A ordem decrescente: %d %d %d\n", n3, n1, n2);
        else if (n3 > n2)
        printf("A ordem decrescente: %d %d %d\n", n1, n3, n2);

    }
    

    if(num1 == 3) {
 
        printf("\nf(x) = ax² + bx + c\n\n");
        printf("a = "); scanf("%f", &a);
        printf("b = "); scanf("%f", &b);
        printf("c = "); scanf("%f", &c);
    
        printf("\nf(x) = %8.2fx² + %8.2fx + %8.2f\n", a, b, c);
    
        delta = b*b - 4 * a * c;
    
        if(delta < 0)
        {
            printf("\nDELTA = %8.2f\nNao possui raizes reais!\n\n", delta);
        }
        else
        {
            if(delta == 0)
            {
                x1 = -b / (2 * a);
                printf("\nDELTA = %8.2f \nx'   = %8.2f\n\n", delta, x1);
            }
            else
            {
                x1 = (-b - sqrt(delta)) / (2 * a);
                x2 = (-b + sqrt(delta)) / (2 * a);
                printf("\nDELTA = %8.2f \nx'   = %8.2f\nx''  = %8.2f\n\n", delta, x1, x2);
            }
        }
    
        system("pause");
    }
    
    return 0;

}
