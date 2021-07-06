#include <stdio.h>
#include <stdlib.h>
#include "grafo_listaadj.c"


bool inicializaGrafo(Grafo* grafo, int nv){
  int i;

  if(nv<=0){
    fprintf(stderr, "ERRO na chamada de inicializaGrafo\  Numero de vertices deve ser positivo %d.\n");
    return false;
  }
  grafo->numVertices=nv;
  if(!(grafo->listaAdj=(Aresta**) calloc(nv+1,sizeof(Aresta*)))){
    fprintf(stderr, "ERRO falha na alocação de memoria na funcao InicializaGrafo %d.\n");
    return false;

  }
  grafo->numArestas=0;
  return true;

}
