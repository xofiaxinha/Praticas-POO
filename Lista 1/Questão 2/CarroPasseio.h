#include<iostream>
using namespace std;
#include "Motor.h"
#include "Veiculo.h"
class CarroPasseio: public Motor, Veiculo{
    private:
        string modelo;
        string cor;
    public:
        CarroPasseio();
        CarroPasseio(int numCilindros, float potencia, float peso, float velocidadeMaxima, 
                    float preco, string modelo, string cor);
        //setters
        void setModelo(string modelo);
        void setCor(string cor);
        //getters
        string getModelo();
        string getCor();
        void print();
};