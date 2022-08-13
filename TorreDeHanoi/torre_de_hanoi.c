#include <stdio.h>

//Everton Vitor R B Fernandes-2110975, Yago Romualdo-2012064, Davi Gustavo-2110472, Gabriel Cintra, João Vitor-2110972, Carolina Pereira-2020832, 
//João pedro Barbaresco-2110290, Leonan Dias

int count = 0; 
int quantidade;

void TorreHanoi(int origem, int destino, int auxiliar, int quantidade){
  if( quantidade == 1 ){
    printf("Move de %d para %d\n", origem, destino);
    count+=1;
  }else{
    TorreHanoi(origem, auxiliar, destino, quantidade-1);
    TorreHanoi(origem, destino, auxiliar, 1);
    TorreHanoi(auxiliar, destino, origem, quantidade-1);
  }
}

int main() {
  printf("Digite a quantidade de discos: ");
  scanf("%i", &quantidade);
  TorreHanoi(0, 2, 1, quantidade);
  printf("\nQuantidade de Discos: %d\n", quantidade);
  printf("Nº minimo de movimentos: %d\n\n", count);
  return 0;
}