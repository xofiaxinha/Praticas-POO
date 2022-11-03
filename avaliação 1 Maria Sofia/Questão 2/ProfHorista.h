#include <iostream>
#include "Professor.h"
using namespace std;
class ProfHorista: public Professor{
    private:
    int totalHoras;
    float salarioHora;
    public:
    ProfHorista(string nome, string matricula, int idade, int horas, float salario);
    void setHoras(int);
    void setSalario(float);
    int getHoras();
    float getSalario();
};