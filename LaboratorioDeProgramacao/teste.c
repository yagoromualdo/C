#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main (void) {
    int i;

    for (i = 0; i < 6; i++)
    if(fork()>=0) 
        continue;

        else
        break;
    
}