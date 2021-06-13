#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bool aritmetico = true;
	int numerico1 = 3, numerico2 = 4;
	
	aritmetico = (numerico1 >= 0) && (numerico1 <= 3);
	aritmetico = (numerico1 >= 3) || (numerico2 >= 0);
	aritmetico = !((numerico1 >= 3) || (numerico2 >= 0));
	
	return 0;
}
