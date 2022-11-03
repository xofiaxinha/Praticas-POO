/*Crie uma classe Empresa capaz de armazenar os dados de uma empresa (Nome, Endereço, Cidade,
Estado, CEP e Telefone). Inclua um construtor sem argumentos e um com argumentos para iniciali-
zação dos atributos. Crie métodos que funcionem como getter e setter e print.
Utilize a classe Empresa como base para criar a classe Restaurante. Esta classe derivada deve con-
ter atributos que representem o tipo de comida e o preço médio de um prato. Crie um construtor
para esta classe que chame explicitamente o construtor da classe Empresa, um getter e um setter,
além de um método print, que utiliza o método print da classe base. Crie um driver para testar sua
aplicação.*/
#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
#include "Restaurante.h"
//#include "Empresa.h"
int main(){
    Restaurante r1("Restaurante 1", "Rua 1", "Cidade 1", "Estado 1", "CEP 1", "Telefone 1", "Tipo 1", "Preco 1");
    r1.print();
    system("pause");
    return 0;
}