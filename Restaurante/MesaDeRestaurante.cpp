#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    for(int i = 0; i < MAX; i++){
        pedidos[i] = Pedido();
    }
}

void MesaDeRestaurante::adicionaAoPedido(Pedido pedido){
    int x = 1, i = 0;
    while(pedidos[i].getNumeroPedido()){
        if(!pedido.getDescricaoPedido().compare(pedidos[i].getDescricaoPedido())){
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() +1);
            x = 0;
            i++;
        }
    }if(x)
        pedidos[i].setPedido(pedido);
}

double MesaDeRestaurante::calculaTotal(){
    double soma = 0;
    int i;

    for(i = 0; i < MAX; i++){
        soma += pedidos[i].getPreco() * pedidos[i].getQuantidade();
        i++;
    }
    return soma;
}

void MesaDeRestaurante::zeraPedidos(){
    int i = 0;
    Pedido pedido = Pedido();
    while(!(pedidos[i].getNumeroPedido() == 0)){
        pedidos[i].setPedido(pedido);
    }
}
