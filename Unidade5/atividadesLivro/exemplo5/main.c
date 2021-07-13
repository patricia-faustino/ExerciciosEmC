#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

//Informar ao compilador que após executar o main ele deve executar outra função
int calcularQuadrado(int x);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, resposta;
	
	printf("NÚMERO: ");
	scanf("%d", &numero);
	
	resposta = calcularQuadrado(numero);
	
	printf("O QUADRADO DO NÚMERO %d É:  %d", numero, resposta);
	
	return 0;
}

int calcularQuadrado(int x){
	x = x * x;
	return x;
}

