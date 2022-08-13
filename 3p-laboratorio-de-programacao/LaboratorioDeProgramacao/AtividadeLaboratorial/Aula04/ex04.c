// Dev: Yago Romualdo Vieira
// Matricula: 2012064

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int jogo(){
 int Hora1, Minuto1, Hora2, Minuto2, t;

 printf("Digite a hora e depois os minutos do inicio do jogo\n");

 printf("Hora: ");
 scanf("%d",&Hora1);
 printf("Minuto: ");
 scanf("%d",&Minuto1);


 printf("Digite a hora e depois os minutos do fim do jogo\n");

  printf("Hora: ");
 scanf("%d",&Hora2);
 printf("Minuto: ");
 scanf("%d",&Minuto2);

 if(Hora1==Hora2&&Minuto1==Minuto2)  
 t=1140;
 else{
  if(Minuto1>Minuto2){
   if(Hora1>Hora2)
   t=(((Hora2+24)-Hora1)*60)+((Minuto2+60)-Minuto1);
   else
   t=((Hora2-Hora1)*60)+((Minuto2+60)-Minuto1);
  }
  else{
   if(Hora1>Hora2)
   t=(((Hora2+24)-Hora1)*60)+(Minuto2-Minuto1);
   else
   t=((Hora2-Hora1)*60)+(Minuto2-Minuto1);
  }
 }
 return t; 
}
main(){
 int partida;
 partida=jogo();
 printf("O tempo de jogo foi %d minutos",partida);
 return 0;
}

