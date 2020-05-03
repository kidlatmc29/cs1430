// Isabel Ovalles
// TicGame.cpp

#include "TicTacToe.h"
#include <iostream>

using namespace std;

int main()
{
  TicTacToe game;
  bool endGame = false;

  cout << endl << endl;
  cout << "Welcome to TicTacToe! " << endl << endl;
  cout << "Rules: " << endl
       << "Player 1 will be X and Player 2 will be O." << endl
       << "The first player to reach three-in-a-row wins!" << endl;

  while(!endGame) {
    game.displayBoard();
    endGame = game.takeTurn();
  }
  cout << "Goodbye.....";
  cout << endl << endl;
  return 0;
}
