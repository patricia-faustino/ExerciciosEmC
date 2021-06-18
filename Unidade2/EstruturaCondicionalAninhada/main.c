#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota;
	bool exame, aprovado, reprovado;
	printf("Digite a nota: \n");
	scanf("%f", &nota);
	exame = nota >= 4 && nota < 7;
	aprovado = nota >= 7;
	reprovado = nota < 4;
	
	if(exame){
		printf("Recuperação!! \n");
	} 
	else{
		if(aprovado)
			printf("Aprovado!! \n");
		
		else
			printf("Reprovado!! \n");	
	}
	return 0;
}
