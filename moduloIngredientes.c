#include <stdio.h>
#include <stdlib.h>
#include "validação.h"


char menuIngredientes(void) { 
  char op; 
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///           Developed by  @cintiacq and @Sana-El - Fev, 2021            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  = Menu Ingrediente = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Adicionar ingredientes                                   ///\n");
	printf("///           2. Apagar ingredientes                                      ///\n");
	printf("///           3. pesquisar ingredientes                                   ///\n");  
  printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:");
  scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}

void adicionarIngrediente(void) {
  int quantidade = 0;
  int identificador;
  char adicionarIngrediente [200];
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///            Developed by  @Cintiacq and @Sana-El - Jan, 2021           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Adicionar Ingrediente  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
  printf("///                   adicionar número da  receita: ");
  scanf("%d", &identificador);
	printf("///            Quantos ingredientes deseja adicionar: ");
  scanf("%d",&quantidade);
  for (int i = 0; i < quantidade; i++){
    printf("Digite o ingrediente(e as porções sem os espaços, com underline(_)):");
    scanf("%s", adicionarIngrediente);
    printf("ingrediente: %s\n", adicionarIngrediente);
  }
  getchar();
    while (validaIdentificador(&identificador) == 0){
  printf("digite apenas numeros maiores que zero\n");
  printf("///                   adicionar número da  receita: ");
  scanf("%d", &identificador);
  getchar();
    }
  printf("///          ====================================================         ///\n");
  printf("///                                                                       ///\n");
	printf("///                  Ingredientes adicionados com sucesso!                ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void apagaringredientes(void) {
  char apagarIngrediente [200];
  int identificador;
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///            Developed by  @Cintiacq and @Sana-El - Jan, 2021           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =    Apagar Ingrediente   = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///             Digite o nome do ingrediente a ser apagado:");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", apagarIngrediente);
  printf("///                   adicionar número da  receita: ");
  scanf("%d", &identificador);
  getchar();
  while (validaIdentificador(&identificador) == 0) {
  printf("digite apenas numeros maiores que zero\n");
  printf("///                   adicionar número da  receita: ");
  scanf("%d", &identificador);
  getchar();
  }
  printf("///          ====================================================         ///\n");
  printf("///                                                                       ///\n");
	printf("///                 Ingrediente excluido com sucesso!                     ///\n");
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void pesquisaringredientes(void) {
  char pesquisarIngrediente [200];
    limpaTela();
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///           Developed by  @Cintiacq and @Sana-El - Jan, 2021            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Pesquisar Ingrediente  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            Pesquisar ingrediente:");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", pesquisarIngrediente);
  getchar();
  printf("///          ====================================================         ///\n");
  printf("///                                                                       ///\n");
	printf("///                       Ingrediente não encontrado!                     ///\n");
	printf("///                                                                       ///\n");
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

