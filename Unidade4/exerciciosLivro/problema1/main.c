#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>


struct cadastroLivro{
	int codigo;
	char titulo[50];
	char autor[100];
	char area[50];
	int ano;
	char editora[30];
};

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	struct cadastroLivro livro[20];
	struct cadastroLivro  troca;
	int i, codigoBuscar, opcao, j;
	bool achar;
	

	opcao = 0;	
	while(opcao != 5){
		printf("ESCOLHA UMA OPÇÃO\n");
		printf("1 - CADASTRAR OS LIVROS\n2 - INFORMAÇÕES DOS LIVROS\n3 - PESQUISAR LIVROS POR CÓDIGO\n4 - ORDENAR LIVROS POR ANO\n5 - SAIR DO PROGRAMA\n");
		printf("OPÇÃO: ");
		scanf("%d", &opcao);
		fflush(stdin);
		if(opcao == 1){
			system("cls");
			printf("CADASTRO DO LIVRO\n");
			
			for(i = 1; i <= 20; i++){
				printf("Título: ");
				scanf("%s", &livro[i].titulo);
				fflush(stdin);
				printf("Autor: ");
				scanf("%s", &livro[i].autor);
				fflush(stdin);
				printf("Área: ");
				scanf("%s", &livro[i].area);
				fflush(stdin);
				printf("Editora: ");
				scanf("%s", &livro[i].editora);
				fflush(stdin);
				printf("Ano: ");
				scanf("%d", &livro[i].ano);
				fflush(stdin);
				livro[i].codigo = i;
				printf("\n");
				fflush(stdin);
			}
		} 	
			
		else{
			if(opcao == 2){
				system("cls");
				printf("\nLIVROS\n");
				for(i = 1; i <= 20; i++){
					printf("CÓDIGO: %d\n", livro[i].codigo);
					printf("TÍTULO: %s\n", livro[i].titulo);
					printf("AUTOR: %s\n", livro[i].autor);
					printf("ÁREA: %s\n", livro[i].area);
					printf("EDITORA: %s\n", livro[i].editora);
					printf("ANO: %d\n", livro[i].ano);	
			}
		}
		else{
			if(opcao == 3){
				system("cls");
				printf("\nDIGITE O CÓDIGO DO LIVRO:");
				scanf("%d", &codigoBuscar);
				achar = true;
				i = 1;
				while((codigoBuscar == livro[i].codigo) && achar == false){
					if(codigoBuscar == livro[i].codigo){
						achar = true;
					}
					else{
						i++;
					}
				}
	
				if(achar == true){
					printf("INFORMAÇÕES DO LIVRO");
					printf("CÓDIGO: %d\n", livro[i].codigo);
					printf("TÍTULO: %s\n", livro[i].titulo);
					printf("AUTOR: %s\n", livro[i].autor);
					printf("ÁREA: %s\n", livro[i].area);
					printf("EDITORA: %s\n", livro[i].editora);
					printf("ANO: %d\n", livro[i].ano);
				}
				else{
					printf("\nLIVRO NÃO ENCONTRADO");
				}
			}
			else{
				if(opcao == 4){
					system("cls");
					printf("\nLIVROS ORDERNADOS POR ANO");
					for(i = 1; i < 20; i++){
						for(j = i + 1; j <= 20; j++){
							if(livro[i].ano > livro[j].ano){
								troca = livro[i];
								livro[i] =  livro[j];
								livro[j] = troca;
							}
						}
					}
			
					printf("\nLIVROS ORDENADOS POR ANO");
					for(i = 1; i <= 20; i++){
						printf("CÓDIGO: %d\n", livro[i].codigo);
						printf("TÍTULO: %s\n", livro[i].titulo);
						printf("AUTOR: %s\n", livro[i].autor);
						printf("ÁREA: %s\n", livro[i].area);
						printf("EDITORA: %s\n", livro[i].editora);
						printf("ANO: %d\n", livro[i].ano);
					}
				}
			}

		}

		}


		
	}
	
	
	return 0;
}
