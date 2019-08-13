#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int numeroPedido, std::string descricaoPedido, int quantidade, double preco);
        double calculaTotalRestaurante();
        void zeraPedidos();

    private:
        MesaDeRestaurante mesas[MAX];
        int c;

};

#endif // RESTAURANTECASEIRO_H
