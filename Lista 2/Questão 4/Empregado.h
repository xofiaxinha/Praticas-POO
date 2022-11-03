/*Crie uma classe Empregado que inclua os atributos nome ( string), sobrenome ( string) e
salário mensal (número real). A classe deve incluir construtores para cada um dos atributos
para evitar lixo e também getters e setters. Crie um programa que teste a classe, criando
dois objetos, calculando o salário anual de cada, dando um aumento de 10% e calcule o
salário anual novamente.*/
#include <iostream>
#include <string>
using namespace std;
class Empregado{
    private:
        string nome, sobrenome;
        float salarioMensal;
    public:
        Empregado(string, string, float);
        void setNome(string);
        void setSobrenome(string);
        void setSalarioMensal(float);
        string getNome();
        string getSobrenome();
        float getSalarioMensal();
        float getSalarioAnual();
        void print();
};