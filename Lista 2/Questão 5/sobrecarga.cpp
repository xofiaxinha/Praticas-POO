#include <iostream>
#include <iomanip>
#include "sobrecarga.h"
using namespace std;

ostream &operator<<(ostream &output, const Data &data){
    if(data.dia < 10)
        output << "0" << data.dia << "/";
    else
        output << data.dia << "/";
    if(data.mes < 10)
        output << "0" << data.mes << "/";
    else
        output << data.mes << "/";
    if(data.ano < 10)
        output << "0" << data.ano << "/";
    else
        output << data.ano << "/";
    /*output << data.dia << "/" << data.mes << "/" << data.ano;*/
    return output;
}
istream &operator>>(istream &input, Data &data){
    input >> setw(2) >> data.dia;
    input.ignore();
    input >> setw(2) >> data.mes;
    input.ignore();
    input >> setw(2) >> data.ano;
    return input;
}
Data::Data(){
    dia = 0;
    mes = 0;
    ano = 0;
}
Data::Data(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}
void Data::somaMes(int m){
    int aux = m - mes;
    if(aux < 0){
        aux += 12;
    }
    while(aux != 0){
        if(aux % 2 == 0) dia += 30;
        else dia += 31;
        if(dia > 31){
            dia -= 31;
            mes++;
        }
        if(mes > 12){
            mes -= 12;
            ano++;
        }
        aux--;\
    }
}
void Data::somaMes(string nome){
    if(nome == "janeiro" || nome == "março" || nome == "maio" || nome == "julho" || nome == "agosto" || nome == "outubro" || nome == "dezembro"){
        dia += 31;
        if(dia > 31){
            dia -= 31;
            mes++;
        }
        if(mes > 12){
            mes -= 12;
            ano++;
        }
    }
    else{
        dia += 30;
        if(dia > 30){
            dia -= 30;
            mes++;
        }
        if(mes > 12){
            mes -= 12;
            ano++;
        }
    }
}
void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}