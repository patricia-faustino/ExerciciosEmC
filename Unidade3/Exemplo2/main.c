#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*while(<condicao>){
		<bloco de comandos>
	}*/
	int i = 0;
	
	while(i<100){
		printf("\nAguarde....");
		printf(" \n%d", i);
		i++;
	}
	return 0;
}
