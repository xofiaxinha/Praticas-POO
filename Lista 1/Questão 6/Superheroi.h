#include <iostream>
#include <string>
#include "Humano.h"
#include "Inseto.h"
using namespace std;
class SuperHeroi: public Inseto, Humano{
    private:
        string codinome;
        string trauma;
        string poderes;
    public:
        SuperHeroi(string nome, string sexo, int idade, string lingua, string etnia,
                    bool venenoso, bool alado, bool ferrao,
                    string codinome, string trauma, string poderes);
        string getCodinome();
        string getTrauma();
        string getPoderes();
        void setCodinome(string codinome);
        void setTrauma(string trauma);
        void setPoderes(string poderes);
        void print();
};