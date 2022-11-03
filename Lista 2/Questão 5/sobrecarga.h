#include <iostream>
#include <iomanip>
using namespace std;
class Data{
    friend ostream &operator<<(ostream &, const Data &);
    friend istream &operator>>(istream &, Data &);
    private:
        int dia, ano;      
        int mes;
    public:
        Data();
        Data(int, int, int);
        //void operator+(Data tr);
        void somaMes(int);
        void somaMes(string);
        //void somaMes(int);  
        void setDia(int);
        void setMes(int);
        void setAno(int);
        int getDia();
        int getMes();
        int getAno();
};