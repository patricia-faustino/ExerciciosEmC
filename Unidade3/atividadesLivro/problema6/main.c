#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salario = 0.0, maiorSalario = 0.0, somaSalario = 0.0, mediaSalario =  0.0;
	float mediaFilhos = 0.0, somaFilhos = 0.0;
	int numeroFilhos, contador;
	printf("INFORMAÇÕES HABITACIONAIS\n");
	
	do{
		
		printf("\nDigite -1 para SAIR\n");
		printf("NÚMEROS DE FILHOS: ");
		scanf("%d", &numeroFilhos);
		
		if(numeroFilhos > 0){
			printf("SÁLARIO: ");
			scanf("%f", &salario);
		
			if(salario > maiorSalario){
				maiorSalario = salario;
			}
			contador++;
			somaSalario += salario;
			somaFilhos += numeroFilhos;
		}

	}
	while(numeroFilhos != -1);
	mediaSalario = somaSalario / contador;
	mediaFilhos = somaFilhos / contador;
	
	printf("\nMAIOR SALÁRIO: %.2f", maiorSalario);
	printf("\n%.2f", mediaSalario);
	printf("\n%.2f", mediaFilhos);
	return 0;
}
