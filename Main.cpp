#include <iostream>
#include <string>
#include "./Elevador.hpp"
#include <windows.h>
using namespace std;


int main(){
    SetConsoleOutputCP(CP_UTF8); //visualização correta dos caracteres no terminal
    Elevador elevador = Elevador();

    cout << "\nIniciando o elevador com a quantidade de pessoas\n" << endl;
    elevador.inicializa(5,3);

    cout << "Quantidade máxima de pessoas no elevador: " << elevador.get_capacidade_elevador() << endl;
    cout << "Quantidade de andares: " << elevador.get_qtd_andares() << endl;
    cout << "\nEnchendo o elevador com a capacidade máxima:" << endl;

    for (int i = 0; i <elevador.get_capacidade_elevador(); i++){
        elevador.entra();
    }

    cout << "\nTentando inserir mais uma pessoa para além da capacidade máxima:" << endl;
    elevador.entra();

    cout << "\nEsvaziando o elevador:" << endl;
    for (int i = elevador.get_capacidade_elevador(); i >0; i--){
        elevador.sai();
    }

    cout << "Tentando retirar uma pessoa do elevador após estar vazio:" << endl;
    elevador.sai();

    cout << "\nSubindo até o último andar:" << endl;
    for (int i = 0; i < elevador.get_qtd_andares(); i++){
        elevador.sobe();
    }

    cout << "\nTentando subir um andar acima do máximo:" <<endl;
    elevador.sobe();

    cout << "\nEsvaziando o elevador:" << endl;
    for (int i = elevador.get_qtd_andares(); i >0; i--){
        elevador.desce();
    }

    cout << "\nTentando descer um andar abaixo do térreo:" << endl;
    elevador.desce();

    return 0;
}