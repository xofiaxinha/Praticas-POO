#include<iostream>
#include "Retangulo.h"
using namespace std;
Retangulo::Retangulo(int base, int altura){
	setBase(base);
	setAltura(altura);
}
void Retangulo::setBase(int base){
	this->base = base;
}
void Retangulo::setAltura(int altura){
	this->altura = altura;
}
int Retangulo::calculaArea(){
	int area = base * altura;
	return area;
}
int Retangulo::calculaPerimetro(){
	int perimetro = 2 * (base + altura);
}
int Retangulo::getBase(){
    return base;
}
int Retangulo::getAltura(){
    return altura;
}
void Retangulo::print(){
	cout << "Base do retangulo: " << getBase() << '\n';
	cout << "Altura do retangulo: " << getAltura() << '\n';
	cout << "Area do retangulo: " << calculaArea() << '\n';
	cout << "Perimetro do retangulo: " << calculaPerimetro() << '\n';
}