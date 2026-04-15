#include <iostream>
#include <string>
#include "./SerHumano.hpp"

//Getters
std::string SerHumano::get_nome(){
    return nome;
}
std::string SerHumano:: get_data_nascimento(){
    return data_nascimento;
}
bool SerHumano::get_esta_vivo(){
    return esta_vivo;
}

void SerHumano::inicializa(std::string n, std::string bdate, bool vivo_ou_morto){
    nome = n;
    data_nascimento = bdate;
    esta_vivo = vivo_ou_morto;
}

void SerHumano::falar(){
    // validação para saber se o usuário está vivo. se estiver, executa a ação falar
    if(esta_vivo){
        std::cout <<"O ser humano falou!" <<std::endl;
    } else{
        std::cout <<"O ser humano não está vivo. Não pode falar!" <<std::endl;
    }
    
}

void SerHumano::andar(){
    // validação para saber se o usuário está vivo. se estiver, executa a ação andar
    if(esta_vivo){
        std::cout <<"O ser humano andou do ponto A para o ponto B!" <<std::endl;
    } else{
        std::cout <<"O ser humano não está vivo. Não pode andar!" <<std::endl;
    }
    
}