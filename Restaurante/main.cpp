#include "RestauranteCaseiro.h"

int main(){
    MesaDeRestaurante *mesa1 = new MesaDeRestaurante();
    RestauranteCaseiro *restaurante1 = new RestauranteCaseiro();
    int i, quantidade, numero;
    float preco;
    std::string descricao;

    std::cout << "Digite o numero da mesa: ";
    std::cin >> i;
    std::cout << "Digite o numero do pedido: ";
    std::cin >> numero;
    std::cout << "Digite o preco do prato: ";
    std::cin >> preco;
    std::cout << "Digite a descricao do prato: ";
    std::cin >> descricao;
    std::cout << "Digite a quantidade: ";
    std::cin >> quantidade;

    Pedido pedido1 = Pedido(numero, descricao, quantidade, preco);

    restaurante1->adicionaAoPedido(pedido1, i);
    std::cout << "Total do restaurante: R$" << restaurante1->calculaTotalRestaurante() << std::endl;
    restaurante1->zeraPedidos();

    return 0;
}
