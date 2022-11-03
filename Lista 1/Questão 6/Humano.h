/*Crie classes Humano, Inseto e SuperHeroi. A classe Humano possui atributos Nome, Sexo, Idade,
Lingua e Etnia. A classe Inseto possui atributos Nome, Venenoso, Alado, Ferrao (os três últimos são
booleanos). A classe SuperHeroi herda das duas classes anteriores, e adiciona os atributos Codinome,
Trauma e Poderes. Todos os atributos possuem getters e setters. Crie a hierarquia de herança múltipla,
um construtor e um método print na classe derivada. Crie um driver para testar sua hierarquia*/
#include <iostream>
#include <string>
using namespace std;
class Humano{
    private:
        string nome;
        string sexo;
        int idade;
        string lingua;
        string etnia;
    public:
        Humano(string nome, string sexo, int idade, string lingua, string etnia);
        string getNome();
        string getSexo();
        int getIdade();
        string getLingua();
        string getEtnia();
        void setNome(string nome);
        void setSexo(string sexo);
        void setIdade(int idade);
        void setLingua(string lingua);
        void setEtnia(string etnia);
};