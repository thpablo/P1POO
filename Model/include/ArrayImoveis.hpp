#ifndef ARRAY_IMOVEIS_H
#define ARRAY_IMOVEIS_H

#include "Imovel.hpp"
#include <vector>

using namespace std;

class ArrayImoveis {
private:
public:
  void adicionarImovel(Imovel *imovel);
  void removeImovel(Imovel *imovel);
  Imovel *obterImovel(int indice) const;
};

#endif // ARRAY_IMOVEIS_H