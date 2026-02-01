#include "pankkitili.h"
#include <iostream>
using namespace std;


/*pankkitili();
pankkitili(string);
double getBalance();
virtual bool deposit(double);
virtual bool withdraw(double);
*/

pankkitili::pankkitili() {
    cout << "olen default konstruktori" << endl;
}

pankkitili::pankkitili(string om){
    cout << "olen pankkitili parametrikonstruktorissa" << endl;
    omistaja = om;
}

double pankkitili::getBalance(){
    cout << "olen saldokyselyssä" << endl;
    return saldo;
}

bool pankkitili::withdraw(double sum){
    cout << "olen pankkitili talletuksessa" << endl;
    if (sum < 0) return false;
    saldo += sum;
    return true;
}

bool pankkitili::deposit(double sum){
    cout << "olen pankkitili nostossa" << endl;
    if ( (sum < 0) || ( (saldo - sum) < 0) ) return false;
    saldo -= sum;
    return true;
}
