#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//scanf("<tipo_variavel>", &<variavel>);
	//printf("texto <tipo_variavel>", <variavel>);

	int idade;
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	printf("A idade  digitada foi = %d", idade);
		
	return 0;
}
