#pragma once
#include <iostream>
#include <string>
using namespace std;

class Funcionario{
    private:
        string nome;
        float salario;
        string turno;
        string RG;
    public:
        Funcionario(string nome, float salario, string turno, string RG);
        void setNome(string nome);
        void setSalario(float salario);
        void setTurno(string turno);
        void setRG(string RG);
        string getNome();
        float getSalario();
        string getTurno();
        string getRG();
};