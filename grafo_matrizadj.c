#include <stdbool.h>
#include "grafo_matrizadj.h"

/*InicializaGrafo(Grafo*grafo, int nv)Inicializa Grafo com nv vértices

Preenche as celulas com AN (representando a ausencia de Aresta)

Retorna true se inicializou com sucesso e false, caso contrario
*/

bool inicializaGrafo(Grafo*grafo, int nv){
  int i, j;
  if (nv>MAXNUMVERTICES){

    fprintf(stderr, "ERRO na chamada de inicializaGrafo\  Numero de vertices maior que o permitido de %d.\n",MAXNUMVERTICES);
    return false;
  }
  if (nv<=0){
    fprintf(stderr, "ERRO na chamada de inicializaGrafo: Numero de vertices deve ser positivo");
    return false;
  }
  grafo-> numVertices= nv;
  grafo->numArestas= 0;
  for(i=0;i<= grafo->numVertices; i++){
    for(j=0;j<= grafo->numVertices; j++)
    grafo->mat[i][j]= AN;
  }
  return true;
}