// Isabel Ovalles
// TicGame.cpp

// Purpose:
// Input:
// Processing:
// Output:
// Example:

#include "TicTacToe.h"
#include <iostream>

using namespace std;

int main()
{
  cout << endl << endl;
  cout << "Welcome to TicTacToe! " << endl << endl;

  cout << "Creating TicTacToe....";
  TicTacToe game;
  game.displayBoard();

  cout << endl << endl;
  return 0;
}
