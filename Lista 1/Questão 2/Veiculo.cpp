/*Crie a classe Veiculo, contendo o peso, a velocidade máxima, e o preço. Inclua um construtor sem
argumentos e um com argumentos para inicialização dos atributos. Crie métodos que funcionem
como getter e setter e print.*/
#include <iostream>
using namespace std;
#include "Veiculo.h"
Veiculo::Veiculo(){
    peso = 0;
    velocidadeMaxima = 0;
    preco = 0;
}
Veiculo::Veiculo(float peso, float velocidadeMaxima, float preco){
    this->peso = peso;
    this->velocidadeMaxima = velocidadeMaxima;
    this->preco = preco;
}
void Veiculo::setPeso(float peso){
    this->peso = peso;
}
void Veiculo::setVelocidadeMaxima(float velocidadeMaxima){
    this->velocidadeMaxima = velocidadeMaxima;
}
void Veiculo::setPreco(float preco){
    this->preco = preco;
}
float Veiculo::getPeso(){
    return peso;
}
float Veiculo::getVelocidadeMaxima(){
    return velocidadeMaxima;
}
float Veiculo::getPreco(){
    return preco;
}
void Veiculo::print(){
    cout << "Peso: " << getPeso() << '\n';
    cout << "Velocidade Máxima: " << getVelocidadeMaxima() << '\n';
    cout << "Preço: " << getPreco() << '\n';
}