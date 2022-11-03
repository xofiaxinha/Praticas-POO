#pragma once
#include <iostream>
#include <string>
using namespace std;

class Veiculo{
    private:
        string modelo;
        string placa;
        string cor;
    public:
        Veiculo(string modelo, string placa, string cor);
        void setModelo(string modelo);
        void setPlaca(string placa);
        void setCor(string cor);
        string getModelo();
        string getPlaca();
        string getCor();
};