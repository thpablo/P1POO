#include "./include/Apartamento.hpp"

Apartamento::Apartamento() {}

Apartamento::Apartamento(int id, float valor, const std::string &proprietario,
                         const std::string &rua, const std::string &bairro,
                         const std::string &cidade, int numero, int quartos,
                         int banheiros, int andar, float taxa_condominio,
                         bool elevador, bool sacada)
    : Imovel(id, valor, proprietario, rua, bairro, cidade, numero, quartos,
             banheiros),
      andar(andar), taxa_condominio(taxa_condominio), elevador(elevador),
      sacada(sacada) {}

Apartamento::~Apartamento() {
  // Operações de limpeza, se necessário
}

int Apartamento::getAndar() const { return andar; }

void Apartamento::setAndar(int andar) { this->andar = andar; }

float Apartamento::getTaxaCondominio() const { return taxa_condominio; }

void Apartamento::setTaxaCondominio(float taxa_condominio) {
  this->taxa_condominio = taxa_condominio;
}

bool Apartamento::getElevador() const { return elevador; }

void Apartamento::setElevador(bool elevador) { this->elevador = elevador; }

bool Apartamento::getSacada() const { return sacada; }

void Apartamento::setSacada(bool sacada) { this->sacada = sacada; }

ostream& operator<<(ostream& os, const Apartamento& apartamento)
{
  apartamento.show(os);
  return os;
}

void Apartamento::show(ostream& os) const{
  os << getProprietario() << '\n' <<
  '\t' << getValor() << '\n' <<
  '\t' << getQuartos() << '\n' <<
  '\t' << getRua() << '\n' <<
  '\t' << getBairro() << '\n' <<
  '\t' << getCidade() << '\n' <<
  '\t' << getAndar() << '\n' <<
  '\t' << getTaxaCondominio() << '\n' <<
  '\t' << getElevador() << '\n' <<
  '\t' << getSacada();
}