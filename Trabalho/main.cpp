#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

int main()
{
    TrabalhadorAssalariado pessoa1 = TrabalhadorAssalariado("Maria ", 1876.08);
    TrabalhadorPorHora pessoa2 =  TrabalhadorPorHora("Cleiton ", 23.05);

    std::cout << "Informacoes trabalhador assalariado: " << std::endl;
    std::cout << "Nome: " << pessoa1.getNome() << std::endl;
    std::cout << "Salario Mensal: " << pessoa1.getSalario() << std::endl;
    std::cout << "Salario Semanal: " << pessoa1.calcularPagamentoSemanal() << std::endl << std::endl;

    std::cout << "Informacoes trabalhador por hora: " << std::endl;
    std::cout << "Nome: " << pessoa2.getNome() << std::endl;
    std::cout << "Valor hora: " << pessoa2.getValorHoras() << std::endl;
    std::cout << "Salario Semanal, com 45 horas semanais: " << pessoa2.calcularPagamentoSemanal(45) << std::endl;



    return 0;
}
