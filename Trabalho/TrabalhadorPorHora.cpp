#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, float valorHora){
    this->nome = nome;
    this->valorHora = valorHora;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    float x;
    if(horas>40){
        x = horas-40;
        return (this->valorHora*1.5*x) + (this->valorHora*40);

    }else{
        return horas*this->valorHora;
    }
}

float TrabalhadorPorHora::getValorHoras(){
    return valorHora;
}


