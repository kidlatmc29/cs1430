// Isabel Ovalles
// hw5.cpp

// Purpose: Reverses the order of the first k integers in a integer queue.
// Input: The section of the queue to be reverses is given by the integer k.
// Processing: The section of the queue up to the integer k is then copied into
//  a integer stack. Then a new queue is created by popping the contents
//  of the stack into the new queue followed by the rest of the values in the
//  original queue.
// Output: The new integer queue is printed to the screen with the value of k.
// Example:
//  k = 4 and the queue is [1 2 3 4] -> [4 3 2 1]
//  k = 3 and the queue is [10 12 13 23 20] -> [13 12 10 23 20]
// k = 0 and queue is [1, 2, 3] -> [1 2 3]

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

const int MAX_SIZE = 10;

// void printQueue(Queue intQueue);
void printStack(Stack stackToPrint);

int main()
{
  cout << endl << endl << "- Welcome to hw5 -" << endl;
  Stack myStack(MAX_SIZE);

  cout << "adding 10 values to myStack..." << endl;
  for(int i = 1; i <= MAX_SIZE; i++) {
    myStack.push(i);
  }
  printStack(myStack);

  cout << "Terminating programing... Goodbye" << endl;
  return 0;
}

/**
void printQueue(Queue queueToPrint)
{
  cout << "[ ";
  while(!queueToPrint.isEmpty()) {
    cout << queueToPrint.dequeue() << " ";
  }
  cout << "]" << endl;
}
**/

void printStack(Stack stackToPrint)
{
  cout << "[ ";
  while(!stackToPrint.isEmpty()) {
    cout << stackToPrint.pop() << " ";
  }
  cout << " ]" << endl;
}
