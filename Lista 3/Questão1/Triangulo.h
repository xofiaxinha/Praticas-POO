#pragma once
#include "FormaBidimensional.h"
#include <iostream>
#include <string>
using namespace std;
class Triangulo: public FormaBidimensional{
    private:
        int base;
        int altura;
    public:
        Triangulo(int, int, string);
        void setBase(int);
        void setAltura(int);
        int getBase();
        int getAltura();
        virtual float calculaArea();
        void print();
};