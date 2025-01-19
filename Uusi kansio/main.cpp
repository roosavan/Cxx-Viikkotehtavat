#include "game.h"
#include <iostream>

using namespace std;


int main()
{
    int maxNumber;

    cout << "Enter maximum number: ";
    cin >> maxNumber;

    Game game(maxNumber);
    game.play();
    return 0;
}
