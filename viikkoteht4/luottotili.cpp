#include "luottotili.h"
#include <iostream>
using namespace std;

luottotili::luottotili() {
    cout << "olen luottotili defaultkonstruktorissa" << endl;
}

luottotili::luottotili(string om, double lr) : pankkitili(om){
    cout << "olen luottotili parametrikonstruktorissa" << endl;
    luottoraja = lr;
}

bool luottotili::deposit(double sum){
    cout << "olen luottotili velanmaksussa" << endl;
    cout << "saldo ennen " << saldo << endl;
    cout << "saldo jälkeen " << sum + saldo << endl;
     if ( (sum < 0) || ( (sum + saldo) >0) ) return false;
     saldo += sum;
     return true;
}

bool luottotili::withdraw(double sum){
     cout << "olen luottotili velanotossa" << endl;
     cout << "luottoraja " << luottoraja << endl;
     cout << "saldo ennen " << saldo << endl;
     cout << "saldo jälkeen " << saldo - sum << endl;
    if ( (sum < 0) || ( (std::abs(saldo) + sum) > luottoraja) ) return false;
    saldo -= sum;
    return true;
}
