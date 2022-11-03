#include <iostream>
#include <string>
#include "NotaFiscal.h"
using namespace std;
int main(){
    NotaFiscal pedido[3] = {
        NotaFiscal("1", "Saia", 10, 10.0),
        NotaFiscal("2", "Calca", 20, 20.0),
        NotaFiscal("3", "Sapato", 30, 30.0)
    }, total("0", "0", 0, 0);

    total = total.getTotalNota(pedido, 3);
    cout << "Total de pecas: " << total.getQuantidade() << '\n';
    cout << "Total do pedido: " << total.getValor() << "\n\n";
    for(int i=0; i<3; i++){
        pedido[i].print();
        cout << '\n';
    }
}