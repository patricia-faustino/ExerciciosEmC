#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salarioLiquido, reajusteDoSalario;
	#define REAJUSTESALARIAL 0.075
	#define ABONOSALARIAL 150
	#define SALARIOCOMABONO 1750
	
	printf("    EMPRESA:AURORA FINANCIAMENTOS     ");
	printf("\nPROPRIET�RIA: Patricia Faustino de Brito de Jesus");
	printf("\nRA: 20124091-5");
	printf("\nCURSO: AN�LISE E DESENVOLVIMENTO DE SISTEMAS");
	printf("\n");
		printf("\n");
	printf("\nC�LCULO REAJUSTE SALARIAL");
	printf("\nSALARIO ATUAL: ");
	scanf("%f", &salarioLiquido);

	if(salarioLiquido <= SALARIOCOMABONO){
		reajusteDoSalario = (salarioLiquido * (1 + REAJUSTESALARIAL)) + ABONOSALARIAL;
		printf("\nABONO SALARIAL: R$%d, 00", ABONOSALARIAL);
		printf("\nSAL�RIO COM AJUSTE: R$%.2f", reajusteDoSalario);
	} else{
		reajusteDoSalario = salarioLiquido * (1 + REAJUSTESALARIAL);
		printf("\nSALARIO COM AJUSTE: R$%.2f", reajusteDoSalario);
	}
	return 0;
}
