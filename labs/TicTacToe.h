// Isabel Ovalles
// TicTacToe.h

#include <iostream>
#include <string>
using namespace std;

class TicTacToe {
  public:
    TicTacToe();
    void displayBoard();
    bool takeTurn();
    void placePiece(int player);

  private:
    const char X = 'X';
    const char O = 'O';
    const char LEFT_BRAC = '[';
    const char RIGHT_BRAC = ']';
    const char BLANK = ' ';
    static const int ROW = 3;
    static const int COL = 3;

    char board[ROW][COL];

    bool validSpace(int row, int col);
    char checkWinner();
    char threeInARow(char one, char two, char three);
    void printWinner(char winner);
};
