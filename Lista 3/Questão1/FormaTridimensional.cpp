#include "FormaTridimensional.h"
#include <iostream>
#include <string>
using namespace std;
FormaTridimensional::FormaTridimensional(){setCor("");}
FormaTridimensional::FormaTridimensional(string cor):
    Forma(cor){
}
float FormaTridimensional::calcularArea(){return 0;}
float FormaTridimensional::calcularVolume(){return 0;}