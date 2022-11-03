#pragma once
#include<iostream>
#include "Veiculo.h"

class VeiculoPasseio: virtual public Veiculo{
    private:
        int volumeInterno;
    public:
        void setVolume();
        int getVolume();
        float peso_potencia;
        void print();
};