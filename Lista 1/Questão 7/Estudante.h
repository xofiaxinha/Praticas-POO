#pragma once
#include<iostream>
#include<string>
using namespace std;

class Estudante{
    private:
        string nome;
        string matricula;
        string curso;
    public:
        Estudante(string nome, string matricula, string curso);
        void setNome(string nome);
        void setMatricula(string matricula);
        void setCurso(string curso);
        string getNome();
        string getMatricula();
        string getCurso();
};