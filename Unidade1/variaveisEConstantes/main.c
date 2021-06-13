#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Declarando variáveis
	//<tipo> <identificador>;
	
	float salario, custo, juros;
	int idade, ano, ano_atual;
	char nome[20];
	bool brasileiro;
	
	
	//Declarando constantes
	//#define <identificador> <valor>
	
	#define PI 3.1416
	#define MSG_ERRO "ERRO!"
	
	//Atribuição
	//<variavel> = <valor>;
	
	salario = 1150.0;
	idade = 25;
	ano = 2021;
	ano_atual = ano + idade;
	custo = 66.89;
	juros = custo * 1.05;
	
	return 0;
}
