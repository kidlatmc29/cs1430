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

Stack::~Stack(){
  clearStack();
}

void Stack::push(char value)
{
  if(isFull()) {
    resize();
  }

  top++;
  characters[top] = value;
}

char Stack::pop()
{
  char poppedChar = characters[top];
  top--;
  return poppedChar;
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
  return top == -1;
}

bool Stack::isFull()
{
  return (top == (size -1));
}

void Stack::clearStack()
{
  char* emptyStack = new char[SPACE];
  delete[] characters;
  top = -1;
  size = 0;
  characters = emptyStack;
}

bool Stack::isPalindrom(string original)
{
  string topToBottom;

  while(!this->isEmpty()) {
    topToBottom += this->pop();
  }
  return original == topToBottom;
}
