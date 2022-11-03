#include<iostream>
#include<string>
using namespace std;
#include "VeiculoAnfibio.h"

VeiculoAnfibio::VeiculoAnfibio(string modelo, string placa, string cor, 
                        int numeroPas, int numeroCilindros, int numeroTurbinas, 
                        int numeroPortas, int numeroRodas, int numeroMarchas, 
                        string tipo):
                Veiculo(modelo, placa, cor),
                VeiculoAquatico(modelo, placa, cor, numeroPas, numeroCilindros, numeroTurbinas),
                VeiculoTerrestre(modelo, placa, cor, numeroRodas, numeroPortas, numeroMarchas){
    setTipo(tipo);
}
void VeiculoAnfibio::setTipo(string tipo){
    this->tipo = tipo;
}
string VeiculoAnfibio::getTipo(){
    return tipo;
}
void VeiculoAnfibio::print(){
    cout << "Modelo: " << getModelo() << endl;
    cout << "Placa: " << getPlaca() << endl;
    cout << "Cor: " << getCor() << endl;
    cout << "Numero de Pas: " << getNumeroPas() << endl;
    cout << "Numero de Cilindros: " << getNumeroCilindros() << endl;
    cout << "Numero de Turbinas: " << getnumeroTurbinas() << endl;
    cout << "Numero de Portas: " << getNumeroPortas() << endl;
    cout << "Numero de Rodas: " << getNumeroRodas() << endl;
    cout << "Numero de Marchas: " << getNumeroMarchas() << endl;
    cout << "Tipo: " << getTipo() << endl;
}