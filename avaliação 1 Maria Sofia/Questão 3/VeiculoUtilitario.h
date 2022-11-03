#pragma once
#include<iostream>
#include<string>
#include "VeiculoPasseio.h"
#include "VeiculoCarga.h"

class VeiculoUtilitario: public VeiculoPasseio, VeiculoCarga{
    public:
        float peso_potencia;
        void print();
};