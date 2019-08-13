#include "RestauranteCaseiro.h"


int main()
{
    RestauranteCaseiro restaurante1 = RestauranteCaseiro();
    MesaDeRestaurante mesa1 = MesaDeRestaurante();
    Pedido pedido1 = Pedido();
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

    restaurante1.adicionaAoPedido(numero, descricao, quantidade, preco);
    std::cout << "Total da mesa: R$" << restaurante1.calculaTotalRestaurante() << std::endl;
    restaurante1.zeraPedidos();
}

