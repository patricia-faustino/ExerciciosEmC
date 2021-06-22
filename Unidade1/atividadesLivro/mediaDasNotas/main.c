#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4, media;
	printf("Digite as notas do aluno");
	printf("\nNota Unidade 1: ");
	scanf("%f", &nota1);
	
	printf("\nNota Unidade 2: ");
	scanf("%f", &nota2);
	
	printf("\nNota Unidade 3: ");
	scanf("%f", &nota3);
	
	printf("\nNota Unidade 4: ");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	printf("A média do aluno é: %f", media);
	return 0;
}
