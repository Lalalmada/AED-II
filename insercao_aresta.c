/* void insereAresta(int v1,int v2, Peso pes, Grafo*grafo):
Insere(v1,v2) com peso 'peso', no grafo

Nao verifica se a aresta ja existia (isso deve ser feito pelo o usuario antes, se necessario)
*/
void insereAresta(int v1,int v2, Peso*peso, Grafo*grafo){
  if(!(verificaValidadeVertice(v1,grafo) && verificaValidadeVertice(v2,grafo)))
  return;

    grafo->mat[v1][v2]= peso;
  grafo->numArestas++;

}

bool verificaValidadeVertice(int v, Grafo*grafo){

  if(v>grafo->numVertices){
    fprintf(stderr,"ERRO: numero do Vertice (%d) deve ser maior que o numero total de vertices \(%d) .\n",v,grafo->numVertices)
  }
  if(v<=0){
    fprintf(stderr,"ERRO: numero do Vertice (%d) deve ser positivo.\n")
    return false;
  }
  return true;
}
