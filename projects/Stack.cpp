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
{
  Node* newNode = new Node;
  newNode->data = value;
  newNode->next = nullptr; 

  if(isEmpty()) {
    top = newNode;
  } else {
    newNode->next = top;
    top = newNode;
  }
}

char Stack::pop()
{
  char val;
  Node *temp;
  if(isEmpty()) {
    cout << "This stack is empty." << endl;
  } else {
    val = top->data;
    temp = top->next;
    delete top;
    top = temp;
  }
  return val;
}

bool Stack::isEmpty()
{
  bool empty;
  if(!top) {
    empty = true;
  } else {
    empty = false;
  }
  return empty;
}
