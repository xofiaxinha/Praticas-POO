#include <iostream>
#include <iomanip>
#include "Hora.h"
using namespace std;

ostream &operator<<(ostream &output, const Hora &horario){
    if(horario.hora < 10)
        output << "0" << horario.hora << ":";
    else
        output << horario.hora << ":";
    if(horario.minuto < 10)
        output << "0" << horario.minuto << ":";
    else
        output << horario.minuto << ":";
    if(horario.minuto < 10)
        output << "0" << horario.segundo << ":";
    else
        output << horario.segundo << ":";
    /*output << Hora.hora << "/" << Hora.minuto << "/" << Hora.minuto;*/
    return output;
}
istream &operator>>(istream &input, Hora &horario){
    input >> setw(2) >> horario.hora;
    input.ignore();
    input >> setw(2) >> horario.minuto;
    input.ignore();
    input >> setw(2) >> horario.segundo;
    return input;
}
Hora::Hora(){
    hora = 0;
    minuto = 0;
    segundo = 0;
}
Hora::Hora(int hora, int minuto, int segundo){
    sethora(hora);
    setminuto(minuto);
    setminuto(segundo);
}
void Hora::sethora(int hora){
    this->hora = hora;
}
void Hora::setminuto(int minuto){
    this->minuto = minuto;
}
void Hora::setsegundo(int segundo){
    this->segundo = segundo;
}
int Hora::gethora(){
    return hora;
}
int Hora::getminuto(){
    return minuto;
}
int Hora::getsegundo(){
    return segundo;
}
void Hora::sub(Hora aux){
    if(aux.segundo > segundo){
        segundo += 60;
        minuto--;
    }
    if(aux.minuto > minuto){
        minuto += 60;
        hora--;
    }
    if(aux.hora > hora){
        hora += 24;
    }
    segundo -= aux.segundo;
    minuto -= aux.minuto;
    hora -= aux.hora;
}
void Hora::add(Hora aux){
    segundo += aux.segundo;
    if(segundo > 60){
        segundo -= 60;
        minuto++;
    }
    minuto += aux.minuto;
    if(minuto > 60){
        minuto -= 60;
        hora++;
    }
    hora += aux.hora;
    if(hora > 24){
        hora -= 24;
    }
}
Hora Hora::add(Hora h1, Hora h2){
    Hora aux;
    aux.segundo = h1.segundo + h2.segundo;
    if(aux.segundo > 60){
        aux.segundo -= 60;
        aux.minuto++;
    }
    aux.minuto = h1.minuto + h2.minuto;
    if(aux.minuto > 60){
        aux.minuto -= 60;
        aux.hora++;
    }
    aux.hora = h1.hora + h2.hora;
    if(aux.hora > 24){
        aux.hora -= 24;
    }
    return aux;
}