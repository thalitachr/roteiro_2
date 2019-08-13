#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>


class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        double calcularArea(double base, double altura);

    protected:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
