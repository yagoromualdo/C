// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>
	
main(){

    int  N, i, primo;
    int vet1[10];
    int vet2[10];

    for (i=0; i<= 10; i++) {

        vet1[i] = i;        
        printf("[");
        printf("%i", vet1[i]);
        printf("] ");

    } 

    printf("\n\n");

    
    for (i=0; i<= 10; i++) {

        vet2[i] = i;        
        printf("[");
        printf("%i", vet2[i]);
        printf("] ");

    } 

    printf("\n\n");

    
    for (i=0; i<= 10; i++) {

        vet1[i] = i + i;        
        printf("[");
        printf("%i", vet1[i]);
        printf("] ");

    } 

    printf("\n\n");

    
}