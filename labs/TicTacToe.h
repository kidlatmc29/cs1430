// Isabel Ovalles
// TicTacToe.h

#include <iostream>
#include <string>
using namespace std;

class TicTacToe {
  public:
    void displayBoard();
    void takeTurn(int player);
    void placePiece(int player, int row, int col);

  private:
    const char X = 'X';
    const char O = 'O';
    const char LEFT_BRAC = '[';
    const char RIGHT_BRAC = ']';
    const char BLANK = ' ';

    int row = 3;
    int col = 3;
    char board[row][col];

    bool checkWinner();
};
