#include <iostream>
#include <string>
using namespace std;

class Professor{
	private:
	string nome, matricula;
	int idade;
	public:
	Professor(string, string, int);
	void setNome(string);
	void setMatricula(string);
	void setIdade(int);
	void setSalario(float);
	string getNome();
	string getMatricula();
	int getIdade();
	float getSalario();
};