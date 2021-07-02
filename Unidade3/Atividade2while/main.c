#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int soma = 0 ;
	int valor = 0;
	
	while(soma <= 100){
		printf("Digite um número inteiro: ");
		scanf("%d", &valor);
		soma += valor;
	}
	printf("\nO valor da soma é maior que 100.");

	return 0;
}
