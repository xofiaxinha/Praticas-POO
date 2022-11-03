#pragma once
#include "Conta.h"
/*A classe ContaCorrente deve incluir um atributo que represente a taxa cobrada por cada transação de
crédito/débito, com getter, setter e construtor. Redena os métodos de crédito e débito para descontar
o valor de tal taxa a cada transação bem sucedida. Os métodos originais da classe Conta devem ser
invocados na redenição. Crie um driver para testar sua hierarquia.*/
using namespace std;

class Corrente: public Conta{
    private:
        float taxa;
    public:
        Corrente(float, float);
        void setTaxa(float);
        float getTaxa();
        void credito(float);
        void debito(float);
};