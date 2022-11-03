#include <iostream>
#include <string>
#include <stdlib.h>
#include "VeiculoAnfibio.h"

int main(){
    VeiculoAnfibio va("Fusca", "KKJ-182", "Azul", 4, 4, 2, 4, 4, 3, "Anfibio");
    va.print();
    system("pause");
    return 0;
}