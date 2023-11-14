#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Imovel.hpp"


class Apartamento : public Imovel {
public:
  int andar;
  float taxa_condominio;
  bool elevador;
  bool sacada;
  Apartamento();
  Apartamento(int id, float valor, const std::string &proprietario,
              const std::string &rua, const std::string &bairro,
              const std::string &cidade, int numero, int quartos, int banheiros,
              int andar, float taxa_condominio, bool elevador, bool sacada);

  ~Apartamento();

  // Métodos Get e Set para os atributos específicos de Apartamento
  int getAndar() const;
  void setAndar(int andar);

  float getTaxaCondominio() const;
  void setTaxaCondominio(float taxa_condominio);

  bool getElevador() const;
  void setElevador(bool elevador);

  bool getSacada() const;
  void setSacada(bool sacada);
  void show(ostream& os) const override;
  friend ostream& operator<<(std::ostream& os, const Apartamento& apt);
};

#endif // APARTAMENTO_H
