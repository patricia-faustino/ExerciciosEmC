#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

int calcQuadrado(int x){
	x = x * x;
	
	return x;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, resultado;
	
	printf("Digite o número que deseja calcular o quadrado: ");
	scanf("%d", &numero);
	
	resultado = calcQuadrado(numero);
	
	printf("O quadrado perfeito do número %d é : %d", numero, resultado);
	
	
	return 0;
}
