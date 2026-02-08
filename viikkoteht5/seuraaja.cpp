#include "seuraaja.h"
#include <iostream>
using namespace std;

seuraaja::seuraaja() {
    cout << "s konst" << endl;
}

seuraaja::seuraaja(string aNimi) {

    cout << "s paramkonst" << endl;
    nimi = aNimi;
}

string seuraaja::getNimi(){

    cout << "getN" << endl;
    return (nimi);
}

void seuraaja::paivitys(string viesti){
    cout << "paivitys" << endl;
    cout << "viesti " << viesti << endl;
}
