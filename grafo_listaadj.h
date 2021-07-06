#include <stdbool.h>
#include "grafo_matrizadj.h"
#define VERTICE_INVALIDO NULL//NRO DE VERTICE INVALIDO OU AUSENTE
#define AN -1 // ARESTA NULA

typedef int Peso;

bool inicializaGrafo(Grafo* grafo, int nv);
/*Tipo estruturado de Aresta: vertice destino, peso, ponteiro e etc*/

typedef struct str_aresta{
  int vdest;
  Peso peso;
  struct str_aresta*prox;
} Aresta;

typedef struct{
  Aresta ** listaAdj;
  int numVertices;
  int  numArestas;
} Grafo;
