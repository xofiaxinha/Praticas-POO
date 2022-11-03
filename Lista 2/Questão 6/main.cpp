#include <iostream>
#include <string>
#include "Aluno.h"
using namespace std;

int main(){
    Aluno turma[15];
    string nome, serie, grau;
    for(int i=0; i<15; i++){
        turma[i].setNome("Padrao");
        turma[i].setSerie("9");
        turma[i].setGrau("Ensino Fundamental");
    }

    cout << "Quantidade de alunos: " << turma[0].getQtd() << endl;
}