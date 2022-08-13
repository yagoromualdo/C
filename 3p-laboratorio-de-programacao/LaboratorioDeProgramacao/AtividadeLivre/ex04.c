// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <conio.h>
#include <math.h>

float volume(float RAIO) {

    float calc, PI;

    PI = 3.14;

    calc = 4/3 * ( PI *pow(RAIO,3) );

    return calc;
}

int main() {

    float raio, result;

    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);

    result = volume(raio);

    printf("\nO volume dela: %.3f", result);

}