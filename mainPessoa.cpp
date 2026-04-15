#include <iostream>
#include <string>
#include "./SerHumano.hpp"
#include "./Pessoa.hpp"
#include <windows.h>
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8); //visualização correta dos caracteres no terminal
    cout << "Criando um obj SerHumano vivo e executando as ações: " << endl;
    SerHumano ser_humano_vivo = SerHumano();
    ser_humano_vivo.inicializa("André", "01/01/2000", true);
    cout << "Informações do ser humano: " << endl;
    cout << "Nome: " << ser_humano_vivo.get_nome() << endl;
    cout << "Data de nascimento: " << ser_humano_vivo.get_data_nascimento() << endl;
    cout << "Vivo ou morto?: " << (ser_humano_vivo.get_esta_vivo() ? "vivo" : "morto") << endl;
    ser_humano_vivo.andar();
    ser_humano_vivo.falar();


    cout << "\nCriando um obj SerHumano morto e executando as ações:" << endl;
    SerHumano ser_humano_morto = SerHumano();
    ser_humano_morto.inicializa("Ana", "02/06/1980", false);
    cout << "Informações do ser humano: " << endl;
    cout << "Nome: " << ser_humano_morto.get_nome() << endl;
    cout << "Data de nascimento: " << ser_humano_morto.get_data_nascimento() << endl;
    cout << "Vivo ou morto?: " << (ser_humano_morto.get_esta_vivo() ? "vivo" : "morto") << endl;
    ser_humano_morto.andar();
    ser_humano_morto.falar();

    cout << "\nCriando um obj Pessoa vivo e executando as ações (métodos da classe pai):" << endl;
    Pessoa pessoa_viva = Pessoa();
    pessoa_viva.inicializa("Márcio", "30/04/2005", true, "111.222.333-44");
    cout << "Informações da Pessoa viva: " << endl;
    cout << "Nome: " << pessoa_viva.get_nome() << endl;
    cout << "Data de nascimento: " << pessoa_viva.get_data_nascimento() << endl;
    cout << "Vivo ou morto?: " << (pessoa_viva.get_esta_vivo() ? "vivo" : "morto") << endl;
    cout << "CPF: " << pessoa_viva.get_cpf() << endl;
    pessoa_viva.andar();
    pessoa_viva.falar();

    cout << "\nCriando um obj Pessoa morto e executando as ações (métodos da classe pai):" << endl;
    Pessoa pessoa_morta = Pessoa();
    pessoa_morta.inicializa("Luana", "28/09/1970", false, "555.666.777-88");
    cout << "Informações da Pessoa morta: " << endl;
    cout << "Nome: " << pessoa_morta.get_nome() << endl;
    cout << "Data de nascimento: " << pessoa_morta.get_data_nascimento() << endl;
    cout << "Vivo ou morto?: " << (pessoa_morta.get_esta_vivo() ? "vivo" : "morto") << endl;
    cout << "CPF: " << pessoa_morta.get_cpf() << endl;
    pessoa_morta.andar();
    pessoa_morta.falar();

    return 0;
}