#include<iostream>
#include"Conta.h"
using namespace std;

Conta::Conta(float saldo){
    this->saldo = saldo;
}
void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}
float Conta::getSaldo(){
    return saldo;
}
void Conta::credito(float valor){
    this->saldo += valor;
}
void Conta::debito(float valor){
    int aux = saldo - valor;
    if (aux < 0){
        cout << "Saldo insuficiente" << endl;
    }
    else saldo = aux;
}