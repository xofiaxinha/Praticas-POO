#include <iostream>
#include <string>
#include "Forma.h"
Forma::Forma(){this->cor = "";}
Forma::Forma(string cor){this->cor = cor;}
string Forma::getCor(){return cor;}
void Forma::setCor(string cor){this->cor = cor;}
float Forma::calcularArea(){return 0;}
float Forma::calcularVolume(){return 0;}