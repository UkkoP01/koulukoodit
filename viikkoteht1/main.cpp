#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


/*
Arvotaan satunnainen luku
Kysytään pelaajalta arvaus
Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
*/
int game(int maxnum);

int main()
{

    int lkm = game(20);
    cout << "arvausten lukumaara" << lkm << endl;
/*
    int arvaus = 0;

    srand(time(0));
    int random = rand() % 20 +1;



    while(arvaus != random){
    cout << "arvaus " << endl;
    cin >> arvaus;


    if (arvaus == random){
        cout << "oikein" << endl;
    }
    else if (arvaus > random){
        cout << "arvaus on suurempi" << endl;
    }
    else if (arvaus < random){
        cout << "arvaus on pienempi" << endl;
    }
*/
    }

    int game(int maxnum){


        int arvaus = 0;
        int arvaukset = 0;
        srand(time(0));
        int random = rand() % 20 +1;



        while(arvaus != random){
            cout << "arvaa luku " << endl;
            cin >> arvaus;

            cout << "arvaus on " << arvaus << endl;
            arvaukset ++;
            cout << "arvausten maara " << arvaukset << endl;

            if (arvaus == random){
                cout << "oikein" << endl;
            }
            else if (arvaus > random){
                cout << "arvaus on suurempi" << endl;
            }
            else if (arvaus < random){
                cout << "arvaus on pienempi" << endl;
            }
    }


    return arvaukset;
}
