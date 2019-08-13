#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro(){
    for(int i; i < MAX; i++){
        mesas[i].zeraPedidos();
    }
}



double RestauranteCaseiro::calculaTotalRestaurante(){
   double somaTotal = 0;
   for(int i = 0; i < MAX; i++){
        somaTotal += mesas[i].calculaTotal();
   }
   return somaTotal;
}


void RestauranteCaseiro::adicionaAoPedido(int numeroPedido, std::string descricaoPedido, int quantidade, double preco){
    int i;
    for(i = 0; i < MAX; i++){
        if(pedidos[i].getNumero() == numeroPedido){
            pedidos[i].setQuantidade( pedidos[i].getQuantidade() + quantidade );
            return;
        }
    }
    pedidos[this->c].setPedido(numeroPedido, descricaoPedido, quantidade, preco);
        this->c++;

}
void RestauranteCaseiro::zeraPedidos(){
    int i = 0;

    while(!(pedidos[i].getNumeroPedido() == 0)){
        pedidos[i].setPedido(0, " ", 0, 0);
    }

}




