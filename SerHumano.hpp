#pragma once
#include <string>
class SerHumano
{ 
    // Mudança na classe SerHumano para que os atributos possam ser herdados pela classe filha
    protected:
        std::string nome;
        std::string data_nascimento;
        bool esta_vivo;
    
    public:
        std::string get_nome();
        std::string get_data_nascimento();
        bool get_esta_vivo();

        
        virtual void inicializa(std::string n, std::string bdate, bool vivo_ou_morto);
        void andar();
        void falar();

};