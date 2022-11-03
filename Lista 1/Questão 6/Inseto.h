#include <iostream>
#include <string>
using namespace std;
class Inseto{
    private:
        string nome;
        bool venenoso;
        bool alado;
        bool ferrao;
    public:
        Inseto(string nome, bool venenoso, bool alado, bool ferrao);
        string getNome();
        bool getVenenoso();
        bool getAlado();
        bool getFerrao();
        void setNome(string nome);
        void setVenenoso(bool venenoso);
        void setAlado(bool alado);
        void setFerrao(bool ferrao);
};