#include <stdbool.h>
#define MAXNUMVERTICES 100
#define AN -1 /*Aresta nula, ou seja, valor que representa a ausencia da aresta*/

typedef int Peso;
typedef struct {
  Peso mat[MAXNUMVERTICES+1][MAXNUMVERTICES+1];
  int numVertices;
  int numArestas;
} Grafo;
