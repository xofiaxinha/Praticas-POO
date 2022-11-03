#pragma once
#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Estudante.h"

class Monitor: virtual public Funcionario, Estudante{
    private:
        std::string disciplina;
        int cargaHoraria;
    public:
        Monitor(std::string nome, float salario, std::string turno, std::string RG,
                std::string matricula, std::string curso,
                std::string disciplina, int cargaHoraria);
        void setDisciplina(std::string disciplina);
        void setCargaHoraria(int cargaHoraria);
        std::string getDisciplina();
        int getCargaHoraria();
        void print();
};