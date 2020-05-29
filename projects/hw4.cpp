// Isabel Ovalles
// hw4.cpp

// Purpose: This program tells the user what words/phrases are palindroms
//   from a given file.
// Input: The user provides a data file that the program will read from.
// Processing: The file is read and words/phrases is processed into a Stack to
//   determine if it is a palindrom or not.
// Output: The file contents is printed out and next to it states if it is a
//  palindrom or not.
// Example: The user gives a file that contains the words "Bob," "No one." and
//  "Racecar". The program prints out the words and results in a column.
//  "Bob - Is a palindrom", "No one. - Is not a palindrom", "Racecar - Is a
//  "palindrom"

#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include "Stack.h"

using namespace std;

const char YES = 'y';

bool readFile(Stack& line);

int main()
{
  Stack line;
  bool invalidFile;

  cout << endl << endl;
  cout << "Welcome to hw4: " << endl;

  invalidFile = readFile(line);

  if(invalidFile) {
    cout << "Could not open file! " << endl;
  }

  cout << "Terminating program. Goodbye....";
  cout << endl << endl;
  return 0;
}

bool readFile(Stack& line)
{
  
}
