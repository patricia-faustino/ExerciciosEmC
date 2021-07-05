#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	do{
		printf("Digite um número: ");
		scanf("%d", &numero);
	}
	while(numero != 0);
	return 0;
}
