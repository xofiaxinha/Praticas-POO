#include <iostream>
#include<string>
using namespace std;
#include "ProfHorista.h"

ProfHorista::ProfHorista(string nome, string matricula, int idade, int horas, float salario):
    Professor(nome, matricula, idade){
    setHoras(horas);
    setSalario(salario);
}
void ProfHorista::setHoras(int horas){
    this->totalHoras = horas;
}
void ProfHorista::setSalario(float salario){
    this->salarioHora = salario;
}
int ProfHorista::getHoras(){
    return totalHoras;
}
float ProfHorista::getSalario(){
    return salarioHora;
}