#include <stdio.h>
#include <stdlib.h>
#include "validação.h"

char menuProcedimento(void) { 
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
	printf("///            Developed by  @cintiacq and @Sana-El - Fev, 2021           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Menu Procedimento = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Adicionar procedimento                                   ///\n");
	printf("///           2. apagar procedimento                                      ///\n");
	printf("///           3. Apagar procedimento                                      ///\n");
  printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: \n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
    scanf("%c", &op);
	getchar();
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
  return op;
}

void adicionarProcedimento(void) {
  int identificador;
  char adicionarProcedimento [2000];
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
	printf("///           = = = = = =  Adicionar Procedimento = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            adicionar procedimento:                                    ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", adicionarProcedimento);
  getchar();
  printf("///                   adicionar número da  receita: ");
  scanf("%d", &identificador);
  getchar();
  while (validaIdentificador(&identificador) == 0){
  printf("digite apenas numeros maiores que zero\n");
  printf("///                   adicionar número da  receita: ");
  scanf("%d", &identificador);
  getchar();
    }
  printf("///          ====================================================         ///\n");
  printf("///                                                                       ///\n");
	printf("///                  Procedimento adicionado com sucesso!                 ///\n");
  printf("///                  procedimento: %s \n", adicionarProcedimento);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
  getchar();
}

void apagarProcedimento(void) {
  char apagarProcedimento [2000];
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
	printf("///           Developed by  @Cintiacq and @Sana-El - Jan, 2021            ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Apagar Procedimento  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                        Apagar procedimento:                           ///\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", apagarProcedimento);
        getchar();
        while (validaIdentificador(&identificador) == 0){
        printf("digite apenas numeros maiores que zero\n");
        printf("///                   adicionar número da  receita: ");
        scanf("%d", &identificador);
        getchar();
        }
        printf("///          ====================================================         ///\n");
        printf("///                                                                       ///\n");
	printf("///                  Procedimento excluido com sucesso!                   ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



