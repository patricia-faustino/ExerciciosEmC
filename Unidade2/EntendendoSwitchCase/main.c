#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int diaDaSemana;
	printf("Digite o n�mero referente ao dia da semana. \n");
	printf(" 1 - Domingo\n 2 - Segunda-feira\n 3 - Ter�a-feira\n 4 - Quarta-feira\n 5 - Quinta-feira\n 6 - Sexta - feira\n 7 - S�bado\n");
	scanf("%d", &diaDaSemana);
	switch(diaDaSemana)
	{
		case 1 : printf(" 1 - Domingo");
			break;
		case 2 : printf(" 2 - Segunda-feira");
			break;
		case 3 : printf(" 3 - Ter�a-feira");
			break;
		case 4 : printf(" 4 - Quarta-feira");
			break;
		case 5 : printf(" 5 - Quinta-feira");
			break;
		case 6 : printf(" 6 - Sexta");
			break;
		case 7 : printf(" 7 - S�bado");
			break;
		default: printf("O n�mero n�o corresponde ao dia da semana.");
			break;
		
		
	}
	return 0;
}
