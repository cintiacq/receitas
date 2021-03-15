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
#include "moduloRelatorio.h"
#include "validação.h"


/////////////////////////////////////////////////////////////////////////////// 



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
      case '4':  moduloRelatorio();
                break;
      case '5':  menuSobre();
                break;                     
    }
  } while (op != 0);
  printf("The End\n");
  return 0;
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
		} 		
	} while (op != '0');
}

void moduloIngrediente(void){
  	char op;
	do {
		op = menuIngredientes();
		switch(op) {
			case '1': 	adicionarIngrediente();
						break;
			case '2': 	apagaringredientes();
						break;
			case '3': 	pesquisaringredientes();
						break;
		} 		
	} while (op != '0');
}

void moduloProcedimento(void){
  	char op;
	do {
		op = menuProcedimento();
		switch(op) {
			case '1': 	adicionarProcedimento();
						break;
			case '2': 	apagarProcedimento();
						break;
		} 		
	} while (op != '0');
}

void moduloRelatorio(void){
  	char op;
	do {
		op = menuRelatorio();
		switch(op) {
			case '1': 	relatorioreceita();
						break;
			case '2': 	relatorioingredientes();
						break;
			case '3': 	relatorioprocedimento();
						break;
		} 		
	} while (op != '0');
}




