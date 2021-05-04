
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moduloReceita.h"

void gravaIngredientes(char*, char**, int);
void gravaProcedimento(char*, char**, int);

static char* input(char*);
char* duplica(char*);
int quantidade;
int quantidadePro;
char **ingredientes;
char **procedimento;

char listas(Receita* pagina){
  printf("Listagem de ingredientes\n");
  printf("Quantos ingredientes deseja cadastrar? ");
  scanf("%d", &quantidade);
  ingredientes = (char**) malloc(quantidade * sizeof(char*));
  for (int i = 0; i < quantidade; i++) {
  ingredientes[i] = input("Informe o ingredinte: "); //
  }
  gravaIngredientes(pagina->receita, ingredientes, quantidade);
  
  printf("Listagem de procedimentos\n");
  printf("Quantos passos deseja cadastrar? ");
  scanf("%d", &quantidadePro);
    procedimento = (char**) malloc(quantidadePro * sizeof(char*));
  for (int i = 0; i < quantidadePro; i++) {
    procedimento[i] = input("Informe o Passo a passo: "); //
  }
  gravaProcedimento(pagina->receita, procedimento, quantidadePro);
  return 0;
}

void gravaIngredientes(char* nomeReceita, char** lista, int quant) {
  FILE *fp;
  char *nomeArquivo;
  int tam;

  tam = strlen(nomeReceita) + 5;
  nomeArquivo = (char*) malloc(tam*sizeof(char));
  strcpy(nomeArquivo, nomeReceita);
  strcat(nomeArquivo, ".txt");

  fp = fopen(nomeArquivo, "wt");

  fprintf(fp, "%s\n\n", nomeReceita);
  fprintf(fp, "Ingredientes\n");
  fprintf(fp, "============\n");

  for (int i = 0; i < quant; i++) {
    fprintf(fp, "* %s\n", lista[i]);
  }
  fclose(fp);
}


void gravaProcedimento(char* nomeReceita, char** lista, int quant) {
  FILE *fp;
  char *nomeArquivo;
  int tam;

  tam = strlen(nomeReceita) + 5;
  nomeArquivo = (char*) malloc(tam*sizeof(char));
  strcpy(nomeArquivo, nomeReceita);
  strcat(nomeArquivo, ".txt");
  fp = fopen(nomeArquivo, "at");
  printf("Receita cadastrada com sucesso !!!\n");
  printf("Tecle ENTER para continuar\n");
  getchar();
  fprintf(fp, "\nProcedimentos\n");
  fprintf(fp, "=============\n");
  getchar();
  for (int i = 0; i < quant; i++) {
  fprintf(fp, "-> %s\n", lista[i]); 
  }
  fclose(fp);
}


char exibelistas(){
  printf("\n= = = Ingredientes = = =\n");
  for (int i = 0; i < quantidade; i++) {
  printf("%d. %s", i+1, ingredientes[i]);
  }
  printf("\n= = = Passo a passo = = =\n");
  for (int i = 0; i < quantidadePro; i++) {
  printf("%d. %s\n", i+1, procedimento[i]);
  }
  return 0;
};


static char* input(char *msg) { // pegar mensagens recebidas 
  char linha[256];              
  printf("%s", msg); // orientar o usuário sobre oque ele vai digitar
  scanf(" %255[^\n]", linha); // pegar oque o user digitou e colocar no vetor linha
  return duplica(linha); // chama a função duplica, passando como parametro a informação que digitou em linha
}


char* duplica(char* s) { // recebe oque o user digitol 
  int n;
  n = strlen(s) + 1; //conta(strlen) e armaneza(n) quantos caracteres o user digitou +1,
  char* d = (char*) malloc(n * sizeof(char)); //cria o ponteiro d para ser alocado com o tamanho de n
  strcpy(d, s); //copia oque o user digitou em linha para d
  return d; // retorna para oque foi copiado
}
