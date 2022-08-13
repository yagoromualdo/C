// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>


int calc(int N) {

    int div = 0;
    
    for(int i = N; i>0; i--)
    {
        if(N%i==0) div++;
    }
    return div;

    
}

main () {

    int n;

    printf("%i", calc(n));

}
