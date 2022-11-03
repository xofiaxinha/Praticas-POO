#include<iostream>
#include<string>
#include "Humano.h"
using namespace std;
Humano::Humano(string nome, string sexo, int idade, string lingua, string etnia){
    setNome(nome);
    setSexo(sexo);
    setIdade(idade);
    setLingua(lingua);
    setEtnia(etnia);
}
string Humano::getNome(){
    return nome;
}
string Humano::getSexo(){
    return sexo;
}
int Humano::getIdade(){
    return idade;
}
string Humano::getLingua(){
    return lingua;
}
string Humano::getEtnia(){
    return etnia;
}
void Humano::setNome(string nome){
    this->nome = nome;
}
void Humano::setSexo(string sexo){
    this->sexo = sexo;
}
void Humano::setIdade(int idade){
    this->idade = idade;
}
void Humano::setLingua(string lingua){
    this->lingua = lingua;
}
void Humano::setEtnia(string etnia){
    this->etnia = etnia;
}