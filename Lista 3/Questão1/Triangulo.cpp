#include "Triangulo.h"
#include <iostream>
#include <string>
Triangulo::Triangulo(int base, int altura, string cor): FormaBidimensional(cor){
    setBase(base);
    setAltura(altura);
}
void Triangulo::setBase(int base){
    this->base = base;
}
void Triangulo::setAltura(int altura){
    this->altura = altura;
}
int Triangulo::getBase(){
    return base;
}
int Triangulo::getAltura(){
    return altura;
}
float Triangulo::calculaArea(){
    float area = (base * altura)/2;
    return area;
}
void Triangulo::print(){
    std::cout << "Base do Triangulo: " << getBase() << '\n';
    std::cout << "Altura do Triangulo: " << getAltura() << '\n';
    std::cout << "Area do Triangulo: " << calculaArea() << '\n';
}