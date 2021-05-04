typedef struct receita Receita;

struct receita {
  long int identificador;
  char receita[15];
  char tag1[15];
  char tag2[15];
  char tag3[15];
  char tag4[15];
  char tag5[15];
  char status;
  };
void moduloReceita(void);
Receita* preencheReceita(void);
void exibeReceita(Receita*);
char menuReceita(void);
void gravaReceita(Receita*);
Receita* buscaReceita(void);
void excluiReceita(Receita*);
void visualizaReceita(Receita*);
                

