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
#include "Stack.h"

using namespace std;

const char YES = 'y';

bool readFile(Stack& line);
bool isPalindrom(Stack line, string originalLine);

int main()
{
  Stack line;
  bool invalidFile;

  cout << endl << endl;
  cout << "Welcome to hw4: " << endl;

  invalidFile = readFile(line);
  if(!invalidFile) {
    cout << "file was read correctly" << endl;
  }

  cout << "Terminating program. Goodbye....";
  cout << endl << endl;
  return 0;
}

bool readFile(Stack& line)
{
  fstream inFile;
  string fileName;
  stringstream ss;
  string inLine;
  int inLineLength;
  char value;
  bool failed = true;

  cout << "Please provide a file name: ";
  cin >> fileName;

  inFile.open(fileName);
  failed = inFile.fail();

  if(!failed) {
    while(getline(inFile, inLine)) {
      ss.str(inLine);
      inLineLength = inLine.length();
      for(int index = 0; index < (inLineLength - 1); index++) {
        ss >> value;
        line.push(value);
      }

      if(isPalindrom(line, inLine)) {
      cout << inLine << " - " << "is a palindrom" << endl;
      } else {
        cout << inLine << " - " << "is not a palindrom" << endl;
      }
    }

  }
  return failed;
}

bool isPalindrom(Stack line, string originalLine)
{
  string poppedLine;

  while(!(line.isEmpty())) {
    poppedLine += line.pop();
  }
  return poppedLine == originalLine;
}
