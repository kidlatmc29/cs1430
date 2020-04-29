// Isabel Ovalles
// TicTacToe.h

#include <iostream>
#include <string>
using namespace std;

class TicTacToe {
  public:
    TicTacToe();
    void displayBoard();
    void takeTurn(int player);
    void placePiece(int player, int row, int col);

  private:
    const char X = 'X';
    const char O = 'O';
    const char LEFT_BRAC = '[';
    const char RIGHT_BRAC = ']';
    const char BLANK = ' ';

    static const int row = 3;
    static const int col = 3;
    char board[row][col];

    bool checkWinner();
};
