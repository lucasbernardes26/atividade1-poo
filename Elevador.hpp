#pragma once

class Elevador {

private:
    int qtd_andares;
    int andar_atual;
    int capacidade_elevador;
    int pessoas_no_elevador;
    

public:
    Elevador(){}
    // Getters
    int get_qtd_andares();
    int get_andar_atual();
    int get_capacidade_elevador();
    int get_pessoas_no_elevador();

    void inicializa(int capacidade, int andares);
    void entra();
    void sai();
    void sobe();
    void desce();
    void mostrar_informacoes();
};
