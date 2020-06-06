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
// takes in a queue object and creates a copy of it to dequeue values to print

void printStack(Stack stackToPrint);
// takes in a stack object and creates a copy of it to pop values to print

int main()
{
  int k = 3;
  Queue integers(MAX_SIZE);

  cout << endl << endl << "- Welcome to hw5 -" << endl << endl;

  cout << "Testing for queue: [0 1 2 3 4 5 6 7 8 9]" << endl
       << "k = " << k << endl;

  for(int count = 0; count < MAX_SIZE; count++) {
    integers.enqueue(count);
  }

  reverseIntgers(integers, k);

  cout << "Reversed integers: ";

  cout << "Terminating programing... Goodbye" << endl;
  return 0;
}

void reverseIntgers(Queue& intQueue, int k)
{
  int temp;
  Queue final(MAX_SIZE);

  // Get the integers to reverse
  Stack reverse(k);
  for(int i = 0; i < k; i++) {
    reverse.push(intQueue.dequeue());
  }

  // making a copy of original queue
  Queue orignalVals(intQueue);

  // putting reverse vals and original vals final
  while(!reverse.isEmpty()) {
    temp = reverse.pop();
    final.enqueue(temp);
  }


  //  while(!orignalVals.isEmpty()) {
  //   temp = orignalVals.dequeue();
  //   final.enqueue(temp);
  // }
  cout << "final queue: " << endl;
  printQueue(final);
}

void printQueue(Queue queueToPrint)
{
  Queue temp(queueToPrint);

  cout << "[ ";
  while(!temp.isEmpty()) {
    cout << temp.dequeue() << " ";
  }
  cout << "]" << endl;
}

void printStack(Stack stackToPrint)
{
  Stack temp(stackToPrint);
  cout << "[ ";
  while(!temp.isEmpty()) {
    cout << temp.pop() << " ";
  }
  cout << "]" << endl;
}
