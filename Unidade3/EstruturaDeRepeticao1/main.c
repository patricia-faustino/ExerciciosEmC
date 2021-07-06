#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//for(<inicialização>;<condição>;<incremento/decremento>)
	//{
	// <estrutura de repetição>
	//}
	float i;
	for(i= 0.0; i< 0.5;  i+= 0.1){
		printf("Aguarde....\n");
		printf("%f....\n",i );
	}
	return 0;
}
