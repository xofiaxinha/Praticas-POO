#pragma once
#include <string>
using namespace std;
class Forma{
    public:
        Forma();
        Forma(string cor);
        string getCor();
        void setCor(string cor);
        virtual float calcularArea();
        virtual float calcularVolume();
    private:
        string cor;
};