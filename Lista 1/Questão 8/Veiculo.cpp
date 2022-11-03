#include <iostream>
#include <string>
#include "Veiculo.h"
using namespace std;
Veiculo::Veiculo(string modelo, string placa, string cor){
    this->modelo = modelo;
    this->placa = placa;
    this->cor = cor;
}
void Veiculo::setModelo(string modelo){
    this->modelo = modelo;
}
void Veiculo::setPlaca(string placa){
    this->placa = placa;
}
void Veiculo::setCor(string cor){
    this->cor = cor;
}
string Veiculo::getModelo(){
    return modelo;
}
string Veiculo::getPlaca(){
    return placa;
}
string Veiculo::getCor(){
    return cor;
}