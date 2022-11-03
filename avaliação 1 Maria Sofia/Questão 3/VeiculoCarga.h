#pragma once
#include<iostream>
#include "Veiculo.h"
#include <string>
using namespace std;

class VeiculoCarga: virtual public Veiculo{
    private:
        int carga;
    public:
        VeiculoCarga(string, int, int, int);
        float peso_potencia;
        void setCarga(int);
        int getCarga();
        void print();
};