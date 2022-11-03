#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "FormaTridimensional.h"
class Esfera: public FormaTridimensional{
    private:
        int raio;
    public:
        Esfera(int, string);
        void setRaio(int);
        int getRaio();
        virtual float calculaArea();
        virtual float calculaVolume();
        void print();
};