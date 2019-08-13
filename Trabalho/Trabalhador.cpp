#include "Trabalhador.h"

Trabalhador::Trabalhador(){
}

std::string Trabalhador::getNome(){
    return nome;
}

void Trabalhador::setNome(std::string nome){
    this->nome = nome;
}

float Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setSalario(float salario){
    this->salario = salario;
}

