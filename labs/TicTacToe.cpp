// Isabel Ovalles
// TicTacToe.cpp

#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()
{
  cout << "Inside constructor " << endl;
  for(int r = 0; r < row; r++) {
    for(int c = 0; c < col; c++) {
      board[r][c] = BLANK;
    }
  }

}

void TicTacToe::displayBoard()
{
  cout << "Inside displayBoard() " << endl;
}

void TicTacToe::takeTurn(int player)
{
  cout << "Inside takeTurn() " << endl;
}

void TicTacToe::placePiece(int player, int row, int col)
{
  cout << "Inside placePiece() " << endl;
}

bool TicTacToe::checkWinner()
{
  cout << "Inside checkWinner() " << endl;
  return false;
}
