#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float area, baseMenor, baseMaior, altura;
	printf("C�lculo �rea de Trap�zio");
	printf("\nBase menor em m: ");
	scanf("%f", &baseMenor);
	printf("\nBase maior em m: ");
	scanf("%f", &baseMaior);
	printf("\nAltura em m: ");
	scanf("%f", &altura);
	
	area = ((baseMenor + baseMaior) * altura) / 2;
	printf("A �rea do trap�zio �: %f", area);
	return 0;
}
