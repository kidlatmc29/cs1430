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

int main()
{
  //int k;
  Queue myQueue;

  cout << "adding values 1, 4 29, 100 to myQueue..." << endl;
  myQueue.enqueue(1);
  myQueue.enqueue(4);
  myQueue.enqueue(29);
  myQueue.enqueue(100);

  cout << "removing all values from queue..." << endl;
  while(!myQueue.isEmpty()) {
    cout << myQueue.dequeue() << " ";
  }
  cout << endl;

  cout << "Terminating programing... Goodbye" << endl;
  return 0;
}
