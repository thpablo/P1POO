#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>
using namespace std;

class Imovel
{
private:
    int id;
    float valor;
    std::string proprietario;
    std::string rua;
    std::string bairro;
    std::string cidade;
    int numero;
    int quartos;
    int banheiros;

public:
    Imovel();
    Imovel(int id, float valor, const std::string &proprietario, const std::string &rua, const std::string &bairro,
           const std::string &cidade, int numero, int quartos, int banheiros);

    virtual ~Imovel();
    // Métodos Get e Set para cada atributo
    int getId() const;
    void setId(int id);

    float getValor() const;
    void setValor(float valor);

    std::string getProprietario() const;
    void setProprietario(const std::string &proprietario);

    std::string getRua() const;
    void setRua(const std::string &rua);

    std::string getBairro() const;
    void setBairro(const std::string &bairro);

    std::string getCidade() const;
    void setCidade(const std::string &cidade);

    int getNumero() const;
    void setNumero(int numero);

    int getQuartos() const;
    void setQuartos(int quartos);

    int getBanheiros() const;
    void setBanheiros(int banheiros);
    virtual void show(ostream& os) const;
    friend ostream& operator<<(ostream& os, const Imovel& imovel);
};

#endif // IMOVEL_H
