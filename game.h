#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int maxNumber);
    ~Game();
    void play();
    void printGameResult();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
};

#endif // GAME_H
