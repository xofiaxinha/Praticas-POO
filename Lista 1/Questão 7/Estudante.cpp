#include <iostream>
#include <string>
#include "Estudante.h"
using namespace std;

Estudante::Estudante(string nome, string matricula, string curso){
    setNome(nome);
    setMatricula(matricula);
    setCurso(curso);
}
void Estudante::setNome(string nome){
    this->nome = nome;
}
void Estudante::setMatricula(string matricula){
    this->matricula = matricula;
}
void Estudante::setCurso(string curso){
    this->curso = curso;
}
string Estudante::getNome(){
    return nome;
}
string Estudante::getMatricula(){
    return matricula;
}
string Estudante::getCurso(){
    return curso;
}