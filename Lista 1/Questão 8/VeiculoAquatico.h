#include <iostream>
#pragma once
#include <string>
using namespace std;
#include "Veiculo.h"

class VeiculoAquatico: virtual public Veiculo {
    private:
        int numeroPas;
        int numeroCilindros;
        int numeroTurbinas;
    public:
        VeiculoAquatico(string modelo, string placa, string cor, 
                        int numeroPas, int numeroCilindros, int numeroTurbinas);
        void setNumeroPas(int numeroPas);
        void setNumeroCilindros(int numeroCilindros);
        void setNumeroTurbinas(int numeroTurbinas);
        int getNumeroPas();
        int getNumeroCilindros();
        int getnumeroTurbinas();
};