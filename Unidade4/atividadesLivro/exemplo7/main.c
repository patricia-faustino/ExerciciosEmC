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
	
	printf("Digite o código do produto: ");
	scanf("%d", &ficha.codigo);
	printf("Digite a descrição produto: ");
	scanf("%s", &ficha.descricao);
	printf("Digite o preço produto: ");
	scanf("%f", &ficha.preco);
	printf("Digite o saldo do produto: ");
	scanf("%d", &ficha.saldo);
	
	printf("/n");
	printf("Informações do Produto\n");
	printf("Código: %d\n", ficha.codigo);
	printf("Descrição: %s\n", ficha.descricao);
	printf("Preço: %.2f\n", ficha.preco);
	printf("Saldo: %d\n", ficha.saldo);
	
	return 0;
}
