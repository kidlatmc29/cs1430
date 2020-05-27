// Isabel Ovalles
// Stack.cpp

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
  top = -1;
  size = 0;
}

void Stack::push(char value)
{
  if(isFull()) {
    resize();
  }

  top++;
  //cout << "pushing " << value << endl;
  characters[top] = value;
}

char Stack::pop()
{
  char poppedChar = characters[top];
  top--;
  return poppedChar;
}

// only here for debugging
void Stack::print()
{
  for(int index = 0; index < top; index++) {
    cout << characters[index];
  }
  cout << endl;
}

void Stack::resize()
{
  char* newStack = new char[size + SPACE];

  for(int index = 0; index < size; index++) {
    newStack[index] = characters[index];
  }

  size += SPACE;

  delete[] characters;
  characters = newStack;
}

bool Stack::isEmpty()
{
  bool empty;
  if(top == -1) {
    empty = true;
  } else {
    empty = false;
  }
  return empty;
}

bool Stack::isFull()
{
  bool full;
  if(top == size - 1)
  {
    full = true;
  } else {
    full = false;
  }
  return full;
}

void Stack::clearStack()
{
  char* emptyStack = new char[SPACE];
  delete[] characters;
  top = -1;
  size = 0;
  characters = emptyStack;
}
