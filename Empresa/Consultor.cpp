#include "Consultor.h"

Consultor::Consultor(){
}

double Consultor::getSalario(){
    return this->salario + (this->salario/10);
}

double Consultor::getSalario(double percentual){
    return this->salario + ((this->salario*percentual)/100);
}
