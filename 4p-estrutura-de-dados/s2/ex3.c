// Dev: Yago Romualdo Vieira - 2012064

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    char *ptr;

    printf("\n Tamanho da string: ");
    scanf("%d", &n);

    ptr = (char*)malloc(n * sizeof(char));

    printf("\n Digite a string: ");
    scanf(" %[^\n]", ptr);
    i = 0;

    printf("\n String sem vogais: ");
    while(ptr[i] != '\0') {
        if(ptr[i]!= 'a' && ptr[i]!= 'A' && ptr[i]!= 'e' && ptr[i]!= 'E' && ptr[i]!= 'i' && ptr[i]!= 'I' && ptr[i]!= 'o' && ptr[i]!= 'O' && ptr[i]!= 'u' && ptr[i]!= 'U')
            printf("%c  ", ptr[i]);
            i++;
    }

    free(ptr);

    printf("\n\n_");
    return 0;
}