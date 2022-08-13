#include <stdio.h>
#include<locale.h>

main() {

    int a, b, r;
    a = 18;
    b = 12;

    while (a > 0 && b > 0) {
        if (a > b)
        a = a- b;
        else
        b = b - a;
    }

    r = a + b;

    printf("A %i", r);

}