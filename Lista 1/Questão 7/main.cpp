#include <iostream>
#include <string>
#include "Monitor.h"
using namespace std;

int main(){
    Monitor m1("Joao", 1000, "Manha", "123456789", "123456", "Engenharia", "POO", 40);
    m1.print();
    return 0;
}