#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//a condição é executada ao menos uma vez, por a condição ficar no final
	/* 
	do{
	<bloco de código>
	while(<condicao>);
	}
	*/
	int i = 0;
	do{
		printf("Aguarde...\n");
		i++;
	}while(i < 100);


}
