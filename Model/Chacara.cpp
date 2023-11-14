#include "./include/Chacara.hpp"

Chacara::Chacara() {}

Chacara::Chacara(int id, float valor, const std::string &proprietario,
                 const std::string &rua, const std::string &bairro,
                 const std::string &cidade, int numero, int quartos,
                 int banheiros, bool salao_festa, bool salao_jogos,
                 bool campo_futebol, bool churrasqueira, bool piscina)
    : Imovel(id, valor, proprietario, rua, bairro, cidade, numero, quartos,
             banheiros),
      salao_festa(salao_festa), salao_jogos(salao_jogos),
      campo_futebol(campo_futebol), churrasqueira(churrasqueira),
      piscina(piscina) {}
Chacara::~Chacara() {
  // Operações de limpeza, se necessário
}

bool Chacara::getSalaoFesta() const { return salao_festa; }

void Chacara::setSalaoFesta(bool salao_festa) {
  this->salao_festa = salao_festa;
}

bool Chacara::getSalaoJogos() const { return salao_jogos; }

void Chacara::setSalaoJogos(bool salao_jogos) {
  this->salao_jogos = salao_jogos;
}

bool Chacara::getCampoFutebol() const { return campo_futebol; }

void Chacara::setCampoFutebol(bool campo_futebol) {
  this->campo_futebol = campo_futebol;
}

bool Chacara::getChurrasqueira() const { return churrasqueira; }

void Chacara::setChurrasqueira(bool churrasqueira) {
  this->churrasqueira = churrasqueira;
}

bool Chacara::getPiscina() const { return piscina; }

void Chacara::setPiscina(bool piscina) { this->piscina = piscina; }

void Chacara::show(ostream& os) const{
  os << getProprietario() << '\n' <<
  '\t' << getValor() << '\n' <<
  '\t' << getQuartos() << '\n' <<
  '\t' << getRua() << '\n' <<
  '\t' << getBairro() << '\n' <<
  '\t' << getCidade() << '\n' <<
  '\t' << getSalaoFesta() << '\n' <<
  '\t' << getSalaoJogos() << '\n' << 
  '\t' << getCampoFutebol() << '\n' << 
  '\t' << getChurrasqueira() << '\n' << 
  '\t' << getPiscina();
}

ostream& operator<<(ostream& os, const Chacara& chacara){
  chacara.show(os);
  return os;
}