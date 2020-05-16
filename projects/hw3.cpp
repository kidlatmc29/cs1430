// Isabel Ovalles
// hw3.cpp

// Purpose: This program allows the user to decode a message within a data file.
// Input: The user provides the file name to decode.
// Processing: The data inside the file is used to create a linked list. Each
//  character and position creates a new node that is inserted in non ascending
//  order.
// Output: Once the link listed is correctly created, the hhdden message is
//  printed to the screen. The user will be asked if the process should be
//  repeated for a new file.
// Example: The user inputs the file name cat.txt. It contains the phrase
//  "Hello cat!" with the corresponding positions of each character. Once
//  the file has been read and all the nodes have been inserted in the correct
//  order, the message "Hello cat!" will be displayed and the user will be
//  prompted if they have another file to decode or to end the program.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <string>
#include <sstream>
#include "Message.h"

using namespace std;

const char YES = 'y';

bool readFile(Message txt);

int main()
{
  bool badFile = true;

  cout << endl << endl;
  cout << "- Welcome to the decoding program - " << endl;
  Message myMessage;

  badFile = readFile(myMessage);

  if(badFile) {
    cout << "Problem with file! Cannot open!" << endl;
  } else {
    cout << "File is good! Decoding message..." << endl;
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
      letter = line[0]; // first spot is always the character
      ss.str(line.substr(2, line.length() - 1)); // after middle space is int
      ss >> position;
      txt.insert(letter, position);
    }
  }

  inFile.close();
  return failed;
}
