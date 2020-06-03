// Isabel Ovalles
// Queue.cpp

#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(int size)
{
  queueAray = new int[num];
  queueSize = size;
  front = -1;
  rear = -1;
  numElements = 0;
}

Queue::~Queue()
{
  delete [] queueAray;
}

Queue::enqueue(int num)
{
  if(isFull()) {
    cout << "Queue is full!" << endl;
  } else {
    // finding new rear
    rear++;
    queueAray[rear] = num;
    numElements++;
  }
}

Queue::dequeue()
{
  int num;

  if(isEmpty()) {
    cout << "Queue is empty!" << endl;
  } else {
    front++;
    num = queueAray[front];
    numElements--;
  }
  return num;
}

Queue::isEmpty()
{
  return numElements > 0;
}

Queue::isFull()
{
  return numElements < queueSize;
}
