#include "asiakas.h"
#include <iostream>

using namespace std;
asiakas::asiakas() {
    cout << "asiakas olen defaultkonstruktorissa" << endl;

}

asiakas::asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr){
    cout << "asiakas olen parametrikonstruktorissa" << endl;
    nimi = name;
}



string asiakas::getNimi() {
    return nimi;
}

void asiakas::showSaldo(){
    cout << "käyttötilin saldo" << kayttotili.getBalance() << endl;
    cout << "luottotilin saldo" << luottotili.getBalance() << endl;
}



bool asiakas::talletus(double sum){
    cout << "asiakas " << "tallettaa" << endl;
    bool onnistui = kayttotili.deposit(sum);
    if(!onnistui){
        cout << "epäonnistuminen" << endl;
    }
    return onnistui;
}

bool asiakas::nosto(double sum){
    cout << "asiakas " << "tallettaa" << endl;
    bool onnistui = kayttotili.withdraw(sum);
    if(!onnistui){
        cout << "epäonnistuminen" << endl;
    }
    return onnistui;
}

bool asiakas::luotonMaksu(double sum){

    cout << "asiakas " << "maksaa" << endl;
    bool onnistui = luottotili.deposit(sum);
    if(!onnistui){
        cout << "epäonnistuminen" << endl;
    }
    return onnistui;
}

bool asiakas::luotonNosto(double sum){
    cout << "asiakas " << "nostaa" << endl;
    bool onnistui = luottotili.withdraw(sum);
    if(!onnistui){
        cout << "epäonnistuminen" << endl;
    }
    return onnistui;
}

bool asiakas::tiliSiirto(double sum, asiakas &kohde){
    cout << "asiakas " << nimi << "siiträä " << sum << "asiakkaalle " << kohde.getNimi() << endl;
    bool onnistui = nosto(sum);
    if(onnistui){
        kohde.talletus(sum);
        return true;
    }
    else{
        cout << "tilisiirto fail" << endl;
        return false;
    }
}
