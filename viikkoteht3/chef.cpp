#include "chef.h"
#include <iostream>

chef::chef() {
    cout << "olen default konstruktori" << endl;
}

chef::chef(string cN) {
    cout << "olen input konstruktori" << endl;
    chefName = cN;
}

chef::~chef() {
    cout << "olen destruktori" << endl;
}

int chef::makeSalad(int numberOfItems){

    cout << "olen salaatti" << endl;
  //  int numberOfPortions = numberOfItems/5;
    cout << "annoit " << numberOfItems << "ainesta" << endl;
    cout << "saadaan " << numberOfItems/5 << "salaattiannosta " << endl;
    return numberOfItems/5;
}

int chef::makeSoup(int numberOfItems){

    cout << "olen keitto" << endl;
    cout << "annoit " << numberOfItems << "ainesta" << endl;
    cout << "saadaan " << numberOfItems/3 << "keittoannosta " << endl;
    return numberOfItems/3;
}

string chef::getName(){
    cout << "olen gettreissä" << endl;
    cout << "kokin nimi on " << chefName << endl;
    return chefName;
}

void chef::setName(string cN){
    cout << "olen setterissä  " << endl;
    chefName = cN;
}
