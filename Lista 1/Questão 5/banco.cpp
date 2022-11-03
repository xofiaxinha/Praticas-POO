#include <iostream>
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
using namespace std;
int main(){
    Corrente cc(1000, 0.5);
    Poupanca cp(1000, 0.1);
    cc.credito(100);
    cp.credito(100);
    cout << "Saldo da conta corrente: " << cc.getSaldo() << endl;
    cout << "Saldo da conta poupanca: " << cp.getSaldo() << endl;
    cc.debito(100);
    cp.debito(100);
    cout << "Saldo da conta corrente: " << cc.getSaldo() << endl;
    cout << "Saldo da conta poupanca: " << cp.getSaldo() << endl;
    cout << "Rendimento da conta poupanca: " << cp.calculaRendimento() << endl;
    return 0;
}