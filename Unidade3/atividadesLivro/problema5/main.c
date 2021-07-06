#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int numero, i, contador;
	bool ehPrimo;
	

	printf("CONFIRA SE O NÚMERO É PRIMO\n\n");
	printf("NÚMERO: ");
	scanf("%d", &numero);
	
	if(numero > 1){
		contador = 0;
		for(i = 1; i <= numero; i++){
			if(numero % i == 0){
				contador++;
			}
		}
		

	if(contador == 2){
		printf("O número %d é um número primo", numero);
	}
	else{
		printf("O número %d não é um número primo", numero);
	}
	}
	


	return 0;
}
