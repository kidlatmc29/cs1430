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

int readFile(Stack& line);

int main()
{
  Stack line;
  int numOfPalindroms;
  char again = YES;

  cout << endl << endl;
  cout << "Welcome to hw4- " << endl << endl;

  while(again == YES) {
    numOfPalindroms = readFile(line);
    if(numOfPalindroms > -1) {
      cout << endl << "There were " << numOfPalindroms << " palindroms" << endl;
    }
    cout << "Would you like to check another file? (y/n): ";
    cin >> again;
  }

  cout << "Terminating program. Goodbye....";
  cout << endl << endl;
  return 0;
}

int readFile(Stack& line)
{
  fstream inFile;
  bool failed = false;
  string fileName;
  string phrase;
  string bottomToTop;
  stringstream ss;
  char value;
  int numOfPalindroms = 0;

  cout << "Please provide a file name: ";
  cin >> fileName;

  inFile.open(fileName);
  failed = inFile.fail();

  if(!failed) {
    while(getline(inFile, phrase)) {
      ss.str(phrase);
      while(ss >> value) {
        if(isalpha(value) != 0) { // only pushes characters into the stack
          line.push(tolower(value));
          bottomToTop += tolower(value);
        }
      }

      cout << phrase << " is ";
      if(line.isPalindrom(bottomToTop))  {
        cout << "a palindrom" << endl;
        numOfPalindroms++;
      } else {
        cout << "NOT a palindrom" << endl;
      }
      cout << endl;
      bottomToTop = "";
      ss.clear();
      line.clearStack();
    }
  } else {
      numOfPalindroms = -1;
      cout << "Could not open file! " << endl;
  }

  inFile.close();
  return numOfPalindroms;
}
