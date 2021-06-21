#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	float altura;
	char nome[30];
	
	printf("Digite seus dados:\n");
	printf("Nome: ");
	scanf("%s", &nome);
	printf("\nIdade: ");
	scanf("%d", &idade);
	printf("\nAltura: ");
	scanf("%f", &altura);
	
	printf("Seus dados: \n");
	printf("Nome: %s \n", nome);
	printf("Idade: %d \n", idade);	
	printf("Altura: %f", altura);
	return 0;
}



