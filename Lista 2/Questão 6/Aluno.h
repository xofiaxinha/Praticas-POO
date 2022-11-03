/*Crie uma classe Aluno com atributos que armazenem o nome, a série que cursa e o
grau. Crie um getter e um setter, além de uma variável static que conte a quantidade
de objetos criados, a ser utilizada no construtor e destrutor. Crie um vetor com 15
objetos desta classe e preencha os dados através do setter*/
#include <iostream>
#include <string>
using namespace std;

class Aluno{
    private:
        string nome, serie, grau;
    public:
        static int qtd;
        Aluno();
        Aluno(string, string, string);
        void setNome(string);
        void setSerie(string);
        void setGrau(string);
        string getNome();
        string getSerie();
        string getGrau();
        int getQtd();
        void print();
        ~Aluno();
};