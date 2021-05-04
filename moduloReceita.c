#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>   
#include "Listas.h"
#include "moduloReceita.h"

#define cls system("clear||cls");


typedef struct receita Receita;

void moduloReceita(void){
  Receita* pagina;
  pagina = NULL;
  char opcao; 
  do {
    opcao = menuReceita();
    switch (opcao) {
      case '1' :  pagina = preencheReceita();
                gravaReceita(pagina);
                listas(pagina);
                break;
      case '2' :  pagina = buscaReceita();
                excluiReceita(pagina);
                break;
    }
  }  while (opcao != '0');
  free(pagina);
}


char menuReceita(void) {
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
	printf("///           = = = = = = = =   Menu Receita  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
  printf("///           0. Encerra o programa                                       ///\n");	
  printf("///           1. Cadastrar Receita                                        ///\n");
	printf("///           2. Deletar receita                                          ///\n");
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

Receita* preencheReceita(void) {
  Receita* rct;
  rct = (Receita*) malloc(sizeof(Receita));
  printf("\nInforme o código da receita em números: ");
  scanf("%ld", &rct->identificador);
  printf("///      Informe o nome da receita: ");
  scanf(" %80[^\n]", rct->receita);
  printf("\nDica:Pode ser o primeiro ingrediente principal\n");
  printf("///      Informe a 1ª palavra chave: ");
  scanf(" %50[^\n]", rct->tag1);
  printf("Dica:Pode ser o segundo ingrediente principal\n");
  printf("///      Informe a 2ª palavra chave: ");
  scanf(" %50[^\n]", rct->tag2);
  printf("Dica:Pode ser o terceiro ingrediente principal\n");
  printf("///      Informe a 3ª palavra chave: ");
  scanf(" %50[^\n]", rct->tag3);
  printf("Dica:Pode ser o tempo de preparo: Rápido, Médio ou demorado\n");
  printf("///      Informe a 4ª palavra chave: ");
  scanf(" %50[^\n]", rct->tag4);
  printf("Dica:Pode ser o nível de dificuldade:Fácil, Médio ou Difícil\n");
  printf("///      Informe a 5ª palavra chave: ");
  scanf(" %50[^\n]", rct->tag5);
  getchar();
  rct->status = 'V';
  return rct;
}

void gravaReceita(Receita* rct) {
  FILE* fp;
  fp = fopen("Receita.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    getchar();  
    exit(1);
  }
  fwrite(rct, sizeof(Receita), 1, fp);
  fclose(fp);
}

Receita* buscaReceita(void) {
  FILE* fp;
  Receita* rct;
  long int codigo;
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
	printf("///           = = = =    Por Indentificador(Números)  = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///                      Informe o identificador: "); 
  scanf("%ld", &codigo);
  getchar();
  rct = (Receita*) malloc(sizeof(Receita));
  fp = fopen("Receita.dat", "rb");
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
  printf("\nTecle ENTER para continuar\n");                 
  getchar();
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


void excluiReceita(Receita* rctLido) {
  FILE* fp;
  Receita* rctArq;
  int codigo;
  int achou = 0;
  if (rctLido == NULL) {
    printf("Ops! A receita informada não existe!\n");
    getchar();  
  }
  else {
    rctArq = (Receita*) malloc(sizeof(Receita));
    fp = fopen("Receita.dat", "r+b");
    if (fp == NULL) {
      printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
      printf("Não é possível continuar este programa...\n");
      getchar();
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
        printf("\nTecle ENTER para continuar\n");                 
        getchar();
      }
    }
    if (!achou) {
      printf("\nReceita não encontrada!\n");
      printf("\nTecle ENTER para continuar\n");                 
      getchar();
    }
    fclose(fp);
  }
}

void exibeReceita(Receita* rc) {
  char situacao[20];
  char opcao='n';
  if (rc == NULL) {
    printf("\n= = = Receita Inexistente = = =\n");
    printf("\nTecle ENTER para continuar\n");    
    getchar();
  } else if(rc->status != 'x') {
    printf("\n= = = Receita Cadastrada = = =\n");
    printf("identificador: %ld\n",rc->identificador);
    printf("Nome da receita: %s\n",rc->receita);   
    printf("deseja visualizar receita?(s/n): ");
    scanf("%c",&opcao);
    getchar();
    if(opcao=='s'){
      visualizaReceita(rc);
    }else if (rc->status == 'V') {
      strcpy(situacao, "Existente");
    }else if (rc->status == 'N') {
      strcpy(situacao, "Não existente");
    } else {
      strcpy(situacao, "Não informado");
    }
    printf("\nTecle ENTER para continuar\n");
    getchar();
  }
}

void visualizaReceita(Receita* rc){
  FILE *fp;
  char *nomeArquivo;
  int tam;
  char linha[250];

  tam = strlen(rc->receita) + 5;
  nomeArquivo = (char*) malloc(tam*sizeof(char));
  strcpy(nomeArquivo, rc->receita);
  strcat(nomeArquivo, ".txt");
  fp = fopen(nomeArquivo,"rt");
  if (fp == NULL){
    printf("Erro na abertura do arquivo\n!");
    exit(1);
  }
  printf("\nLendo dados no arquivo...\n\n");
  while(fgets(linha,250,fp)!=NULL){
    printf("%s",linha);
  }
  fclose(fp);
}
