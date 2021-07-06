#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int codigo, aprovado, reprovado, unidades, i;
	float notas[6];
	float notasSoma, media;
	
	aprovado = 0;
	reprovado = 0;
	do{
		printf("\nMÉDIA DO ALUNO: ");
		printf("\nDADOS ALUNO");
		printf("\nCÓDIGO: ");
		scanf("%d", &codigo);
		
		if(codigo != 0){
			unidades = 0;
			notasSoma = 0;
			media = 0;
			
			printf("UNIDADES DA MATÉRIA: ");
			scanf("%d", &unidades);	
			
			for(i = 0; i < unidades; i++){
				printf("Nota %d:", i + 1);
				scanf("%f", &notas[i]);
				notasSoma += notas[i];
			}	

			media = notasSoma / unidades;
			
			if(media >= 6){
				printf("\nAluno aprovado\n");
				aprovado++;
			}
			else{
				printf("\nAluno reprovado\n");
				reprovado++;
			}
		}

		else{
			printf("BUSCA ENCERRADA. DIGITE ENTER.");
		}
		

	}
	while(codigo != 0);
	
	printf("ALUNOS APROVADOS %d", aprovado);
	printf("ALUNOS REPROVADOS %d", reprovado);
	return 0;
}
