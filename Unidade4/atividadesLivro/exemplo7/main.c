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
	
	struct produto ficha;
	
	printf("Digite o c�digo do produto: ");
	scanf("%d", &ficha.codigo);
	printf("Digite a descri��o produto: ");
	scanf("%s", &ficha.descricao);
	printf("Digite o pre�o produto: ");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do produto: ");
	scanf("%d", &ficha.saldo);
	
	printf("/n");
	printf("Informa��es do Produto\n");
	printf("C�digo: %d\n", ficha.codigo);
	printf("Descri��o: %s\n", ficha.descricao);
	printf("Pre�o: %.2f\n", ficha.preco);
	printf("Saldo: %d\n", ficha.saldo);
	
	return 0;
}
