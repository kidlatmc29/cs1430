// Isabel Ovalles
// TicGame.cpp

#include "TicTacToe.h"
#include <iostream>

using namespace std;

int main()
{
  TicTacToe game;
  bool endGame = true; // switch this back to false when debuging game!!!!

  cout << endl << endl;
  cout << "Welcome to TicTacToe! " << endl << endl;
  cout << "Rules: Player 1 will be X and Player 2 will be O. The first player "
       << "to reach three-in-a-row wins!" << endl;

  while(!endGame) {
    game.displayBoard();
    endGame = game.takeTurn();
    game.displayBoard();
  }

  cout << endl << endl;
  return 0;
}
