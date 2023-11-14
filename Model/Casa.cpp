#include "./include/Casa.hpp"

Casa::Casa() {}

Casa::Casa(int id, float valor, const std::string &proprietario,
           const std::string &rua, const std::string &bairro,
           const std::string &cidade, int numero, int quartos, int banheiros,
           int andares, bool sala_jantar)
    : Imovel(id, valor, proprietario, rua, bairro, cidade, numero, quartos,
             banheiros),
      andares(andares), sala_jantar(sala_jantar) {}

Casa::~Casa() {
  // Operações de limpeza, se necessário
}

int Casa::getAndares() const { return andares; }

void Casa::setAndares(int andares) { this->andares = andares; }

bool Casa::getSalaJantar() const { return sala_jantar; }

void Casa::setSalaJantar(bool sala_jantar) { this->sala_jantar = sala_jantar; }

void Casa::show(ostream& os) const{
  os << getProprietario() << '\n' <<
  '\t' << getValor() << '\n' <<
  '\t' << getQuartos() << '\n' <<
  '\t' << getRua() << '\n' <<
  '\t' << getBairro() << '\n' <<
  '\t' << getCidade() << '\n' <<
  '\t' << getAndares() << '\n' <<
  '\t' << getSalaJantar();
}
ostream& operator<<(ostream& os, const Casa& casa)
{
  casa.show(os);
  return os;
}