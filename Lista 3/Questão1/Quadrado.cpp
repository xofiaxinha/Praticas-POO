#include<iostream>
#include "Quadrado.h"
using namespace std;
Quadrado::Quadrado(int base, string cor): FormaBidimensional(cor){
	setLado(base);
}
void Quadrado::setLado(int base){
	this->lado = base;
}
float Quadrado::calculaArea(){
	float area = lado * lado;
	return area;
}
int Quadrado::calculaPerimetro(){
	int perimetro = 4*lado;
}
int Quadrado::getLado(){
    return lado;
}
void Quadrado::print(){
	cout << "Lado do Quadrado: " << getLado() << '\n';
	cout << "Area do Quadrado: " << calculaArea() << '\n';
	cout << "Perimetro do Quadrado: " << calculaPerimetro() << '\n';
}