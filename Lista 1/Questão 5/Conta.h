/*Crie uma hierarquia de herança que um banco possa utilizar para representar dois tipos de conta:
poupança e conta corrente. Todos os clientes deste banco podem depositar e sacar dinheiro de suas
contas.
A classe Conta deve possuir um atributo que represente o saldo da conta. Este atributo deve ser
inicializado através de um construtor parametrizado que valide o valor enviado como parâmetro.
Devem ser criados métodos para mostrar o saldo, para crédito e para débito na conta. Note que se o
valor de débito for maior que o saldo, deve ser impressa uma mensagem de erro. Crie um getter e um
setter para o atributo.
A classe Poupanca deve possuir um atributo relacionado à variação (rendimento), com métodos get-
ter, setter e construtor. Crie também um método CalculaRendimento, que informa o valor do saldo
multiplicado pela taxa de rendimento.
A classe ContaCorrente deve incluir um atributo que represente a taxa cobrada por cada transação de
crédito/débito, com getter, setter e construtor. Redena os métodos de crédito e débito para descontar
o valor de tal taxa a cada transação bem sucedida. Os métodos originais da classe Conta devem ser
invocados na redenição. Crie um driver para testar sua hierarquia.*/
#pragma once
#include <iostream>
using namespace std;

class Conta{
    protected:
        float saldo;
    public:
        Conta(float saldo);
        void setSaldo(float saldo);
        float getSaldo();
        void credito(float valor);
        void debito(float valor);
};