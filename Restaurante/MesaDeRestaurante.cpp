#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    for(int i = 0; i < MAX; i++){
        pedidos[i].setPedido(0, " ", 0, 0);
    }
}

void MesaDeRestaurante::adicionaAoPedido(int i, int numeroPedido, std::string descricaoPedido, int quantidade, double preco){
    pedidos[i].setPedido(numeroPedido, descricaoPedido, quantidade, preco);

}

double MesaDeRestaurante::calculaTotal(){
    double soma = 0;
    int i = 0;

    while(pedidos[i].getNumeroPedido() != 0){
        soma += pedidos[i].getPreco() * pedidos[i].getQuantidade();
        i++;
    }
    return soma;
}

void MesaDeRestaurante::zeraPedidos(){
    int i = 0;

    while(!(pedidos[i].getNumeroPedido() == 0)){
        pedidos[i].setPedido(0, " ", 0, 0);
    }

}
