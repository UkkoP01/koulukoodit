#ifndef GAMENEW_H
#define GAMENEW_H
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GameNew
{
public:
    GameNew(int);
    ~GameNew();
    void play();
private:
    int maxNumber = 0;
    int playerGuess = 0;
    int randomNumber = 0;
    int numOfGuesses = 0;
    void printGameResult();
protected:

};

#endif // GAMENEW_H
