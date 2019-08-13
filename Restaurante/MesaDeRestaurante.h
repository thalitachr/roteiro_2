#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#define MAX 255

class MesaDeRestaurante{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(int i, int numeroPedido, std::string descricaoPedido, int quantidade, double preco);
        void zeraPedidos();
        double calculaTotal();

    private:
        Pedido pedidos[MAX];
        int c;

};

#endif // MESADERESTAURANTE_H
