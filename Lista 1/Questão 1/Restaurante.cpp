#include<iostream>
#include<string>
using namespace std;
//#include "Empresa.h"
#include "Restaurante.h"
Restaurante::Restaurante(){
    tipo = "";
    preco = "";
}
Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, 
    string cep, string telefone, string tipo, string preco)
    :Empresa(nome, endereco, cidade, estado, cep, telefone){
    this->tipo = tipo;
    this->preco = preco;
}
void Restaurante::setTipo(string tipo){
    this->tipo = tipo;
}
void Restaurante::setPreco(string preco){
    this->preco = preco;
}
string Restaurante::getTipo(){
    return tipo;
}
string Restaurante::getPreco(){
    return preco;
}
void Restaurante::print(){
    Empresa::print();
    cout << "Tipo: " << getTipo() << '\n';
    cout << "Preco: " << getPreco() << '\n';
}