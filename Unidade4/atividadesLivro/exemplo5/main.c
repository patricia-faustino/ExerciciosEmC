#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[80], sobrenome[80];
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite o seu sobrenome: ");
	gets(sobrenome);
 	strcat(nome, sobrenome);
 	printf("Ap�s concatenar as strings temos que nome �: %s\n", nome);
 	
 	if (strstr(sobrenome, nome) == 0)
 	{
 		printf("Agora o sobrenome est� contido na vari�vel nome.\n");
 	}	
 	strlwr(nome);
 	printf("O nome em min�sculo �: %s\n", nome);
 	strupr(nome);
 	printf("O nome em mai�sculo �: %s\n", nome);
	return 0;
}
