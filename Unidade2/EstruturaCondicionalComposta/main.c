#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	*if(<expressão lógica>)
	{
		<bloco de comandos1>
	} else
	{
		<bloco de comandos2>
	}
	*/
	
	int numero, resto;
	printf("Digite um número inteiro: \n");
	scanf("%d", &numero);
	
	resto = numero % 2;
	if(resto == 0)
	{
		printf("O número é par");
	} else
	{
		printf("O número é ímpar.");
	}
	return 0;
}
