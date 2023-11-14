#ifndef CASA_H
#define CASA_H

#include "Imovel.hpp"

class Casa : public Imovel
{
public:
    int andares;
    bool sala_jantar;
    Casa();
    Casa(int id, float valor, const std::string &proprietario, const std::string &rua, const std::string &bairro,
         const std::string &cidade, int numero, int quartos, int banheiros, int andares, bool sala_jantar);

    ~Casa();

    // Métodos Get e Set para os atributos específicos de Casa
    int getAndares() const;
    void setAndares(int andares);

    bool getSalaJantar() const;
    void setSalaJantar(bool sala_jantar);
    void show(ostream& os) const override;
    friend ostream& operator<<(std::ostream& os, const Casa& casa);
};

#endif // CASA_H
