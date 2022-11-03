#include <iostream>
#include "Circulo.h"
using namespace std;
Circulo::Circulo(int r){
	this->raio = r;
}
void Circulo::setRaio(int raio){
	this->raio = raio;
}
int Circulo::getRaio(){
	return raio;
}
float Circulo::calculaArea(){
	float pi = 3.14;
	float area = (pi * raio) * (pi * raio);
	return area;
}
float Circulo::calculaPerimetro(){
	float pi = 3.14;
	float perimetro = 2 * pi * raio;
	return perimetro;
}
void Circulo::print(){
	cout << "Raio do circulo: " << getRaio() << '\n';
	cout << "Area do circulo: " << calculaArea() << '\n';
	cout << "Perimetro do circulo: " << calculaPerimetro() << '\n';
}