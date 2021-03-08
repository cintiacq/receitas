#include <stdio.h>
#include <string.h>

int validaNome (char nomeReceita[]) {
  int tam; 
  tam = strlen(nomeReceita);

  if (tam > 21 || tam <= 1){
  return 0;
  }

  if (nomeReceita[0] >= 'A' && nomeReceita[0] <= 'Z') {
    return 1;
  } else {  
     return 0; 
     } 
}



int validaIdentificador (int identificador[]){
  if (&identificador > 0){
    return 1;
  } else if (!(&identificador > 0)) {
  return 0;
  } 
}
