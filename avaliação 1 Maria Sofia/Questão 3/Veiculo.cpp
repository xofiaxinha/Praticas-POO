#include <iostream>
#include "Veiculo.h"
using namespace std;
Veiculo::Veiculo(string nome, int peso, int potencia){
    setNome(nome);
    setPeso(peso);
    setPotencia(potencia);
}
void Veiculo::setNome(string nome){
    this->nome = nome;
}
void Veiculo::setPeso(int peso){
    this->peso = peso;
}
void Veiculo::setPotencia(int potencia){
    this->potencia = potencia;
}
string Veiculo::getNome(){
    return nome;
}
int Veiculo::getPeso(){
    return peso;
}
int Veiculo::getPotencia(){
    return potencia;
}
void Veiculo::print(){
    cout << "Nome do veiculo: " << getNome() << '\n';
    cout << "Peso do veiculo: " << getPeso() << '\n';
    cout << "Potencia do veiculo: " << getPotencia() << '\n';
}