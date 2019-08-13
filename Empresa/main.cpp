#include <iostream>
#include "Consultor.h"

int main()
{
    Funcionario pessoa1 = Funcionario();
    Consultor pessoa2 = Consultor();
    int matricula;
    std::string nome;
    double salario, aumento;

    std::cout << "Digite a matricula do funcionario: ";
    std::cin >> matricula;
    pessoa1.setMatricula(matricula);
    std::cout << "Digite o salario do funcionario: ";
    std::cin >> salario;
    pessoa1.setSalario(salario);
    std::cout << "Digite o nome do funcionario: ";
    std::cin >> nome;
    pessoa1.setNome(nome);

    std::cout << "\n\nDADOS DO FUNCIONARIO: \n" << std::endl;
    std::cout << "Nome: " << pessoa1.getNome() <<std::endl;
    std::cout << "Matricula: " << pessoa1.getMatricula() << std::endl;
    std::cout << "Salario: R$" << pessoa1.getSalario() << std::endl;


    std::cout << "Digite a matricula do consultor: ";
    std::cin >> matricula;
    pessoa2.setMatricula(matricula);
    std::cout << "Digite o salario do consultor: ";
    std::cin >> salario;
    pessoa2.setSalario(salario);
    std::cout << "Digite o nome do consultor: ";
    std::cin >> nome;
    pessoa2.setNome(nome);

    std::cout << "\n\nDADOS DO CONSULTOR: \n" << std::endl;
    std::cout << "Nome: " << pessoa2.getNome() <<std::endl;
    std::cout << "Matricula: " << pessoa2.getMatricula() << std::endl;
    std::cout << "Salario: R$" << pessoa2.getSalario() << std::endl;

    std::cout << "Salario do consultor passa a ser R$ " << pessoa2.getSalario(20) << " caso tenha um aumento de 20%" << std::endl;
    return 0;
}
