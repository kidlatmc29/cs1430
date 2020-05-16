// Isabel Ovalles
// hw3.cpp

// Purpose: This program allows the user to decode a message within a
//  encoded data file.
// Input: The user provides the file name to decode.
// Processing: The data inside the file is used to create a linked list.
// Output: Once the link listed is correctly created, it will spell out the
//  hidden message and print it to the screen. The user will be asked if the
//  process should be repeated for a new file.
// Example:

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <string>
#include <sstream>
#include "Message.h"

using namespace std;

const char WS = ' ';
const char ENDL = '\n';

bool readFile(Message txt);
int countSpaces(string line);

int main()
{
  bool badFile = true;
  cout << endl << endl;
  cout << "- Welcome to the decoding program - " << endl;
  Message myMessage;

  badFile = readFile(myMessage);
//  cout << validFile << endl;
  if(badFile) {
    cout << "Problem with file! Cannot open!" << endl;
  } else {
    cout << "File is good! Decoding message..." << endl;
      // sort the characters
    myMessage.print();
  }

  // ask user again for a new file name or quit

  cout << endl << endl;
  cout << "Terminating programing.... Goodbye....";
  cout << endl << endl;
  return 0;
}

bool readFile(Message txt)
{
  ifstream inFile;
  stringstream ss;
  string fileName = " ";
  bool failed = false;
  string line;
  int position = 0;
  char letter = ' ';


  cout << "Please input a file name with extension: ";
  cin >> fileName;

  inFile.open(fileName);
  failed = inFile.fail();

  if(!failed) {
    while(getline(inFile, line)) {
      ss.clear();
      letter = line[0];
      ss.str(line.substr(2, line.length() - 1));
      ss >> position;
      txt.insert(letter, position);
    }
  }

  inFile.close();
  return failed;
}
