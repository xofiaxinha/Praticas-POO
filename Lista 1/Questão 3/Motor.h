/*Crie a classe Motor, contendo o número de cilindros e a potência. Inclua um construtor sem argu-
mentos e um com argumentos para inicialização dos atributos. Crie métodos que funcionem como
getter e setter e print.*/
#include <iostream>
using namespace std;
class Motor{
    private:
        int numCilindros;
        float potencia;
    public:
        Motor();
        Motor(int numCilindros, float potencia);
        //setters
        void setNumCilindros(int numCilindros);
        void setPotencia(float potencia);
        //getters
        int getNumCilindros();
        float getPotencia();
        void print();
};