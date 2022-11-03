#include<iostream>
using namespace std;
#include "CarroPasseio.h"
CarroPasseio::CarroPasseio(){
    modelo = "";
    cor = "";
}
CarroPasseio::CarroPasseio(int numCilindros, float potencia, float peso, float velocidadeMaxima, 
                            float preco, string modelo, string cor):
                            Motor(numCilindros, potencia), 
                            Veiculo(peso, velocidadeMaxima, preco){
    setModelo(modelo);
    setCor(cor);
}
void CarroPasseio::setModelo(string modelo){
    this->modelo = modelo;
}
void CarroPasseio::setCor(string cor){
    this->cor = cor;
}
string CarroPasseio::getModelo(){
    return modelo;
}
string CarroPasseio::getCor(){
    return cor;
}
void CarroPasseio::print(){
    cout << "Modelo: " << getModelo() << '\n';
    cout << "Cor: " << getCor() << '\n';
    Motor::print();
    Veiculo::print();
}