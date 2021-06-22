#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float deposito, taxaJuros, valorTotal, valorRendimento;
	printf("Valor do deposito: ");
	scanf("%f", &deposito);
	printf("\nValor da taxa de juros, em porcentagem: ");
	scanf("%f", &taxaJuros);
	
	valorRendimento = deposito * (taxaJuros / 100);
	valorTotal = deposito + valorRendimento;
	
	printf("\nO valor do rendimento é R$%.2f e o valor total é R$%.2f.", valorRendimento, valorTotal);
	
	return 0;
}
