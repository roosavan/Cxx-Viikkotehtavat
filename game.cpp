#include "game.h"
#include <iostream>

using namespace std;

Game::Game(int maxNumber) : maxNumber(maxNumber), playerGuess(0), numOfGuesses(0) {
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    cout << "//Max number = " << maxNumber << endl;
    cout << "//Random number = " << randomNumber << endl;
}

Game::~Game() {
    cout << "Destruktori" << endl;
}

void Game::play(){
    cout << "Guess a number between 1 and " << maxNumber << ":" << endl;

    do {
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess > randomNumber) {
            cout << "Too high" << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Too low" << endl;
        }
    } while (playerGuess != randomNumber);

    printGameResult();
}

void Game::printGameResult(){
    cout << "Oikea arvaus, numero oli: " << randomNumber << endl;
    cout << "Arvauksia oli: " << numOfGuesses << endl;
}
