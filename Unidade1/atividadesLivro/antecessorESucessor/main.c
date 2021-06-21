#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int antecessor = 0, sucessor = 0, numero = 0;
	printf("Digite um número: ");
	scanf("%d", &numero);
	antecessor = numero - 1;
	sucessor = numero + 1;
	printf("\n#####################");
	printf("\nAntecessor: %d", antecessor);
	printf("\nSucessor: %d", sucessor);
	return 0;
}
