#include<iostream>
#include<string>
#include "Superheroi.h"
using namespace std;

int main(){
    SuperHeroi superheroi("Peter Parker", "Masculino", 16, "Ingles", "Americano", 1, 0, 0, "Homem Aranha",
                            "Morte do tio Ben", "Sentido Aranha");
    superheroi.print();
    return 0;
}