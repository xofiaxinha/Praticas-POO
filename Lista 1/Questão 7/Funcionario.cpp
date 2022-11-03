#include <iostream>
#include <string>
#include "Funcionario.h"
using namespace std;

Funcionario::Funcionario(string nome, float salario, string turno, string RG){
    setNome(nome);
    setSalario(salario);
    setTurno(turno);
    setRG(RG);
}
void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setSalario(float salario){
    this->salario = salario;
}
void Funcionario::setTurno(string turno){
    this->turno = turno;
}
void Funcionario::setRG(string RG){
    this->RG = RG;
}
string Funcionario::getNome(){
    return nome;
}
float Funcionario::getSalario(){
    return salario;
}
string Funcionario::getTurno(){
    return turno;
}
string Funcionario::getRG(){
    return RG;
}