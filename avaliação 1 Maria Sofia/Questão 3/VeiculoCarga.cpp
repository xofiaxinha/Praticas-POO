#include<iostream>
#include<string>
using namespace std;
#include "VeiculoCarga.h"

VeiculoCarga::VeiculoCarga(string nome, int peso, int potencia, int carga):
    Veiculo(nome, peso, potencia){
        setCarga(carga);
        if(potencia == 0){}
        else {
            peso_potencia = (float)peso / potencia;
        }
}
void VeiculoCarga::setCarga(int carga){
    this->carga = carga;
}
int VeiculoCarga::getCarga(){
    return carga;
}
void VeiculoCarga::print(){
    cout << "Carga do veiculo: " << getCarga() << '\n';
}