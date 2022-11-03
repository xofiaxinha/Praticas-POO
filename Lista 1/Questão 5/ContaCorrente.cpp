#include <iostream>
using namespace std;
#include "ContaCorrente.h"
Corrente::Corrente(float saldo, float taxa): Conta(saldo){
    setTaxa(taxa);
}
void Corrente::setTaxa(float){
    this->taxa = taxa;
}
float Corrente::getTaxa(){
    return taxa;
}
void Corrente::credito(float valor){
    saldo += valor;
    saldo -= taxa;
}
void Corrente::debito(float valor){
    int aux = saldo - valor;
    if (aux < 0){
        cout << "Saldo insuficiente" << endl;
    }else saldo = aux;
    saldo -= taxa;
}