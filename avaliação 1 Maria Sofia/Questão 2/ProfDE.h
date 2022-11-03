#include <iostream>
#include "Professor.h"
#include <string>
using namespace std;

class ProfDE: public Professor{
    private:
        float salario;
    public:
        ProfDE(string, string, int, float);
        void setSalario(float);
        float getSalario();
};