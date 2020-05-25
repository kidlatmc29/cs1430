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
//  "Bob - Is a palindrom", "No one. - Is not a palindrom", "Racecare - Is a
//  "palindrom"

#include <iostream>
#include <fstream>
#include <sstream>
#include "Stack.h"

using namespace std;

const char YES = 'y';

bool readFile();
bool isPalindrom(Stack* line);

int main()
{
  Stack myStack;

  cout << endl << endl;
  cout << "Welcome to hw4: " << endl;

  cout << "Terminating program. Goodbye....";
  cout << endl << endl;
  return 0;
}

bool readFile(Stack& myStack)
{
  fstream inFile;
  string fileName;
  sstream ss;
  string line;
  char value;
  bool failed = true;

  cout << "Please provide a file name: ";
  cin >> fileName;

  inFile.open(fileName);
  failed =inFile.fail();

  if(!failed) {
    while(getline(inFile, line)) {
      ss.str(line);
      
      for(int index = 0; index < line.length - 1; index++) {
        ss >> value;
        myStack.push(value);
      }

      if(isPalindrom(myStack)) {
      cout << line << " - " << "is a palindrom" << endl;
      } else {
        cout << line << " - " << "is not a palindrom" << endl;
      }
    }
  }
  return failed;
}

bool isPalindrom(Stack myStack, string originalLine)
{
  string poppedLine;

  while(!(myStack.isEmpty)) {
    poppedLine += myStack.pop();
  }
  return poppedLine == originalLine;
}
