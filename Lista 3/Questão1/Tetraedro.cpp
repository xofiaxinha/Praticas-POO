#include "Tetraedro.h"
#include <cmath>
using namespace std;
Tetraedro::Tetraedro(int aresta, string cor): FormaTridimensional(cor){
    setAresta(aresta);
}
void Tetraedro::setAresta(int aresta){
    this->aresta = aresta;
}
int Tetraedro::getAresta(){
    return aresta;
}
float Tetraedro::calculaArea(){
    float area = (sqrt(3) * aresta * aresta);
    return area;
}
float Tetraedro::calculaVolume(){
    float volume = (sqrt(2) * aresta * aresta * aresta) / 12;
    return volume;
}
void Tetraedro::print(){
    cout << "Aresta: " << getAresta() << endl;
    cout << "Cor: " << getCor() << endl;
    cout << "Area: " << calculaArea() << endl;
    cout << "Volume: " << calculaVolume() << endl;
}