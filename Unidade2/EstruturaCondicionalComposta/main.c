#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	*if(<express�o l�gica>)
	{
		<bloco de comandos1>
	} else
	{
		<bloco de comandos2>
	}
	*/
	
	int numero, resto;
	printf("Digite um n�mero inteiro: \n");
	scanf("%d", &numero);
	
	resto = numero % 2;
	if(resto == 0)
	{
		printf("O n�mero � par");
	} else
	{
		printf("O n�mero � �mpar.");
	}
	return 0;
}
