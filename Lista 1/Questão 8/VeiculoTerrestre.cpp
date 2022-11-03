#include <iostream>
#include <string>
using namespace std;
#include "VeiculoTerrestre.h"

VeiculoTerrestre::VeiculoTerrestre(string modelo, string placa, string cor, 
                        int numeroRodas, int numeroPortas, int numeroMarchas):
                        Veiculo(modelo, placa, cor){
    this->numeroRodas = numeroRodas;
    this->numeroPortas = numeroPortas;
    this->numeroMarchas = numeroMarchas;
}
void VeiculoTerrestre::setNumeroRodas(int numeroRodas){
    this->numeroRodas = numeroRodas;
}
void VeiculoTerrestre::setNumeroPortas(int numeroPortas){
    this->numeroPortas = numeroPortas;
}
void VeiculoTerrestre::setNumeroMarchas(int numeroMarchas){
    this->numeroMarchas = numeroMarchas;
}
int VeiculoTerrestre::getNumeroRodas(){
    return numeroRodas;
}
int VeiculoTerrestre::getNumeroPortas(){
    return numeroPortas;
}
int VeiculoTerrestre::getNumeroMarchas(){
    return numeroMarchas;
}