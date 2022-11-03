#include <iostream>
#include "Cubo.h"
#include <string>
using namespace std;
Cubo::Cubo(int aresta, string cor): FormaTridimensional(cor){
    setAresta(aresta);
}
void Cubo::setAresta(int aresta){
    this->aresta = aresta;
}
int Cubo::getAresta(){
    return aresta;
}
float Cubo::calculaArea(){
    float area = 6 * (aresta * aresta);
    return area;
}
float Cubo::calculaVolume(){
    float volume = aresta * aresta * aresta;
    return volume;
}
void Cubo::print(){
    cout << "Aresta: " << getAresta() << endl;
    cout << "Cor: " << getCor() << endl;
    cout << "Area: " << calculaArea() << endl;
    cout << "Volume: " << calculaVolume() << endl;
}