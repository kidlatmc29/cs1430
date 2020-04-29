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
  TicTacToe game;
  bool endGame = false;
  int winner = 0;

  cout << endl << endl;
  cout << "Welcome to TicTacToe! " << endl << endl;
  cout << "Rules: Player 1 will be X and Player 2 will be O. The first player t
       << "to reach three-in-a-row wins!" << endl;

  while(!endGame) {
    board.takeTurn();
    endGame = board.checkWinner();
  }

  if(winner == 1) {
    cout << "Player 1 wins! " << endl;
  } else {
    cout << "Player 2 wins! " << endl;
  }

  cout << endl << endl;
  return 0;
}
