#include <iostream>
#include <string>
#include "Circulo.hpp"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Cubo.h"
#include "Esfera.h"
#include "Tetraedro.h"
using namespace std;
int main(){
    Circulo c1(5, "Azul");
    Quadrado q1(5, "Vermelho");
    Triangulo t1(5, 3, "Verde");
    Cubo cu1(5, "Amarelo");
    Esfera e1(5, "Roxo");
    Tetraedro te1(5, "Preto");
    c1.print();
    q1.print();
    t1.print();
    cu1.print();
    e1.print();
    te1.print();
    return 0;
}