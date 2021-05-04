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
#include <string.h>
#include "modulosobre.h"
#include "moduloInicial.h"
#include "moduloReceita.h"
#include "moduloRelatorio.h"
#include "validacao.h"
#include "Listas.h"

#define cls system("clear||cls");

int main(void) { 
  int op;
  do {
    op = menuPrincipal();
    switch (op) {
      case '1':  moduloReceita();
                break;
      case '2':  moduloRelatorio();
                break;
      case '3':   menuSobre();
                break;           
    }
  } while (op != 0);
  printf("The End\n");
  return 0;
}

 
void moduloRelatorio(void){
  Receita* pagina;
  	int op;
	do {
		op = menuRelatorio();
		switch(op) {
			case '1': listaReceita();
						break;
      case '2': pesquisarReceitaporTag();
						break;
      case '3': pagina = buscaReceita();
              exibeReceita(pagina);      

		} 		
	} while (op != '0');
}
