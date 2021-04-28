#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Listas.h"
#include "moduloReceita.h"

#define cls system("clear||cls");


typedef struct receita Receita;

void moduloReceita(void){
    Receita* pagina;
  int opcao; 
    opcao = menuReceita();
  while (opcao != 0) {
    switch (opcao) {
      case 1 :  pagina = preencheReceita();
                gravaReceita(pagina);
                listas(pagina);
                break;
      case 2 :  pagina = buscaReceita();
                exibeReceita(pagina);              
                break;
      case 3 :  pagina = buscaReceita();
                excluiReceita(pagina);
                break;
      case 4 :  listaReceita();
                break;
      case 5 :  listaReceitaPorIngrediente();
                break;
    }
    opcao = menuReceita();
  }
  free(pagina);
}


int menuReceita(void) {
  int op;
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
	printf("///           = = = = = = = =   Menu Receita  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
  printf("///           0. Encerra o programa                                       ///\n");	
  printf("///           1. Cadastrar Receita                                        ///\n");
	printf("///           2. Pesquisar Receita                                        ///\n");
	printf("///           3. Deletar receita                                          ///\n");
  printf("///           4. Listar Receitas                                          ///\n");
	printf("///           5. listar receitas por ingrediente                          ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
  scanf("%d", &op);
  return op;
}

Receita* preencheReceita(void) {
  Receita* rct;
  rct = (Receita*) malloc(sizeof(Receita));
  printf("\nInforme o código da receita em números: ");
  scanf("%ld", &rct->identificador);
  printf("///           Informe o nome da receita: ");
  scanf(" %80[^\n]", rct->receita);
  printf("///           Informe as palavras chave: ");
  scanf(" %50[^\n]", rct->palavrachave);

 
   rct->status = 'V';
  return rct;
}

void gravaReceita(Receita* rct) {
  FILE* fp;
  fp = fopen("Receita.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(rct, sizeof(Receita), 1, fp);
  fclose(fp);
}

Receita* buscaReceita(void) {
  FILE* fp;
  Receita* rct;
  int codigo;
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
	printf("///           = = = = = = = =  Buscar Receita = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                      Informe o identificador: "); 
  scanf("%d", &codigo);
  rct = (Receita*) malloc(sizeof(Receita));
  fp = fopen("Receita.dat", "rb");
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(rct, sizeof(Receita), 1, fp);
    if ((rct->identificador == codigo) && (rct->status != 'x')) {
      fclose(fp);
      return rct;
    }
  }
  fclose(fp);
  return NULL;
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
