#include <iostream>
#include <string>
using namespace std;
#include "VeiculoAquatico.h"

VeiculoAquatico::VeiculoAquatico(string modelo, string placa, string cor, 
            int numeroPas, int numeroCilindros, int numeroTurbinas):
            Veiculo(modelo, placa, cor){
            setNumeroPas(numeroPas);
            setNumeroCilindros(numeroCilindros);
            setNumeroTurbinas(numeroTurbinas);
}
void VeiculoAquatico::setNumeroPas(int numeroPas){
    this->numeroPas = numeroPas;
}
void VeiculoAquatico::setNumeroCilindros(int numeroCilindros){
    this->numeroCilindros = numeroCilindros;
}
void VeiculoAquatico::setNumeroTurbinas(int numeroTurbinas){
    this->numeroTurbinas = numeroTurbinas;
}
int VeiculoAquatico::getNumeroPas(){
    return numeroPas;
}
int VeiculoAquatico::getNumeroCilindros(){
    return numeroCilindros;
}
int VeiculoAquatico::getnumeroTurbinas(){
    return numeroTurbinas;
}