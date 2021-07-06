#include <stdio.h>

#include "grafo_listaadj.h"

int main(){
  Grafo g1;
  int numVertices;
  //inicializa Grafo G1 g1
  do{
    printf("Digite o nro de vertices do grafo\n");
    scanf("%d", &numVertices);
  }while(!inicializaGrafo(&g1,numVertices));
  return 0;
}
