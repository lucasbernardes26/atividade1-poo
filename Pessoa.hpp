#pragma once
#include <string>
#include <vector>
#include "./SerHumano.hpp"

class Pessoa: public SerHumano
{
    private:
        std::string cpf; 

    public:
        void inicializa(std::string n, std::string bdate, bool vivo_ou_morto, std::string cpf);
        std::string get_cpf();

};