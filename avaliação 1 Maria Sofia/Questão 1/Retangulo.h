#include<iostream>
using namespace std;
class Retangulo{
	private:
	int base, altura;
	public:
	Retangulo(int, int);
	void setBase(int);
	void setAltura(int);
	int getBase();
	int getAltura();
	int calculaArea();
	int calculaPerimetro();
	void print();
};