#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

int soma(){
	float a, b, soma;
	printf("Digite o primeiro número: ");
	scanf("%f", &a);
	printf("Digite o segundo número: ");
	scanf("%f", &b);
	soma = a + b;
	printf("A soma entre os números %.2f e %.2f é: %.2f", a, b, soma);
	return 0;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	soma();
	
	return 0;
}
