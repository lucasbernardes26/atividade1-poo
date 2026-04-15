#include <iostream>
#include<string>
#include "./Pessoa.hpp"

std::string Pessoa::get_cpf(){
    return cpf;
}

// Sobrecarga do método inicializa, adicionando o atributo cpf da classe pessoa
void Pessoa::inicializa(std::string n, std::string bdate, bool vivo_ou_morto, std::string cpf){
    SerHumano::inicializa(n, bdate, vivo_ou_morto);
    Pessoa::cpf = cpf;
}


