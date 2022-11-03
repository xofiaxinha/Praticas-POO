#include <iostream>
using namespace std;
class Circulo{
	private:
	int raio;
	public:
	Circulo(int);
	void setRaio(int);
	int getRaio();
	float calculaArea();
	float calculaPerimetro();
	void print();
};