#include<iostream>
//#include<iomanip>
using namespace std;
#include "Motor.h"
Motor::Motor(){
    numCilindros = 0;
    potencia = 0;
}
Motor::Motor(int numCilindros, float potencia){
    setNumCilindros(numCilindros);
    setPotencia(potencia);
}
void Motor::setNumCilindros(int numCilindros){
    this->numCilindros = numCilindros;
}
void Motor::setPotencia(float potencia){
    this->potencia = potencia;
}
int Motor::getNumCilindros(){
    return numCilindros;
}
float Motor::getPotencia(){
    return potencia;
}
void Motor::print(){
    cout << "Número de cilindros: " << numCilindros << '\n';
    cout << "Potência: " << potencia << '\n';
}