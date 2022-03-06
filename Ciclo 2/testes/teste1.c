/**
 * Data: 2021-10-05
 * Dev: Prof. Eduardo F. Souza
 * 
 * Salario
 */
 
//Incluir biblioteca de entrada e saida  e variaveis
#include <stdio.h> 		//Lib de Entrada e Saida (Leia / Escreva)
#include <stdlib.h>		//Lib basica para variaveis
#include <locale.h> 	//Lib para acentuação 

//Inicio
int main() { 
	//var
	int HT;
	float VH, PD, SB, TD, SL;
	//a) Obtenha o valor para a variável HT (horas trabalhadas no mês);
	printf("Horas trabalhadas no mes:"); 
	scanf("%i", &HT); //Leia
	//b) Obtenha o valor para a variável VH (valor hora trabalhada):  
	printf("Valor hora trabalhada:"); 
	scanf("%f", &VH); 	// Leia %tipo, &variavel
	//c) Obtenha o valor para a variável PD (percentual de desconto);
	printf("Percentual de desconto:"); 
	scanf("%f", &PD); 	
	//d) Calcule o salário bruto => SB = HT * VH;
	SB = HT * VH;
	//e) Calcule o total de desconto => TD = (PD/100)*SB;
	TD = (PD/100)*SB;
	//f) Calcule o salário líquido => SL = SB – TD;
	SL = SB - TD;
	//g) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Liquido.
	printf("Horas trabalhadas: %i, \nSalario Bruto: %.2f, Desconto: %.2f, Salario Liquido: %.2f", HT, SB, TD, SL); // ; Ponto e vírgula 
}
//Fim
