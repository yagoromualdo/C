// Dev: Yago Romualdo Vieira
// Matricula: 2012064

#include <stdio.h> 		
#include <stdlib.h>		
#include <locale.h> 
#include <time.h>

int main(){
	
	int vetor1[15], vetor2[10];
	
		for (int i = 0; i<15; i++) {
			printf("Matricula dos alunos de Logica de Programacao: ");
			scanf("%d", &vetor1[i]);
		
	}

     printf("\n");
	
		for(int x=0; x < 10; x++){
			printf("Matricula dos alunos de Linguagem de Programacao: ");
			scanf("%d", &vetor2[x]);		
	}

    printf("\n");

    printf("\n As matriculas iguais sao: ");

		for(int i=0; i<15; i++){
    		for(int x=0; x<10; x++){
        		if(vetor1[i] == vetor2[x]) 
					printf("%d  ", vetor1[i]);
    	}
	}

    printf("\n_");
}