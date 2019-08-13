#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>

class Funcionario
{
    public:
        Funcionario();
        std::string getNome();
        void setNome(std::string nome);
        int getMatricula();
        void setMatricula(int matricula);
        double getSalario();
        void setSalario(double salario);

    protected:
        std::string nome;
        int matricula;
        double salario;
};

#endif // FUNCIONARIO_H
