#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string nome, float valorHora);
        float calcularPagamentoSemanal(int horas);
        float getValorHoras();

    protected:
        std::string nome;
        float salario;
        float valorHora;
};

#endif // TRABALHADORPORHORA_H
