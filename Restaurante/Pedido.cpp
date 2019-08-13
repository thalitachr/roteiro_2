#include "Pedido.h"

Pedido::Pedido(){}

void Pedido::setPedido(int numeroPedido, std::string descricaoPedido, int quantidade, double preco){
    this->numeroPedido = numeroPedido;
    this->descricaoPedido = descricaoPedido;
    this->quantidade = quantidade;
    this->preco = preco;
}

int Pedido::getNumeroPedido(){
    return numeroPedido;
}

std::string Pedido::getDescricaoPedido(){
    return descricaoPedido;
}

int Pedido::getQuantidade(){
    return quantidade;
}

double Pedido::getPreco(){
    return quantidade;
}
