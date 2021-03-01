///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///            Projeto Caderno Virtual de Receitas Culinárias               ///
///            Developed by  @Sana-El e @cintiacq - Jan, 2021               ///
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////




#include <stdio.h>
#include <stdlib.h>
#include "modulosobre.h"
#include "moduloInicial.h"
#include "moduloReceita.h"
#include "moduloIngredientes.h"
#include "moduloProcedimento.h"


/////////////////////////////////////////////////////////////////////////////// 
/// 						Assinaturas das funções
///////////////////////////////////////////////////////////////////////////////
void menuSobre(void);//
int menuPrincipal(void); //

void moduloReceita(void); //

char menuReceita(void);//
void novaReceita(void);//
void delReceita(void);  //
void pesquisarReceita(void);//
void listareceitas(void); //
void editReceita(void); //
void menuEditNome(void);//

/////////////////////////////////

void moduloIngrediente(void);

char menuIngredientes(void);
void adicionarIngrediente(void);
void menuEditIngrediente(void);
void listaingredientes(void);
void apagaringredientes(void);
void pesquisaringredientes(void);

/////////////////////////////////

void moduloProcedimento(void);

char menuProcedimento(void);
void adicionarProcedimento(void);
void listarprocedimento(void);
void apagarProcedimento(void);
void delay(int);


int main(void) { 
  int op;
  do {
    op = menuPrincipal();
    switch (op) {
      case '1':  moduloReceita();
                break;
      case '2':  moduloIngrediente();
                break;
      case '3':  moduloProcedimento();
                break;
    }
  } while (op != 0);
  printf("The End\n");
  return 0;

}


