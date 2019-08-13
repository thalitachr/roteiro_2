#include <iostream>
#include "Pessoa.h"

int main()
{
    Endereco home = Endereco("Rua Joaquim Topzera", "66", "Centro", "Varzea", "Paraiba", "58620000");
    Pessoa pessoa1 = Pessoa("Cleiton");
    Pessoa pessoa2 = Pessoa("Josymari", "99972-9643", home);

    std::string nome, telefone, rua, numero, bairro, cidade, estado, cep;

    std::cout << "Digite o novo nome de Cleiton: ";
    std::cin >> nome;
    pessoa1.setNome(nome);
    std::cout << "Digite o telefone de " << pessoa1.getNome() << ": ";
    std::cin >> telefone;
    pessoa1.setTelefone(telefone);
    std::cout << pessoa1.getNome() <<" mora com Josymari.\nEndereco:" <<std::endl;
    std::cout <<home.toString(home.getRua(), home.getNumero(), home.getBairro(), home.getCidade(), home.getEstado(), home.getCep()) << std::endl;

}
