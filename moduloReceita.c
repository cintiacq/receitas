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
    opcao = menuPrincipal();
  while (opcao != 0) {
    switch (opcao) {
      case 1 :  pagina = preencheReceita();
                gravaReceita(pagina);
                listas();
                break;
      case 2 :  pagina = buscaReceita();
                exibeReceita(pagina);
                exibelistas();
                
                break;
      case 3 :  pagina = buscaReceita();
                excluiReceita(pagina);
                break;
      case 4 :  listaReceita();
                exibelistas();
                break;
      case 5 :  listaReceitaPorIngrediente();
                break;
    }
    opcao = menuPrincipal();
  }
  free(pagina);
}


int menuPrincipal(void) {
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
    if (rct->status != 'x') {
      exibeReceita(rct);
    }
  }
  fclose(fp);
}

void listaReceitaPorIngrediente(void) {
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
  printf("///           = = = = = = = = Por ingredientes  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                                                                       ///\n");
  printf("///           = = = = = = = =  Busca Receita  = = = = = = = =             /// \n"); 
  printf("///                       Informe um ingrediente: "); 
  scanf(" %50[^\n]", chave);
  rct = (Receita*) malloc(sizeof(Receita));
  fp = fopen("Receita.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(fread(rct, sizeof(Receita), 1, fp)) {
    if (strcmp(rct->palavrachave, chave) == 0 && (rct->status != 'x')) {
      exibeReceita(rct);
    }
  }
  fclose(fp);
}


void excluiReceita(Receita* rctLido) {
  FILE* fp;
  Receita* rctArq;
  int codigo;
  int achou = 0;
  if (rctLido == NULL) {
    printf("Ops! A receita informada não existe!\n");
  }
  else {
    rctArq = (Receita*) malloc(sizeof(Receita));
    fp = fopen("Receita.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      exit(1);
    }
    while(!feof(fp)) {
      fread(rctArq, sizeof(Receita), 1, fp);
      if ((rctArq->identificador == rctLido->identificador) && (rctArq->status != 'x')) {
        achou = 1;
        rctArq->status = 'x';
        fseek(fp, -1*sizeof(Receita), SEEK_CUR);
        fwrite(rctArq, sizeof(Receita), 1, fp);
        printf("\nReceita excluída com sucesso!!!\n");
      }
    }
    if (!achou) {
      printf("\nReceita não encontrada!\n");
    }
    fclose(fp);
  }
}
