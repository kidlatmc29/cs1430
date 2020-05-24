// Isabel Ovalles
// hw4.cpp

#include <iostream>
#include <fstream>
#include "Stack.h"

using namespace std;

bool readFile();

int main()
{
  Stack* myStack = new Stack();
  cout << endl << endl;
  cout << "Welcome to hw4: " << endl;

  cout << "pushing bob in myStack " << endl;
  myStack->push('b');
  myStack->push('o');
  myStack->push('b');

  cout << "popping stack: " << endl;
  cout << myStack->pop();
  cout << myStack->pop();
  cout << myStack->pop();

  cout << "Terminating program. Goodbye....";
  cout << endl << endl;
  return 0;
}

bool readFile()
{
  return true;
}
