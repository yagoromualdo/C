// Dev: Yago Romualdo Vieira
// Matrícula: 2012064

#include <stdio.h>
#include <stdlib.h>

void main(){
	float idade;
	
	printf("Escreva sua idade:");
	scanf("%f",&idade);
	
	if   (idade < 21) {
	printf("Sua idade e inferior a 21 anos");
    }else if(idade > 21) {
	printf("Sua idade e igual/superior a 21 anos");
    }
}
