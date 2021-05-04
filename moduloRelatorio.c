
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacao.h"
#include "Listas.h"
#include "moduloReceita.h"

#define cls system("clear||cls");

typedef struct receita Receita;


char menuRelatorio(void) { 
  char op;
  cls;
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///            Developed by  @cintiacq and @Sana-El - Fev, 2021           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Relatório de Receitas                                    ///\n");
  printf("///           2. Listar receitas por tags                                 ///\n");
  printf("///           3. Pesquisar Receita por identificador                      ///\n");
  printf("///           0. sair                                                     ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
  scanf("%c", &op);
	getchar();
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}

void listaReceita(void) {
FILE* fp;
  Receita* rct;
  cls;
  printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///            Developed by  @CintiaCQ and @Sana-El - Fev, 2021           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Listar Receita = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  rct = (Receita*) malloc(sizeof(Receita));
  fp = fopen("Receita.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(rct, sizeof(Receita), 1, fp)) {  
      exibeReceita(rct);
  }
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
  fclose(fp);
  printf("Tecle ENTER para continuar!");
  getchar();
}

void pesquisarReceitaporTag() {
  FILE* fp;
  char chave[51];
  Receita* rct;
  cls;
  printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///            Developed by  @CintiaCQ and @Sana-El - Fev, 2021           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Listar Receita = = = = = = = =             ///\n");
  printf("///           = = = = = = = =     Por Tags      = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                                                                       ///\n");
  printf("///  Dica: Tag pode ser um ingrediente, tempo de preparo ou dificuldade!  ///\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = =  Busca Receita  = = = = = = = =             /// \n"); 
  printf("///                       Informe uma tag: "); 
  scanf(" %50[^\n]", chave);
  rct = (Receita*) malloc(sizeof(Receita));
  fp = fopen("Receita.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(rct, sizeof(Receita), 1, fp)) {
    if (strcmp(rct->tag1, chave) == 0 && (rct->status != 'x')) {
      exibeReceita(rct);
    } else if (strcmp(rct->tag2, chave) == 0 && (rct->status != 'x')) {
      exibeReceita(rct);
    }else if (strcmp(rct->tag3, chave) == 0 && (rct->status != 'x')) {
      exibeReceita(rct);
    }else if (strcmp(rct->tag4, chave) == 0 && (rct->status != 'x')) {
      exibeReceita(rct);
    }else if (strcmp(rct->tag5, chave) == 0 && (rct->status != 'x')) {
      exibeReceita(rct);
    } else {
      printf("\nNão encontrado\n");
    }
  }
  fclose(fp);
  getchar();
  printf("///                                                                       ///\n");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
