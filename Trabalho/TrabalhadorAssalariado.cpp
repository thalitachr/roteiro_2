#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, float salario){
    this->nome = nome;
    this->salario = salario;
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return this->salario/4;
}
