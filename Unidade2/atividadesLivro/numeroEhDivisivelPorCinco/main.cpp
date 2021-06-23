#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int numero, resto;
	
	printf("Número: ");
	scanf("%d", &numero);
	
	if(numero % 5 == 0){
		printf("O número %d é divisível por 5.", numero);
	}
	else
	{
		printf("O número %d não é divisível por 5.", numero);
	}
	return 0;
}
