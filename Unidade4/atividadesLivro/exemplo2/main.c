#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[10];
	int i, j, troca =0;
	for(i = 0; i < 10; i++){
		printf("Digite o elemento %d do vetor: \n", i);
		scanf("%d", &vetorA[i]);
	}
	
	printf("Vetor preenchido!\n");
	
	for(i = 0; i < 9; i++){
		for(j = i+1; j < 10; j++){
			if(vetorA[i] > vetorA[j]){
				troca = vetorA[i];
				vetorA[i] = vetorA[j];
				vetorA[j] = troca;
	
				
			}
		}
	}
	
	for(i = 0; i < 10; i++){
		printf("\nElementos ordenados");
		printf("Elemento %d : %d \n", i, vetorA[i]);
	}
	return 0;
}
