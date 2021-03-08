#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "validação.h"

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
	printf("///            Developed by  @cintiacq and @Sana-El - Fev, 2021           ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =   Menu Receita  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           0. Encerra o programa                                       ///\n");	
  	printf("///           1. Criar nova receita                                       ///\n");
	printf("///           2. Edite uma receita                                        ///\n");
	printf("///           3. Deletar receita                                          ///\n");
	printf("///           4. procurar receita por ingrediente                         ///\n");
	printf("///           5. listar receitas                                          ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: \n");
        scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
        return op;
       }

void novaReceita(void) {
  char nomeReceita[20];
  int identificador;
       system("clear");
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
	printf("///           = = = = = = = =   nova receita  = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
        printf("///                     adicionar nome da  receita: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeReceita);
        getchar();
        while (validaNome(nomeReceita)==0){
        printf("Deu erro, tente novamente \n");
        printf("///                     adicionar nome da  receita: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeReceita);
        getchar();
        } 
        if (validaNome(nomeReceita)==1) {
        printf("///                   adicionar número da  receita: ");
        scanf("%d", &identificador);
        getchar();
        while (validaIdentificador(&identificador) == 0){
        printf("digite apenas numeros maiores que zero\n");
        printf("///                   adicionar número da  receita: ");
        scanf("%d", &identificador);
        getchar();
        }
      }
        printf("///          ====================================================         ///\n");
        printf("///                                                                       ///\n");
	printf("///                  Nome adicionado com sucesso!                         ///\n");
        printf("///                  Nome: %s \n", nomeReceita);
	printf("///                  Numero: %d \n", identificador);
        printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
        getchar();
	printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
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
	printf("///            Developed by  @CintiaCQ and @Sana-El - Fev, 2021           ///\n");
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
        while (validaNome(nome)==0){
        printf("Deu erro, tente novamente \n");
        printf("///          Digite o nome da receita que quer alterar: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        getchar();
       } 
	printf("///          Digite o novo nome: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", novonome);
        getchar();
        while (validaNome(novonome)==0){
        printf("Deu erro, tente novamente \n");
        printf("///          Digite o novo nome: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", novonome);
        getchar();
       }
        printf("Deu erro, tente novamente \n");
        printf("///          ====================================================         ///\n");
        printf("///                                                                       ///\n");
  	printf("///                  Receita editada com sucesso!                         ///\n");
        printf("///                  Receita: %s \n", novonome);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
        getchar();
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
      } 
//validação
void menuEditIngredientes(void){
 char editingredientes[200];
 int identificador; 
 system("clear");
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
	printf("///           = = = = Editar Ingredientes da receita  = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///            informe a receita ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", editingredientes);
        getchar();
        while (validaNome(editingredientes)==0){
        printf("Digite a primeira letra em maiúsculoo.");
        printf("///            informe a receita ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ],[0-9/]", editingredientes);
        getchar();
        }
        printf("///            informe o numero da receita ");
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
	printf("///                  Receita editada com sucesso!                         ///\n");
        printf("///                  Receita: %s \n", editingredientes);
	printf("///                                                                       ///\n");
        printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n"); 
        printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}
//validação

void delReceita(void) {
  char del [20];
  int identificador;
    system("clear");
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
	printf("///           = = = = = = = = Deletar Receita = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///          digite a receita a ser deletada: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", del);
        getchar();
        while (validaNome(del)==0){
        printf("Deu erro, tente novamente \n");
        printf("///            informe o numero da receita ");
        scanf("%d", &identificador);
        getchar();
         }
        while (validaIdentificador(&identificador) == 0){
        printf("digite apenas numeros maiores que zero\n");
        printf("///                   adicionar número da  receita: ");
        scanf("%d", &identificador);
        getchar();
        }
        printf("///          ====================================================         ///\n");
        printf("///                                                                       ///\n");
	printf("///                 Receita excluida com sucesso!                         ///\n");
	printf("///                                                                       ///\n");
        printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}
//validação

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
	printf("///           Developed by  @CintiaCQ and @Sana-El - Fev, 2021            ///\n");
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
        printf("///          ====================================================         ///\n");
        printf("///                                                                       ///\n");
	printf("///                     Ingrediente não encontrado!                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
    }

void listareceitas(void) {
    system("clear");
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
	printf("///           = = = = = = = = Listar Receitas = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
        printf("///          ====================================================         ///\n");
        printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
     }
