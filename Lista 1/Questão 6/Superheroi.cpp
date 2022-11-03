#include <iostream>
#include <string>
#include "Superheroi.h"
using namespace std;
SuperHeroi::SuperHeroi(string nome, string sexo, int idade, string lingua, string etnia,
                    bool venenoso, bool alado, bool ferrao,
                    string codinome, string trauma, string poderes):
                    Humano(nome, sexo, idade, lingua, etnia),
                    Inseto(nome, venenoso, alado, ferrao){
    setCodinome(codinome);
    setTrauma(trauma);
    setPoderes(poderes);
}
string SuperHeroi::getCodinome(){
    return codinome;
}
string SuperHeroi::getTrauma(){
    return trauma;
}
string SuperHeroi::getPoderes(){
    return poderes;
}
void SuperHeroi::setCodinome(string codinome){
    this->codinome = codinome;
}
void SuperHeroi::setTrauma(string trauma){
    this->trauma = trauma;
}
void SuperHeroi::setPoderes(string poderes){
    this->poderes = poderes;
}
void SuperHeroi::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Sexo: " << getSexo() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Lingua: " << getLingua() << endl;
    cout << "Etnia: " << getEtnia() << endl;
    cout << "Venenoso: ";
        if(getVenenoso()){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }
    cout << "Alado: ";
        if(getAlado()){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }
    cout << "Ferrao: ";
        if(getFerrao()){
            cout << "Sim" << endl;
        }else{
            cout << "Nao" << endl;
        }
    cout << "Codinome: " << getCodinome() << endl;
    cout << "Trauma: " << getTrauma() << endl;
    cout << "Poderes: " << getPoderes() << endl;
}