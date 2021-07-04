int proxListaAdj(int v, Grafo*grafo, int atual){
  if(!verificaValidadeVertice(v,grafo))
  return VERTICE_INVALIDO;
  atual++;
  
  while((atual<=grafo->numVertices) && (grafo->mat[v][atual]== AN) atual ++;
  if(atual>grafo->numVertices){
    return VERTICE_INVALIDO;
  }
  return atual;
}