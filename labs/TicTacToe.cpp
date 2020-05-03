// Isabel Ovalles
// TicTacToe.cpp

#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()
{
  for(int r = 0; r < ROW; r++) {
    for(int c = 0; c < COL; c++) {
      board[r][c] = BLANK;
    }
  }
}

void TicTacToe::displayBoard()
{
  for(int r = 0; r < ROW; r++) {
    for(int c = 0; c < COL; c++) {
      cout << LEFT_BRAC;
      cout << board[r][c];
      cout << RIGHT_BRAC;
    }
    cout << endl;
  }
}

bool TicTacToe::takeTurn()
{
  char winner;
  if(player == 1) {
    cout << "It's player's 1 turn: " << endl;
    placePiece(player);
    winner = checkWinner();
    player++;
  } else {
    cout << "It's player's 2 turn: " << endl;
    placePiece(player);
    winner = checkWinner();
    player--;
  }

  if(winner == X || winner == O) {
    printWinner(winner);
    return true;
  }
  return false;
}

void TicTacToe::placePiece(int player)
{
  int row = 0;
  int col = 0;

  cout << "Enter a row and col: ";
  cin >> row >> col;


  while(!(validSpace(row, col))) {
    cout << "Enter a row and col: ";
    cin >> row >> col;
  }

  if(validSpace(row, col) && player == 1) {
    board[row - 1][col - 1] = X;
  }

  if(validSpace(row, col) && player == 2) {
    board[row - 1][col - 1] = O;
  }

}

bool TicTacToe::validSpace(int row, int col)
{
  if(((row - 1) <= ROW) && ((row - 1) > -1)) {
    if(((col - 1) <= COL) && ((col - 1) > -1)) {
      if(board[row][col] == BLANK) {
        return true;
      }
    }
  }
  return false;
}

char TicTacToe::checkWinner()
{
  char winner;

  // check all row
  winner = threeInARow(board[0][0], board[0][1], board[0][2]);
  winner = threeInARow(board[1][0], board[1][1], board[1][2]);
  winner = threeInARow(board[2][0], board[2][1], board[2][2]);

  // check all cols
  winner = threeInARow(board[0][0], board[1][0], board[2][0]);
  winner = threeInARow(board[0][1], board[1][1], board[1][2]);
  winner = threeInARow(board[0][2], board[1][2], board[2][2]);

  //check all diags
  winner = threeInARow(board[0][0], board[1][1], board[2][2]);
  winner = threeInARow(board[0][2], board[1][1], board[2][0]);

  cout << "winner is = " << winner << endl;
  return winner;
}

char TicTacToe::threeInARow(char one, char two, char three)
{
  if(one == two && two == three) {
    return one;
  }
  return BLANK;
}

void TicTacToe::printWinner(char winner)
{
  if(winner == X) {
    cout << "Player 1 won!" << endl;
  } else {
    cout << "Player 2 won!" << endl;
  }
}
