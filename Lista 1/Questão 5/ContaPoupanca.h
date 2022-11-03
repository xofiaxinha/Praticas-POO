#pragma once
#include <iostream>
#include "Conta.h"
using namespace std;

class Poupanca: public Conta{
    private:
        float taxa;
    public:
        Poupanca(float, float);
        void setTaxa(float);
        float getTaxa();
        float calculaRendimento();
};