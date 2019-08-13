#include "Funcionario.h"

Funcionario::Funcionario(){
}

std::string Funcionario::getNome(){
    return this->nome;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}

int Funcionario::getMatricula(){
    return this->matricula;
}

void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}

double Funcionario::getSalario(){
    return this->salario;
}

void Funcionario::setSalario(double salario){
    this->salario = salario;
}
