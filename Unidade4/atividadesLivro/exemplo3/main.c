#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[10];
	int i, buscar, achar;
	for(i = 0; i < 10; i++){
		printf("Digite o elemento %d do vetor: \n", i);
		scanf("%d", &vetorA[i]);
	}
	
	printf("Informe o elemento que deseja buscar: ");
	scanf("%d", &buscar);
	
	i = 0;
	achar = 0;
	while((achar == 0) && (i < 10)){
		if(vetorA[i] == buscar){
			achar = 1;
		}
		else{
			i++;
		}
	}
	if(achar == 1){
		printf("O elemento %d foi encontrado na posição %d.", buscar, i);
	}
	else{
		printf("O elemento não foi encontrado.");
	}
	return 0;
}
