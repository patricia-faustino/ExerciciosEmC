#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

int calcularQuadrado(int *x){
	*x = *x * (*x);
	
	return *x;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	// PASSAGEM DE VALOR POR REFER�NCIA MODIFICA O VALOR PASSADO NO PARAMETRO 
	int numero, resposta;
	
	printf("N�MERO QUE DESEJA  CALCULAR O QUADRADO: ");
	scanf("%d", &numero);
	
	resposta = calcularQuadrado(&numero);
	
	printf("O QUADRADO PERFEITO DE %d �: %d", numero, resposta);
	
	return 0;
}
