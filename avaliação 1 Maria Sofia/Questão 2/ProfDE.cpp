#include<iostream>
#include <string>
#include "ProfDE.h"

ProfDE::ProfDE(string nome, string matricula, int idade, float salario):
    Professor(nome, matricula, idade){
        setSalario(salario);
}
void ProfDE::setSalario(float salario){
    this->salario = salario;
}
float ProfDE::getSalario(){
    return salario;
}