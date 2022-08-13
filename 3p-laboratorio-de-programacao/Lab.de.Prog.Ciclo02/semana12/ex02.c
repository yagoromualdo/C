// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	int y, i = 0, j = 0, num[10], par[10], impar[10];

	printf("Digite 10 numeros inteiros:\n\n");

	for (y = 0; y < 9; y++){

		scanf("%d", &num [y]);

		if (num [y] % 2 == 0) 
        par [i++] = num [y];
		else      
        impar [j++] = num [y];
	}

	printf("\n\nNumeros pares digitados: ");

	for(y = 0; y < i; y++)

		printf(" %d ", par [y]);

	printf("\n\nNumeros impares digitados: ");
    
	for(i = 0; i < j ; i++)

		printf(" %d ", impar [i]);

	printf("\n\n");


}

