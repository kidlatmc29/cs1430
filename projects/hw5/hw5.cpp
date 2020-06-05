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

void reverseIntgers(Queue& intQueue, int k);
void printQueue(Queue intQueue);
void printStack(Stack stackToPrint);

int main()
{
  cout << endl << endl << "- Welcome to hw5 -" << endl;
  Queue myQueue(MAX_SIZE);
  //int k = 0;

  cout << "adding 10 values to myQueue " << endl;
  for(int i = 1; i <= MAX_SIZE; i++) {
    myQueue.enqueue(i);
  }

  cout << "Testing k = 0 on myQueue" << endl;
  //reverseIntgers(myQueue, k);

  printQueue(myQueue);

  cout << "Terminating programing... Goodbye" << endl;
  return 0;
}

void reverseIntgers(Queue& intQueue, int k)
{
  // Get the integers to reverse
  Stack reverse(MAX_SIZE);
  for(int i = 0; i < k; i++) {
    reverse.push(intQueue.dequeue());
  }

  // Save the rest of the integers in a queue
  Queue temp(MAX_SIZE);
    while(!intQueue.isEmpty()) {
        temp.enqueue(intQueue.dequeue());
    }

  // Put back the reverse and original values in the queue
  while(!reverse.isEmpty()) {
    intQueue.enqueue(reverse.pop());
  }

  while(!temp.isEmpty()) {
    intQueue.enqueue(temp.dequeue());
  }
}

void printQueue(Queue queueToPrint)
{
  cout << "[ ";
  while(!queueToPrint.isEmpty()) {
    cout << queueToPrint.dequeue() << " ";
  }
  cout << "]" << endl;
}

void printStack(Stack stackToPrint)
{
  cout << "[ ";
  while(!stackToPrint.isEmpty()) {
    cout << stackToPrint.pop() << " ";
  }
  cout << " ]" << endl;
}
