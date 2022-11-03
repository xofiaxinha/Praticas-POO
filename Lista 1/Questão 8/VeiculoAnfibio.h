#pragma once
#include<iostream>
#include<string>
using namespace std;
#include "VeiculoAquatico.h"
#include "VeiculoTerrestre.h"

class VeiculoAnfibio: virtual public VeiculoAquatico, VeiculoTerrestre{
    private:
        string tipo;
    public:
        VeiculoAnfibio(string modelo, string placa, string cor, 
                        int numeroPas, int numeroCilindros, int numeroTurbinas, 
                        int numeroPortas, int numeroRodas, int numeroMarchas, 
                        string tipo);
        void setTipo(string tipo);
        string getTipo();
        void print();
};