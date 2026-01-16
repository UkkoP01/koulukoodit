#include "gamenew.h"



GameNew::GameNew(int n)
{
    maxNumber = n;
    cout << "peli luotu" << endl;
}

GameNew::~GameNew()
{
    cout << "peli tuhottu" << endl;
}

void GameNew::play()
{

        srand(time(0));
        randomNumber = rand() % maxNumber +1;



        while(playerGuess != randomNumber){
            cout << "arvaa luku " << endl;
            cin >> playerGuess;

            cout << "arvaus on " << playerGuess << endl;
            numOfGuesses ++;


            if (playerGuess == randomNumber){
                printGameResult();
            }
            else if (playerGuess > randomNumber){
                cout << "arvaus on suurempi" << endl;
            }
            else if (playerGuess < randomNumber){
                cout << "arvaus on pienempi" << endl;
            }
        }

    }


void GameNew::printGameResult()
{
    cout << "oikein" << endl;
    cout << "arvasit " << numOfGuesses << "kertaa" << endl;
}
