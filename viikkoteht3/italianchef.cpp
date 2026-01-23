#include "italianchef.h"
#include <iostream>
ItalianChef::ItalianChef() {
    cout << "olen italiankonstruktorissa" << endl;

}

ItalianChef::ItalianChef(string cN) {
    cout << "olen italian inputkonstruktorissa" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{

}

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour){
    int numberOfPizza;
    if (pw.compare(password)==0){

        water = amountOfWater;
        flour = amountOfFlour;
        numberOfPizza =  makePizza();
        return true;

    }
    else{
        cout << "vaara salis" << endl;
        return false;
    }



}

int ItalianChef::makePizza(){
    int annos = 0;
    int vesi = water;
    int jauho = flour;

        while(vesi >=5 && jauho >=5){
        annos ++;
        vesi = vesi-5;
        jauho = jauho-5;
    }
        cout << "kokki voi valmistaa " << annos << " pizzaa" << endl;
    return annos;
}
