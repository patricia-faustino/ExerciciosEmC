#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

float soma(float numero1, float numero2){
	float resultado;
	resultado = numero1 + numero2;
	return resultado;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float resultado, numero1, numero2;
	
	system("cls");
	
	printf("N�MERO 1: ");
	scanf("%f", &numero1);
	
	printf("N�MERO 2: ");
	scanf("%f", &numero2);
	
	resultado = soma(numero1, numero2);
	
	printf("O resultado da soma dos n�meros �: %.2f", resultado);
	
	return 0;
}
