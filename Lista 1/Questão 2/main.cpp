#include<iostream>
#include<stdlib.h>
#include "CarroPasseio.h"
int main(){
    CarroPasseio carro1(4, 1.5, 1000, 200, 50000, "Gol", "Vermelho");
    carro1.print();
    system("pause");
    return 0;
}