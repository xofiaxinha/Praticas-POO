#include <iostream>
#include <string>
using namespace std;

class NotaFiscal{
    private:
        string numPeca, descricao;
        int quantidade;
        float valor;
    public:
        NotaFiscal(string, string, int, float);
        void setNumPeca(string);
        void setDescricao(string);
        void setQuantidade(int);
        void setValor(float);
        string getNumPeca();
        string getDescricao();
        int getQuantidade();
        float getValor();
        void print();
        NotaFiscal getTotalNota(NotaFiscal*, int);
};