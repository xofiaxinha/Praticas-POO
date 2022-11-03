/*Crie a classe Caminhao, derivada das classes Motor e Veiculo. Inclua os atributos toneladas, altura
máxima e comprimento. Crie um construtor para esta classe que chame explicitamente o construtor
das classes base, um getter e um setter, além de um método print, que utiliza o método print da classe
base. Crie um driver para testar sua aplicação.*/
#include <iostream>
#include <string>
#include "Veiculo.h"
#include "Motor.h"
using namespace std;

class Caminhao: public Veiculo, Motor{
    private:
        int toneladas;
        int alturaMaxima;
        int comprimento;
    public:
        Caminhao(float peso, float velocidadeMaxima, float preco,
                int numCilindros, float potencia, int toneladas, 
                int alturaMaxima, int comprimento);
        void setToneladas(int toneladas);
        void setAlturaMaxima(int alturaMaxima);
        void setComprimento(int comprimento);
        int getToneladas();
        int getAlturaMaxima();
        int getComprimento();
        void print();
};