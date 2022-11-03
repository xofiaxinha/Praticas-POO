#include <iostream>
#include <string>
#include "Empregado.h"
using namespace std;

Empregado::Empregado(string nome, string sobrenome, float salarioMensal){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalarioMensal(salarioMensal);
}
void Empregado::setNome(string nome){
    this->nome = nome;
}
void Empregado::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}
void Empregado::setSalarioMensal(float salarioMensal){
    this->salarioMensal = salarioMensal;
}
string Empregado::getNome(){
    return nome;
}
string Empregado::getSobrenome(){
    return sobrenome;
}
float Empregado::getSalarioMensal(){
    return salarioMensal;
}
float Empregado::getSalarioAnual(){
    return salarioMensal * 12;
}
void Empregado::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Sobrenome: " << getSobrenome() << endl;
    cout << "Salario mensal: " << getSalarioMensal() << endl;
    cout << "Salario anual: " << getSalarioAnual() << endl;
}