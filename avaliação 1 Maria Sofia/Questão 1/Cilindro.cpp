#include <iostream>
#include "Cilindro.h"
using namespace std;
Cilindro::Cilindro(int raio, int base, int altura):
    Circulo(raio), Retangulo(base, altura){
}
float Cilindro::calculaArea(){
	float area = Circulo::calculaArea() + (getAltura() * Retangulo::calculaArea());
	return area;
}
float Cilindro::calculaVolume(){
	float pi = 3.14;
	float volume = pi * getRaio() * getAltura();
	return volume;
}
void Cilindro::print(){
	Circulo::print();
	Retangulo::print();
	cout << "Area do cilindro: " << calculaArea() << '\n';
	cout << "Volume do cilindro: " << calculaVolume() << '\n';
}