// Isabel Ovalles
// hw5.cpp

// Purpose:
// Input:
// Processing:
// Output:
// Example:

#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

void printQueue(Queue intQueue);

int main()
{
  //int k;
  Queue myQueue(4);
  printQueue(myQueue);


  cout << "adding values 1, 4 29, 100 to myQueue..." << endl;
  myQueue.enqueue(1);
  myQueue.enqueue(4);
  myQueue.enqueue(29);
  myQueue.enqueue(100);
  printQueue(myQueue);

  cout << endl;
  cout << "removing 2 values from myQueue... " << endl;
  int val1 = myQueue.dequeue();
  int val2 = myQueue.dequeue();
  cout << "values removed were " << val1 << " " << val2 << endl;
  printQueue(myQueue);

  cout << "Terminating programing... Goodbye" << endl;
  return 0;
}

void printQueue(Queue queueToPrint)
{
  cout << "[ ";
  while(!queueToPrint.isEmpty()) {
    cout << queueToPrint.dequeue() << " ";
  }
  cout << "]" << endl;
}
