// Isabel Ovalles
// array.cpp
// 4/17/2020

// Purpose: Create a two dim array of integers based on user input. The program
//  will then ask the user to input values for each indeces of the array. Then,
//  print out the rows and cols of the array to the screen while also printing
//  the sum of each column.

// Input: Two integers given by the user via the console.

// Prosessing: Take the two integers given by the user to declare a two dim
//  array of integers. The sum of each column will also be computed once the
//  array has been initialized with user given values.

// Output: The end result will be a table of the 2 dim array, with the sum of
//  both the cols and rows.

// Examples: If the user asks to create a 2 x 2 array, and only gives the
//  values of 2 in all of the indeces, then when printed it would look like so:
//   2   2
//   2   2
//  Sum of row 1 is 4
//  Sum of row 2 is 4
//  Sum of col 1 is 4
//  Sum of col 2 is 4

#include <iostream>

using namespace std;

const char SPACE = ' ';

int main()
{
  int rowLength;
  int colLength;

  cout << endl << endl;

  cout << "Please enter a row length: ";
  cin >> rowLength;

  cout << "Please enter a column length: ";
  cin >> colLength;



  int* arr = new int[rowLength * colLength];

  for(int row = 0; row < rowLength; row++) {
    for(int col = 0; col < colLength; col++) {
        cout << "Input a number at row " << row << ", col " << col << ": ";
        cin >> *(arr + row*colLength + col);
    }
  }

  // Prints the 2 dim array and the sums of all its rows and cols.
  for(int row = 0; row < rowLength; row++) {
    for(int col = 0; col < colLength; col++) {
      cout << *(arr + row*colLength + col) << SPACE;
    }
    cout << endl;
  }

  cout << endl << endl;

  delete[] arr;
  return 0;
}
