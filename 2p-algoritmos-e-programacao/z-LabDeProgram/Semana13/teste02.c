/* Solicite que sejam digitados os números que serão armazenados na matriz e preencha a matriz da seguinte
maneira:
-> Se o número digitado for par, deve ser armazenado em uma linha de índice par;
-> Se o número digitado for ímpar, deve ser armazenado em uma linha de índice ímpar;
-> As linhas devem ser preenchidas de cima para baixo (por exemplo, os números pares digitados devem
   ser armazenados inicialmente na primeira linha par; quando essa linha for totalmente preenchida, deve
   ser utilizada a segunda linha par e assim sucessivamente. O mesmo procedimento deve ser adotado
   para os números ímpares);
-> Quando não couberem mais números pares ou ímpares, deve ser mostrada uma mensagem ao 
   usuário;
-> Quando a matriz estiver totalmente preenchida, deve-se encerrar a leitura dos números e mostrar
   todos os elementos armazenados na matriz.*/

#include <stdio.h>
#define L 5
#define C 4



int main(){
    int linha_par=1,
        linha_impar=0,
        coluna_par=0,
        coluna_impar=0,
        matriz[L][C],
        i, num=0, j, teste=0;

    puts("Preenchando a Matriz:");
    for ( i = 0; i < (L*C); ++i){
        teste = 0;
        do{
            printf("\n Digite um numero inteiro: ");
            scanf("%d", &num);
            if(num%2==0){
                if(coluna_par==C){
                    linha_par+=2;
                    coluna_par=0;
                }
                if(linha_par > L){
                    puts("\n Sem lugar para numeros pares");
                }else{
                    matriz[linha_par][coluna_par] = num;
                    printf("\n Numero par, inserido na linha %d, coluna %d.", linha_par+1, coluna_par+1);
                    coluna_par++;
                    teste=1;
                }   
            }else{
                if(coluna_impar==C){
                    linha_impar+=2;
                    coluna_impar=0;
                }
                if(linha_impar > L){
                    puts("\n Sem lugar para numeros impares");
                }else{
                    matriz[linha_impar][coluna_impar] = num;
                    printf("\n Numero impar, inserido na linha %d, coluna %d.", linha_impar+1, coluna_impar+1);
                    coluna_impar++;
                    teste=1;
                }
            }
        }while(teste==0);
    }
    puts("\n\nImprimindo a Matriz:");
    for ( i = 0; i < L; ++i){
        for ( j = 0; j < C; ++j){
            printf("[ %d ]",matriz[i][j]);
        }
        puts("");
    }
    return 0;
}