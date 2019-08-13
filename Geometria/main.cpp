#include <iostream>
#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"


int main()
{
    Quadrado box = Quadrado();
    Triangulo pyramid = Triangulo();
    Circulo ball = Circulo();
    double a, b;

    std::cout << "Digite a base do quadrado: ";
    std::cin >> a;
    std::cout << "Digite a altura do quadrado: ";
    std::cin >> b;
    std::cout << "A area do quadrado eh: " << box.calcularArea(a, b) << std::endl << std::endl;

    std::cout << "Digite a base do triangulo: ";
    std::cin >> a;
    std::cout << "Digite a altura do triangulo: ";
    std::cin >> b;
    std::cout << "A area do triangulo eh: " << pyramid.calcularArea(a, b) << std::endl << std::endl;

    std::cout << "Digite o raio do circulo: ";
    std::cin >> a;
    std::cout << "A area do circulo eh: " << ball.calcularArea(a) << std::endl << std::endl;
    return 0;
}
