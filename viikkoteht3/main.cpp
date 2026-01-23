#include <iostream>
#include <chef.h>
#include "italianchef.h"
#include <string>

using namespace std;

int main()
{
    string kokinNimi;
    cout << "Hello World!" << endl;
    chef kokki_1("Lars");
  //  chef kokki_2();
    kokinNimi = kokki_1.getName();
    cout << "main: kokinNimi on " << kokinNimi << endl;
    kokki_1.makeSalad(10);
    kokki_1.makeSalad(4);
    kokki_1.makeSalad(18);

    kokki_1.makeSoup(3);
    kokki_1.makeSoup(2);
    kokki_1.makeSoup(31);

    ItalianChef it_kokki_1("Mario");
    ItalianChef it_kokki_2("Luigi");
    it_kokki_1.makeSalad(15);
    it_kokki_1.makeSoup(30);
    it_kokki_2.makeSoup(12);
    it_kokki_2.makeSalad(15);

    it_kokki_2.askSecret("pizza", 10, 10);

    return 0;
}
