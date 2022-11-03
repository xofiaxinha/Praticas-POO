#include <iostream>
#include <iomanip>
#include "Hora.h"
using namespace std;

int main(){
    Hora horario1, horario2, horario3, horario4;
    cout << "Digite o horario 1: ";
    cin >> horario1;
    cout << "Digite o horario 2: ";
    cin >> horario2;
    horario4 = horario2;
    cout << "Horario 1: " << horario1 << endl;
    cout << "Horario 2: " << horario2 << endl;
    horario2.add(horario1);
    cout << "Horario 2 com soma de 1" << horario2 << endl;
    horario3 = horario1.add(horario1, horario2);
    cout << "Horario 3 (soma de 1 e 2): " << horario3 << endl;
    horario4.sub(horario1);
    cout << "Horario 4 (subtração de 2 e 1): " << horario4 << endl;
    return 0;
}