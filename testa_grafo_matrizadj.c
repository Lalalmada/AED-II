#include <stdio.h>
#include "grafo_matrizadj.h"

int main(){
  Grafo g1;
  int numVertices;
  //inicializa Grafo(&g1,10);

  do{
    printf("Digite o numero de vertices do grafo\n");
    scanf("%d",&numVertices);
  }while(!inicializaGrafo(&g1, numVertices));

  // Imprime Grafo;

  return 0;
}