#include <iostream>
#include <string>
#include "FormaBidimensional.h"
FormaBidimensional::FormaBidimensional(){setCor("");}
FormaBidimensional::FormaBidimensional(string cor):
    Forma(cor){
}
float FormaBidimensional::calcularArea(){return 0;}