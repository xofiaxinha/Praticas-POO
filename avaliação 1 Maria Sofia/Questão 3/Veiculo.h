#pragma once
#include <iostream>
#include <string>
using namespace std;

class Veiculo{
    private:
        string nome;
        int peso, potencia;
    public:
        Veiculo(string, int, int);
        void setNome(string);
        void setPeso(int);
        void setPotencia(int);
        string getNome();
        int getPeso();
        int getPotencia();
        void print();
};