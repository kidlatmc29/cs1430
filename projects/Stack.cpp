// Isabel Ovalles
// Stack.cpp

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
  top = nullptr;
}

void Stack::push(char value)

}

char Stack::pop()
{
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
