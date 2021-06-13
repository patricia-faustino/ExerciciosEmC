#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bool aritmetico;
	int numero1 = 2, numero2 = 3;
	
	aritmetico = numero1 < numero2;
	
	aritmetico = numero1 >= numero2;
	
	aritmetico = numero1 != 10;
	
	aritmetico = (numero1 - numero2) == 0;
	
	return 0;
}
