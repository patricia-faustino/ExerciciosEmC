#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int numero, i, contador;
	bool ehPrimo;
	

	printf("CONFIRA SE O N�MERO � PRIMO\n\n");
	printf("N�MERO: ");
	scanf("%d", &numero);
	
	if(numero > 1){
		contador = 0;
		for(i = 1; i <= numero; i++){
			if(numero % i == 0){
				contador++;
			}
		}
		

	if(contador == 2){
		printf("O n�mero %d � um n�mero primo", numero);
	}
	else{
		printf("O n�mero %d n�o � um n�mero primo", numero);
	}
	}
	


	return 0;
}
