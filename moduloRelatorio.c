
#include <stdio.h>
#include <stdlib.h>
#include "validacao.h"

char menuRelatorio(void) { 
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
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Relatório de Receitas                                    ///\n");
	printf("///           2. Relatório de Ingredientes                                ///\n");
	printf("///           3. Relatório de Procedimento                                ///\n");
  printf("///           0. sair                                                     ///\n");
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

void relatorioreceita(void) {
    char receita1[14] = "Ovo Frito";
    char receita2[14] = "Ovo Cozido";
    char receita3[14] = "Ovo mexido";
    int total = 3;
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
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =    Relatório de Receitas    = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           Todos as Receitas:                                          ///\n");
	printf("///                                                                       ///\n");
  printf("///           ===============================================             ///\n");
    
    for(int i=0; i < 2; i++){
        printf("///             Receita 1: %s\n", receita1);
        printf("///             Receita 2: %s\n", receita2);
        printf("///             Receita 3: %s\n", receita3);
        printf("///                 Total: %d\n", total);
        printf("///           ==============================================              ///\n");
    }
    printf("\n/////////////////////////////////////////////////////////////////////////\n");
    printf("\n\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();


}
void relatorioingredientes(void) {
    char ingredientes1[20] = "ovo, sal e azeite";
    char ingredientes2[4] = "ovo";
    char ingredientes3[20] = "ovo, sal e azeite";
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
	printf("///                        (EM DESENVOLVIMENTO)                           ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = =  Relatório de Ingredientes  = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           Todos os ingredientes:                                      ///\n");
  printf("///           ===============================================             ///\n");
    for(int i=0; i < 3; i++){
    printf("///             Ingredientes: %s\n", ingredientes1);
    printf("///             Ingredientes: %s\n", ingredientes2);
    printf("///             Ingredientes: %s\n", ingredientes3);
    printf("///           ==============================================              ///\n");
    printf("\n");
    }
    printf("\n/////////////////////////////////////////////////////////////////////////\n");
    printf("\n\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void relatorioprocedimento(void) {
    limpaTela();
    char procedimento1[1000] = "Coloque um fio de azeite na frigideira.\nIsso ajuda o ovo a não grudar. Deixe aquecer.\nQuebre o ovo na figideira.\nSalpique uma pitada de sal por todo o ovo.\n Mantenha em fogo baixo até a clara estar\nrendada e a gema, mole.";
    char procedimento2[1000] = "Coloque o ovo numa vasilha de metal, em seguida preencha-a com agua até cobrir os ovos.\nQuando começar a ferver espere por cerca de 10 minutos e\nlogo após leve-os para a pia e quebre-os embaixo da terneira em água corrente.";
    char procedimento3[1000] = "Coloque um fio de azeite na frigideira. Isso ajuda o ovo a não grudar.\nDeixe aquecer. Quebre o ovo na figideira.\nSalpique uma pitada de sal por todo o ovo e deixe\ncozinhar mexendo sempre. ";
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

	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = Relatório de Procedimentos  = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
  printf("///           Todos os procedimentos:                                     ///\n");
  printf("///           ===============================================             ///\n");
    
    for(int i=0; i < 3; i++){
    printf("///Procedimento 1:\n %s\n", procedimento1);
    printf("\n");
    printf("///Procedimento 2:\n %s\n", procedimento2);
    printf("\n");
    printf("///Procedimento 3:\n %s\n", procedimento3);
    printf("\n");
    printf("///           ==============================================              ///\n");
    }
    printf("///                                                                       ///\n");
    printf("/////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
  }
