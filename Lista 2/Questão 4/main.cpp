#include <iostream>
#include <string>
#include "Empregado.h"
using namespace std;

int main(){
    Empregado e1("Joao", "Silva", 1000), e2("Maria", "Santos", 2000);
    e1.print();
    cout << '\n';
    e2.print();
    cout << '\n';
    cout << "Adicionando 10% ao salario de cada:\n";
    e1.setSalarioMensal(e1.getSalarioMensal() * 1.1);
    e2.setSalarioMensal(e2.getSalarioMensal() * 1.1);
    e1.print();
    cout << '\n';
    e2.print();
    cout << '\n';
}