void menuSobre(void) {
    system("clear");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///            Projeto Caderno Virtual de Receitas Culinárias               ///\n");
    printf("///            Developed by  @Sana-El e @cintiacq - Jan, 2021               ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///       = = = = = Caderno Virtual de Receitas Culinárias = = = = =        ///\n");
    printf("///                                                                         ///\n");
    printf("///  O projeto de Caderno Virtual de Receitas tem como objetivo facilitar   ///\n");
    printf("///     facilitar a vida de pessoas comuns, permitindo uma organização      ///\n");
    printf("///                  com maior eficácia e simplicidade.                     ///\n");
    printf("///     Permitirá que o usuário crie novas receitas, edite as existentes,   ///\n");
    printf("///           delete, procure por receitas com x ingredientes, e etc.       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void delay(int segundos) {
  int tempo = 500000 * segundos;
  clock_t inicio = clock();
  while (clock() < inicio + tempo) {
    // não faz nada, apenas gasta tempo
  }
}


int menuPrincipal(void) { 
  char op; 
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @cintiacq and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Modulo receita                                           ///\n");
	printf("///           2. Modulo ingrediente                                       ///\n");
	printf("///           3. Modulo procedimento                                      ///\n");
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
  delay(1);
  return op;
}

void moduloReceita(void){
  	char op;
	do {
		op = menuReceita();
		switch(op) {
			case '1': 	novaReceita();
						break;
			case '2': 	editReceita();
						break;
			case '3': 	delReceita();
						break;
			case '4': 	pesquisarReceita();
						break;
      case '5': 	listareceitas();
						break;
		} 		
	} while (op != '0');
}


char menuReceita(void) { 
  char op; 
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @cintiacq and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =   Menu Receita  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Criar nova receita                                       ///\n");
	printf("///           2. Edite uma receita                                        ///\n");
	printf("///           3. Deletar receita                                          ///\n");
	printf("///           4. procurar receita por ingrediente                         ///\n");
  printf("///           5. listar receitas                                          ///\n");
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
  delay(1);
  return op;
}

void novaReceita(void) {
  char nomeReceita[20];

    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Cintiacq and @Sana-El - Jan, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =   nova receita  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
  printf("///            adicionar nome da  receita:                                ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeReceita);
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  delay(1);
}


void editReceita(void) {
  char nome[20];
  char novonome[20];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Editar receita = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///          Digite o nome da receita que quer alterar: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	getchar();
	printf("///          Digite o novo nome: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", novonome);
  getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void menuEditNome(void){ 
 char editnome[20];
 system("clear");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("//1/                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Editar nome da receita = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            Cadastrar um novo nome para a receita: "); 
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", editnome);
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n"); 
  printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void menuEditIngredientes(void){
 char editingredientes[200];
 system("clear");
  printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = Editar Ingredientes da receita  = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            Alterar ingredientes da receita:                           ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", editingredientes);
  printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n"); 
  printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void delReceita(void) {
  char del [20];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Deletar Receita = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           digite o nome da receita na qual quer descartar:            ///\n");
	printf("///                                                                       ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", del);
  getchar();
  printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void pesquisarReceita(void) {
  char ingredientes[1000];
  system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @CintiaCQ and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = Pesquisar Receita por ingreditene = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           ingredientes: ");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", ingredientes);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void listareceitas(void) {
// em desenvolvimento
}

void moduloIngrediente(void){
  	char op;
	do {
		op = menuIngredientes();
		switch(op) {
			case '1': 	adicionarIngrediente();
						break;
			case '2': 	listaingredientes();
						break;
			case '3': 	apagaringredientes();
						break;
			case '4': 	pesquisaringredientes();
						break;
		} 		
	} while (op != '0');
}


char menuIngredientes(void) { 
  char op; 
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @cintiacq and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  = Menu Ingrediente = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Adicionar ingredientes                                   ///\n");
	printf("///           2. Listar ingredientes                                      ///\n");
	printf("///           3. Apagar ingredientes                                      ///\n");
	printf("///           4. pesquisar ingredientes                                   ///\n");  
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
  char adicionarIngrediente [200];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Cintiacq and @Sana-El - Jan, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Adicionar Ingrediente  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            adicionar ingrediente:                                    ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", adicionarIngrediente);
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void apagaringredientes(void) {
  char apagarIngrediente [200];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Cintiacq and @Sana-El - Jan, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =    Apagar Ingrediente   = = = = = =              ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Digite o nome do ingrediente a ser apagado:                 ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", apagarIngrediente);
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");

}

void pesquisaringredientes(void) {
  char pesquisarIngrediente [200];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Cintiacq and @Sana-El - Jan, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Pesquisar Ingrediente  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            Pesquisar ingrediente:                                    ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", pesquisarIngrediente);
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void listaingredientes(void) {
// em desenvolvimento
}

void moduloProcedimento(void){
  	char op;
	do {
		op = menuProcedimento();
		switch(op) {
			case '1': 	adicionarProcedimento();
						break;
			case '2': 	listarprocedimento();
						break;
			case '3': 	apagarProcedimento();
						break;
		} 		
	} while (op != '0');
}


char menuProcedimento(void) { 
  char op; 
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @cintiacq and @Sana-El - Fev, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Menu Procedimento = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Adicionar procedimento                                   ///\n");
	printf("///           2. Listar procedimento                                      ///\n");
	printf("///           3. Apagar procedimento                                      ///\n");
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

char pesquisarReceita(void) {
  char ingredientes[1000];
void adicionarProcedimento(void) {
  char adicionarProcedimento [2000];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Cintiacq and @Sana-El - Jan, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = Pesquisar Receita por ingreditene = = = =              ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           ingredientes: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", ingredientes);
	getchar();
  printf("///           = = = = = =  Adicionar Procedimento = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            adicionar procedimento:                                    ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", adicionarProcedimento);
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void apagarProcedimento(void) {
  char apagarProcedimento [2000];
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =    Caderno Virtual de Receitas      = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Cintiacq and @Sana-El - Jan, 2021       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = =  Apagar Procedimento = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            adicionar procedimento:                                    ///\n");
  scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", apagarProcedimento);
  getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void listarprocedimento(void) {
// em desenvolvimento
}
