// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

    void primo(int N){
    	int  i, primo;

    	for (int N = 92; N <= 1478; N++) {
	
	        primo = 1;
	 
	        for (i = 2; i <= N / 2; ++i) {
	            if (N % i == 0) {
	                primo = 0;
	                break;
	            }
	        }

	        if (primo == 1){
	        	printf("%d \n", N);
			}
		}
	}
	
main(){
    int N; 

	primo(N);
}