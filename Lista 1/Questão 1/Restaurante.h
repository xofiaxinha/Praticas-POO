#include<iostream>
#include<string>
using namespace std;
#include "Empresa.h"
class Restaurante: public Empresa{
    public:
        Restaurante();
        Restaurante(string nome, string endereco, string cidade, 
                    string estado, string cep, string telefone, 
                    string tipo, string preco);
        //setters
        void setTipo(string tipo);
        void setPreco(string preco);
        //getters
        string getTipo();
        string getPreco();
        //print
        void print();
    private:
        string tipo;
        string preco;
};