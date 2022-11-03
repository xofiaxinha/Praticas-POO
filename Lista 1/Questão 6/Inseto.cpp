#include <iostream>
#include <string>
#include "Inseto.h"
using namespace std;
Inseto::Inseto(string nome, bool venenoso, bool alado, bool ferrao){
    setNome(nome);
    setVenenoso(venenoso);
    setAlado(alado);
    setFerrao(ferrao);
}
string Inseto::getNome(){
    return nome;
}
bool Inseto::getVenenoso(){
    return venenoso;
}
bool Inseto::getAlado(){
    return alado;
}
bool Inseto::getFerrao(){
    return ferrao;
}
void Inseto::setNome(string nome){
    this->nome = nome;
}
void Inseto::setVenenoso(bool venenoso){
    this->venenoso = venenoso;
}
void Inseto::setAlado(bool alado){
    this->alado = alado;
}
void Inseto::setFerrao(bool ferrao){
    this->ferrao = ferrao;
}