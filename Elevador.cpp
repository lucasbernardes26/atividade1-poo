#include <iostream>
#include "./Elevador.hpp"
    
    // Getters
    int Elevador::get_qtd_andares()
    {
        return qtd_andares;
    }
    int Elevador::get_andar_atual()
    {
        return andar_atual;
    }
    int Elevador::get_capacidade_elevador()
    {
        return capacidade_elevador;
    }
    int Elevador::get_pessoas_no_elevador()
    {
        return pessoas_no_elevador;
    }

    // método para inicializar o elevador
    void Elevador::inicializa(int capacidade, int andares)
    {
        capacidade_elevador = capacidade;
        qtd_andares = andares;
        pessoas_no_elevador = 0;
        andar_atual = 0;
    }


    void Elevador::entra()
    {
        // Verifica se a quantidade atual de pessoas já atingiu a capacidade máxima do elevador
        if (pessoas_no_elevador == capacidade_elevador)
        {
            std::cout << "Capacidade total atingida" << std::endl;
        }
        else
        {
            // Caso ainda haja espaço, adiciona uma pessoa ao contador e exibe a mensagem
            pessoas_no_elevador += 1;
            std::cout << "Uma nova pessoa entrou no elevador!" << std::endl;
        }
    }

    void Elevador::sai()
    {
        // Garante que o número de pessoas não fique negativo, verificando se o elevador já está vazio
        if (pessoas_no_elevador == 0)
        {
            std::cout << "Não existe ninguém no elevador." << std::endl;
        }
        else
        {
            // Se houver pelo menos uma pessoa, remove uma do contador
            std::cout << "Uma pessoa saiu do elevador!" << std::endl;
            pessoas_no_elevador -= 1;
        }
    }

    void Elevador::sobe()
    {
        // Impede que o elevador suba além do último andar do prédio
        if (andar_atual == qtd_andares)
        {
            std::cout << "Último andar. Impossível subir!" << std::endl;
        }
        else
        {
            // Se não estiver no último andar, incrementa o andar atual em 1
            std::cout << "Subindo mais um andar..." << std::endl;
            andar_atual += 1;
        }
    }
    void Elevador::desce()
    {
        // Impede que o elevador desça para andares negativos (abaixo do térreo)
        if (andar_atual == 0)
        {
            std::cout << "O Elevador está no térreo. Impossível descer." << std::endl;
        }
        else
        {
            // Se estiver em qualquer andar acima do térreo, decrementa o andar atual em 1
            std::cout << "Descendo um andar.." << std::endl;
            andar_atual -= 1;
        }
    }



    void Elevador::mostrar_informacoes()
    {
        std::cout << "\n--------------- Informações ---------------\n " <<std::endl;
        std::cout << "- Total de andares do prédio: " << qtd_andares << std::endl;
        std::cout << "- Capacidade total do elevador: " << capacidade_elevador << std::endl;
        std::cout << "- Andar atual: " << andar_atual << std::endl;
        std::cout << "- Pessoas no elevador: " << pessoas_no_elevador << "\n"<< std::endl;

    }


