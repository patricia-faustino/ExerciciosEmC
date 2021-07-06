#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int numero, fatorial, i;
	
	printf("CÁLCULO FATORIAL: ");
	printf("\nNÚMERO: ");
	scanf("%d", &numero);
	
	fatorial = 1;
	for(i = 1; i <= numero; i++){
		fatorial *= i;
	}
	printf("FATORIAL: %d", fatorial);
	return 0;
}
