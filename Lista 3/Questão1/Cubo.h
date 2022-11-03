#pragma once
#include <iostream>
#include <string>
#include "FormaTridimensional.h"
using namespace std;
class Cubo: public FormaTridimensional{
    private:
        int aresta;
    public:
        Cubo(int, string);
        void setAresta(int);
        int getAresta();
        virtual float calculaArea();
        virtual float calculaVolume();
        void print();
};