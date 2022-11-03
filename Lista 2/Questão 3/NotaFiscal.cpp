#include <iostream>
#include <string>
#include "NotaFiscal.h"
using namespace std;
NotaFiscal::NotaFiscal(string numPeca, string descricao, int quantidade, float valor){
    setNumPeca(numPeca);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setValor(valor);
}
void NotaFiscal::setNumPeca(string numPeca){
    this->numPeca = numPeca;
}
void NotaFiscal::setDescricao(string descricao){
    this->descricao = descricao;
}
void NotaFiscal::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}
void NotaFiscal::setValor(float valor){
    this->valor = valor;
}
string NotaFiscal::getNumPeca(){
    return numPeca;
}
string NotaFiscal::getDescricao(){
    return descricao;
}
int NotaFiscal::getQuantidade(){
    return quantidade;
}
float NotaFiscal::getValor(){
    return valor;
}
void NotaFiscal::print(){
    cout << "Numero da peca: " << getNumPeca() << endl;
    cout << "Descricao: " << getDescricao() << endl;
    cout << "Quantidade: " << getQuantidade() << endl;
    cout << "Valor: " << getValor() << endl;
}
NotaFiscal NotaFiscal::getTotalNota(NotaFiscal *obj, int n){
    NotaFiscal aux("0", "0", 0, 0);
    for(int i = 0; i < n; i++){
        aux.quantidade += obj[i].quantidade;
        aux.valor += obj[i].valor;
    }
}