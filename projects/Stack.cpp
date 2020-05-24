// Isabel Ovalles
// Stack.cpp

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
  top = nullptr;
}

Stack::Stack::StackNode(char value)
{
  data = value;
  next = nullptr;
}
