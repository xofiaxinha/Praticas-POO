#include <iostream>
#include "ContaPoupanca.h"
using namespace std;

Poupanca::Poupanca(float saldo, float taxa): Conta(saldo){
    setTaxa(taxa);
}
void Poupanca::setTaxa(float){
    this->taxa = taxa;
}
float Poupanca::getTaxa(){
    return taxa;
}
float Poupanca::calculaRendimento(){
    return saldo * taxa;
}