bool removeAresta(int v1,int v2, Peso*peso, Grafo*grafo){
  
  if(!(verificaValidadeVertice(v1,grafo) && verificaValidadeVertice(v2,grafo)))
  return false;

  /*Se a aresta existe*/

  if(grafo->mat[v1][v2] != AN){
    *peso=grafo->mat[v1][v2];
    grafo->mat[v1][v2]=AN;
    grafo->numArestas--;
    return true;
  }
  /*Aresta não existe*/
  return false;
}