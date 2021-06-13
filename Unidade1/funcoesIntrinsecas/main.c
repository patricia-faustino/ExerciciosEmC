#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x= -14.87654321, n;
	float numero = 4, resultado;
	int numero2 = 3, numero3 = 5;
	
	resultado = sqrt(numero); // raiz quadrada
	
	resultado = ceil(numero); // arrendondar
	
	resultado = abs(numero); // valor absoluto
	
	resultado = floor(numero); // arrendonda para baixo
	
	resultado = log(numero); // logaritmo natural
	
	resultado = log10(numero); // logaritmo base 10
	
	resultado = modf(x, &n); // dividir em partes fracionarias
	
	printf( "For %f, the fraction is %f and the integer is %.f\n", x, resultado, n );
	
	resultado = pow(numero2, numero3); // potenciação
	
	printf("Digite o valor de x");
	scanf("%d", &x);
	
	return 0;
}
