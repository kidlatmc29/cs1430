// Isabel Ovalles
// Stack.cpp

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack(int size)
{
  stackArray = new int[size];
  top = -1;
  this->size = size;
}

Stack::Stack(const Stack& original)
{
  stackArray = new int[original.size];

  top = original.top;
  size = original.size;

  for(int index = 0; index < original.size; index++) {
    stackArray[index] = original.stackArray[index];
  }
}

Stack::~Stack()
{
  delete[] stackArray;
}

void Stack::push(int num)
{
  if(isFull()) {
    cout << "Stack is full! " << endl;
  } else {
    top++;
    stackArray[top] = num;
  }
}

int Stack::pop()
{

  if(isEmpty()) {
    return 0;
  }
  
  int poppedInt = stackArray[top];
  top--;
  return poppedInt;
}

bool Stack::isEmpty()
{
  return top == -1;
}

bool Stack::isFull()
{
  return (top == (size - 1));
}

void Stack::clearStack()
{
  top = -1;
  size = 0;
}
