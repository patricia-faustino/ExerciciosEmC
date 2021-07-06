#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	for(i = 3; i < 100; i = i + 3){
		printf("%d\n", i);
	}
	return 0;
}
