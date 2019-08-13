#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome,std::string telefone, Endereco endereco);
        std::string getNome();
        std::string getTelefone();
        void setNome(std::string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(std::string telefone);

    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;
};

#endif // PESSOA_H
