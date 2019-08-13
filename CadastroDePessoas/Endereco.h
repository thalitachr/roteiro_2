#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
#include <string>
#define MAX 255

class Endereco
{
    public:
        Endereco();
        Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string cep);
        std::string toString(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string cep);
        std::string getRua();
        std::string getNumero();
        std::string getCidade();
        std::string getCep();
        std::string getBairro();
        std::string getEstado();
        void setRua(std::string rua);
        void setNumero(std::string numero);
        void setCidade(std::string cidade);
        void setCep(std::string cep);
        void setBairro(std::string bairro);
        void setEstado(std::string estado);

    private:
        std::string rua;
        std::string numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
};

#endif // ENDERECO_H
