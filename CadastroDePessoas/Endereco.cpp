#include "Endereco.h"

Endereco::Endereco(){

}

Endereco::Endereco(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string cep){
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}

std::string Endereco::toString(std::string rua, std::string numero, std::string bairro, std::string cidade, std::string estado, std::string cep){

    std::string endereco = "";
    std::string s = ", ";

    endereco.append(rua);
    endereco.append(s);
    endereco.append(numero);
    endereco.append(s);
    endereco.append(bairro);
    endereco.append(s);
    endereco.append(cidade);
    endereco.append(s);
    endereco.append(estado);
    endereco.append(s);
    endereco.append(cep);

    return endereco;
}

std::string Endereco::getRua(){
    return this->rua;
}

std::string Endereco::getNumero(){
    return this->numero;
}

std::string Endereco::getBairro(){
    return this->bairro;
}

std::string Endereco::getCep(){
    return this->cep;
}

std::string Endereco::getCidade(){
    return this->cidade;
}

std::string Endereco::getEstado(){
    return this->estado;
}

 void Endereco::setRua(std::string rua){
    this->rua = rua;
 }

  void Endereco::setNumero(std::string numero){
    this->numero = numero;
 }

  void Endereco::setBairro(std::string bairro){
    this->bairro = bairro;
 }

  void Endereco::setCep(std::string cep){
    this->cep = cep;
 }

  void Endereco::setCidade(std::string cidade){
    this->cidade = cidade;
 }

  void Endereco::setEstado(std::string estado){
    this->estado = estado;
 }
