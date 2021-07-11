#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int matrizA[2][10];
	int i, j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 10; j++){
			printf("Insira o elemento da linha %d, coluna %d: \n", i, j);
			scanf("%d", &matrizA[i][j]);
		}
	}

	for(i = 0; i < 2; i++){
		for(j = 0; j < 10; j++){
			printf("O elemento da linha %d, coluna %d é: %d\n", i, j, matrizA[i][j]);
		}
	}
}
