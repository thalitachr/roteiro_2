#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>
#include <iostream>

class Trabalhador
{
    public:
        Trabalhador();
        std::string getNome();
        void setNome(std::string nome);
        float getSalario();
        void setSalario(float salario);

    protected:
        std::string nome;
        float salario;
};

#endif // TRABALHADOR_H
