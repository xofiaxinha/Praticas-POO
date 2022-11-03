#include <iostream>
#pragma once
#include <string>
using namespace std;
#include "Veiculo.h"

class VeiculoTerrestre: virtual public Veiculo {
    private:
        int numeroRodas;
        int numeroPortas;
        int numeroMarchas;
    public:
        VeiculoTerrestre(string modelo, string placa, string cor, 
                        int numeroRodas, int numeroPortas, int numeroMarchas);
        void setNumeroRodas(int numeroRodas);
        void setNumeroPortas(int numeroPortas);
        void setNumeroMarchas(int numeroMarchas);
        int getNumeroRodas();
        int getNumeroPortas();
        int getNumeroMarchas();
};