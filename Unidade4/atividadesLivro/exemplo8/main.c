#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct produto 
{
	int codigo;
	char descricao[100];
	float preco;
	int saldo;
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	struct produto fichas[10];
	int i;
	
	for(i = 0; i < 10; i++){
		fichas[i].codigo = i + 1;
		printf("Digite a descri��o produto: ");
		scanf("%s", &fichas[i].descricao);
		printf("Digite o pre�o produto: ");
		scanf("%f", &fichas[i].preco);
		printf("Digite o saldo do produto: ");
		scanf("%d", &fichas[i].saldo);
		printf("\n");
	}
	
	for(i = 0; i < 10; i++){
		printf("\n");
		printf("Informa��es do Produto\n");
		printf("C�digo: %d\n", fichas[i].codigo);
		printf("Descri��o: %s\n", fichas[i].descricao);
		printf("Pre�o: %.2f\n", fichas[i].preco);
		printf("Saldo: %d\n", fichas[i].saldo);
	}
	
	
	return 0;
}
