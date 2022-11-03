#include <iostream>
#include <string>
#include "Aluno.h"
using namespace std;
int Aluno::qtd{0};
Aluno::Aluno(){
    nome = "";
    serie = "";
    grau = "";
}
Aluno::Aluno(string nome, string grau, string serie){
    setNome(nome);
    setGrau(grau);
    setSerie(serie);
    qtd++;
}
void Aluno::setNome(string){
    this->nome = nome;
}
void Aluno::setSerie(string){
    this->serie = serie;
}
void Aluno::setGrau(string){
    this->grau = grau;
}
string Aluno::getNome(){
    return nome;
}
string Aluno::getSerie(){
    return serie;
}
string Aluno::getGrau(){
    return grau;
}
int Aluno::getQtd(){
    return qtd;
}
void Aluno::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Serie: " << getSerie() << endl;
    cout << "Grau: " << getGrau() << endl;
}
Aluno::~Aluno(){
    qtd--;
}