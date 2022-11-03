#include <iostream>
#include "Circulo.h"
#include "Retangulo.h"

class Cilindro: public Circulo, Retangulo{
	public:
    Cilindro(int, int, int);
	float calculaArea();
	float calculaVolume();
	void print();
};