#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[10];
	int i;
	for(i = 1; i <= 10; i++){
		printf("Digite o elemento %d do vetor: \n", i);
		scanf("%d", &vetorA[i]);
	}
	
	printf("Vetor preenchido!\n");
	
	for(i = 1; i <= 10; i++){
		printf("O elemento da posição o %d é: %d\n", i, vetorA[i]);
	}
	return 0;
}
