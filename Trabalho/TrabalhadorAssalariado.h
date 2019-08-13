#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado(std::string nome, float salario);
        float calcularPagamentoSemanal();

    protected:
        std::string nome;
        float salario;
};

#endif // TRABALHADORASSALARIADO_H
