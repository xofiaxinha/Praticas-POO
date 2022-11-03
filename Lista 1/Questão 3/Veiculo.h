#include<iostream>
using namespace std;
class Veiculo{
private:
    float peso;
    float velocidadeMaxima;
    float preco;
public:
    Veiculo();
    Veiculo(float peso, float velocidadeMaxima, float preco);
    //setters
    void setPeso(float peso);
    void setVelocidadeMaxima(float velocidadeMaxima);
    void setPreco(float preco);
    //getters
    float getPeso();
    float getVelocidadeMaxima();
    float getPreco();
    void print();
};