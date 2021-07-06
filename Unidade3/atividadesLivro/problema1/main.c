#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contadorPar = 0, contadorImpar = 0;
	do{
		printf("Digite um número: ");
		scanf("%d", &numero);
		if(numero % 2 == 0){
			contadorPar++;
		}
		else{
			contadorImpar++;
		}
	}
	while(numero != 0);
	
	printf("\nNúmeros pares digitados: %d", contadorPar);
	printf("\nNúmeros ímpares digitados: %d", contadorImpar);
	return 0;
}
