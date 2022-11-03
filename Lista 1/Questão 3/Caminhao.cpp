#include <iostream>
#include <string>   
#include "Caminhao.h"
using namespace std;

Caminhao::Caminhao(float peso, float velocidadeMaxima, float preco,
    int numCilindros, float potencia, int toneladas, 
    int alturaMaxima, int comprimento):
    Veiculo(peso, velocidadeMaxima, preco), Motor(numCilindros, potencia){
        this->toneladas = toneladas;
        this->alturaMaxima = alturaMaxima;
        this->comprimento = comprimento;
}
void Caminhao::setToneladas(int toneladas){
    this->toneladas = toneladas;
}
void Caminhao::setAlturaMaxima(int alturaMaxima){
    this->alturaMaxima = alturaMaxima;
}
void Caminhao::setComprimento(int comprimento){
    this->comprimento = comprimento;
}
int Caminhao::getToneladas(){
    return toneladas;
}
int Caminhao::getAlturaMaxima(){
    return alturaMaxima;
}
int Caminhao::getComprimento(){
    return comprimento;
}
void Caminhao::print(){
    cout << "Peso do Caminhao: " << getToneladas() << " toneladas\n";
    cout << "Velocidade Maxima do Caminhao: " << getVelocidadeMaxima() << " km/h" << '\n';
    cout << "Preco do Caminhao: " << getPreco() << " R$ \n";
    cout << "Numero de cilindros do motor: " << getNumCilindros() << '\n';
    cout << "Potencia do motor: " << getPotencia() << '\n';
    cout << "Altura maxima do caminhao: " << getAlturaMaxima() << " metros" << '\n';
    cout << "Comprimento do caminhao: " << getComprimento() << " metros" << '\n';
}