// Isabel Ovalles
// hw4.cpp

#include <iostream>
#include <fstream>
#include <stringstream>
#include "Stack.h"

using namespace std;

bool readFile();

int main()
{
  Stack myStack = new Stack();
  cout << endl << endl;
  cout << "Welcome to hw4: " << endl;
  
  cout << "pushing bob in myStak " << endl;
  myStack.push('b');
  myStack.push('o');
  myStack.push('b');

  cout << "popping stack: " << endl;
  while(myStack.isEmpty()) {
    cout << myStack.pop();
  }

  cout << "Terminating program. Goodbye....";
  cout << endl << endl;
  return 0;
}

bool readFile()
{
  return true;
}
