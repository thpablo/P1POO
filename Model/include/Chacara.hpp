#ifndef CHACARA_H
#define CHACARA_H

#include "Imovel.hpp"

class Chacara : public Imovel
{
public:
    bool salao_festa;
    bool salao_jogos;
    bool campo_futebol;
    bool churrasqueira;
    bool piscina;
    Chacara();
    Chacara(int id, float valor, const std::string &proprietario, const std::string &rua, const std::string &bairro,
            const std::string &cidade, int numero, int quartos, int banheiros, bool salao_festa, bool salao_jogos,
            bool campo_futebol, bool churrasqueira, bool piscina);

    ~Chacara();

    // Métodos Get e Set para os atributos específicos de Chacara
    bool getSalaoFesta() const;
    void setSalaoFesta(bool salao_festa);

    bool getSalaoJogos() const;
    void setSalaoJogos(bool salao_jogos);

    bool getCampoFutebol() const;
    void setCampoFutebol(bool campo_futebol);

    bool getChurrasqueira() const;
    void setChurrasqueira(bool churrasqueira);

    bool getPiscina() const;
    void setPiscina(bool piscina);
    void show(ostream& os) const override;
    friend ostream& operator<<(std::ostream& os, const Chacara& chacara);
};

#endif // CHACARA_H
