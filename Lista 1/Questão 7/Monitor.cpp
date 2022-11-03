#include <iostream>
#include <string>
#include "Monitor.h"
using namespace std;

Monitor::Monitor(string nome, float salario, string turno, string RG,
        string matricula, string curso,
        string disciplina, int cargaHoraria):Estudante(nome, matricula, curso),
            Funcionario(nome, salario, turno, RG){
            setDisciplina(disciplina);
            setCargaHoraria(cargaHoraria);
                }
void Monitor::setDisciplina(string disciplina){
    this->disciplina = disciplina;
}
void Monitor::setCargaHoraria(int cargaHoraria){
    this->cargaHoraria = cargaHoraria;
}
string Monitor::getDisciplina(){
    return disciplina;
}
int Monitor::getCargaHoraria(){
    return cargaHoraria;
}
void Monitor::print(){
    cout << "Nome: " << Estudante::getNome() << '\n';
    cout << "Matricula: " << getMatricula() << '\n';
    cout << "Curso: " << getCurso() << '\n';
    cout << "Salario: " << getSalario() << '\n';
    cout << "Turno: " << getTurno() << '\n';
    cout << "RG: " << getRG() << '\n';
    cout << "Disciplina: " << getDisciplina() << '\n';
    cout << "Carga Horaria: " << getCargaHoraria() << '\n';
}