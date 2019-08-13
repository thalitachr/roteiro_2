#include "Pessoa.h"

Pessoa::Pessoa(std::string nome){
    this->nome = nome;
}

Pessoa::Pessoa(std::string nome, std::string telefone, Endereco endereco){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

std::string Pessoa::getNome(){
    return this->nome;
}

std::string Pessoa::getTelefone(){
    return this->telefone;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

void Pessoa::setTelefone(std::string telefone){
    this->telefone = telefone;
}

void Pessoa::setEndereco(Endereco endereco){
    this->endereco = endereco;
}
