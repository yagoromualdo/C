// Yago Romualdo Vieira
//  Gabriel Cintra Brandão

// 09/03/2022

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int caT = 0, coT = 0;

int coroa () {
	coT += 1;
}

int cara () {
	caT += 1;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
    int num;
    
    srand (time(NULL));
    
    for (int i = 1; i <= 100; i++) {
 		num = rand() % 2; 
 		if (num == 0) {
			cara ();
		}
		else if (num == 1) {
			coroa ();
		}
    }
    printf("\n Total de vezes que deu cara: %i\n ", caT);
    
    printf("\n  Total de vezes que deu coroa: %i",  coT);
}

