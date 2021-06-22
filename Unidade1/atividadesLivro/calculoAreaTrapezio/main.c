#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float area, baseMenor, baseMaior, altura;
	printf("Cálculo Área de Trapézio");
	printf("\nBase menor em m: ");
	scanf("%f", &baseMenor);
	printf("\nBase maior em m: ");
	scanf("%f", &baseMaior);
	printf("\nAltura em m: ");
	scanf("%f", &altura);
	
	area = ((baseMenor + baseMaior) * altura) / 2;
	printf("A área do trapézio é: %f", area);
	return 0;
}
