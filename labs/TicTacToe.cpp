// Isabel Ovalles
// TicTacToe.cpp

#include "TicTacToe.h"
using namespace std;

TicTacToe::TicTacToe()
{
  cout << "Inside constructor " << endl;
  for(int r = 0; r < ROW; r++) {
    for(int c = 0; c < COL; c++) {
      board[r][c] = BLANK;
    }
  }
}

void TicTacToe::displayBoard()
{
  cout << "Inside displayBoard() " << endl;
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
  int player = 1;
  char winner;
  cout << "Inside takeTurn() " << endl;

  if(playerTurn == 1) {
    placePiece(player);
    winner = checkWinner();
    playerTurn++;
  } else {
    playerPiece(player);
    winner = checkWinner();
    playerTurn--;
  }

  if(winner == X || winner == O){
    return true;
  }
  return false;
}

void TicTacToe::placePiece(int player)
{
  int row = 0;
  int col = 0;

  cout << "Inside placePiece() " << endl;
  cout << "Enter a row and col: ";
  cin >> row >> col;

  while(!(validSpace(row, col))) {
    cout << "Enter a row and col: ";
    cin >> row >> col;
  }

  if(player == 1) {
    board[row][col] = X;
  } else {
    board[row][col] = O;
  }
}

bool TicTacToe::validSpace(int row, int col)
{
  cout << "Inside validSpace()";
  if((row - 1) < ROW && (row - 1) > -1) {
    if(col - 1) < COL && (col - 1) > -1) {
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
  cout << "Inside checkWinner() " << endl;
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

  if(winner != BLANK) {
    return winner;
  }
  return BLANK;
}

char TicTacToe::threeInARow(char one, char two, char three)
{
  cout << "Inside threeinARow()" << endl;
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
