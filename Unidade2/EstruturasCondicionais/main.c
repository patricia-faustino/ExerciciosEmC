#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	*if(<expressão lógica>)
	{
		<bloco de comandos>
	}
	*/
	int numero;
	printf("Digite um número: \n");
	scanf("%d", &numero);
	if(numero > 10 && numero < 20)
	{
		printf("Valor entre 10 e 20.\n");	
	}
	return 0;
}
