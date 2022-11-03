#pragma once
#include <iostream>
#include <string>
#include "FormaTridimensional.h"
using namespace std;
class Tetraedro: public FormaTridimensional{
    private:
        int aresta;
    public:
        Tetraedro(int, string);
        void setAresta(int);
        int getAresta();
        virtual float calculaArea();
        virtual float calculaVolume();
        void print();
};