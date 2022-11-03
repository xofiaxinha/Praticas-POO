#include <iostream>
#include <string>
#include "Esfera.h"
using namespace std;
Esfera::Esfera(int raio, string cor): FormaTridimensional(cor){
    setRaio(raio);
}
void Esfera::setRaio(int raio){
    this->raio = raio;
}
int Esfera::getRaio(){
    return raio;
}
float Esfera::calculaArea(){
    float area = 4 * 3.14 * (raio * raio);
    return area;
}
float Esfera::calculaVolume(){
    float volume = (4 * 3.14 * (raio * raio * raio)) / 3;
    return volume;
}
void Esfera::print(){
    cout << "Raio: " << getRaio() << endl;
    cout << "Cor: " << getCor() << endl;
    cout << "Area: " << calculaArea() << endl;
    cout << "Volume: " << calculaVolume() << endl;
}