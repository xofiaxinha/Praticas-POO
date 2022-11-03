#include <iostream>
#include <iomanip>
using namespace std;
class Hora{
    friend ostream &operator<<(ostream &, const Hora &);
    friend istream &operator>>(istream &, Hora &);
    private:
        int hora, minuto;      
        int segundo;
    public:
        Hora();
        Hora(int, int, int);
        //void operator+(Data tr);
        void sub(Hora);
        void add(Hora);
        Hora add(Hora, Hora);
        //void somasegundo(int);  
        void sethora(int);
        void setsegundo(int);
        void setminuto(int);
        int gethora();
        int getsegundo();
        int getminuto();
};