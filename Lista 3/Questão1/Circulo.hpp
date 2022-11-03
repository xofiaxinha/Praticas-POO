#pragma once
#include <iostream>
#include <string>
#include "Formabidimensional.h"
using namespace std;
class Circulo: public FormaBidimensional{
	private:
	    int raio;
	public:
        Circulo(int, string);
        void setRaio(int);
        int getRaio();
        virtual float calculaArea();
        float calculaPerimetro();
        void print();
};