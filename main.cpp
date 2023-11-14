
#include "./utils/loadDatas.hpp"
#include "Model/include/Imovel.hpp"
#include "Model/include/Apartamento.hpp"
#include "Model/include/Casa.hpp"
#include "Model/include/Chacara.hpp"
#include <vector>
#include <typeinfo>

int main() {
  vector<Imovel *> listaImoveis = carregarImoveis() ;

  /* Printando imovels */
  for (Imovel* imovel : listaImoveis) {
      cout << *imovel << '\n';    //Operador << sobrecarregado
  }
  // Liberar a memória alocada
  for (Imovel* imovel : listaImoveis) {
      delete imovel;
  }
  return 0;
}