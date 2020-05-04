// Isabel Ovalles
// TicGame.cpp

#include "TicTacToe.h"
#include <iostream>

using namespace std;

int main()
{
  TicTacToe game;

  cout << endl << endl;
  cout << "Welcome to TicTacToe! " << endl << endl;
  cout << "Rules: " << endl
       << "Player 1 will be X and Player 2 will be O." << endl
       << "The first player to reach three-in-a-row wins!" << endl << endl;

  while(game.takeTurn()) {
    cout << endl << endl;
    game.displayBoard();
    cout << endl << endl;
  }

  cout << "Goodbye.....";
  cout << endl << endl;
  return 0;
}
