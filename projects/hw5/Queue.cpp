// Isabel Ovalles
// Queue.cpp

#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(int size)
{
  queueArray = new int[size];
  queueSize = size;
  front = -1;
  rear = -1;
  numElements = 0;
}

Queue::~Queue()
{
  delete [] queueArray;
}

void Queue::enqueue(int num)
{
  if(!(isFull())) {
    cout << "Queue is full!" << endl;
    exit(1);
  } else {
    // finding new rear
    rear = rear + 1;
    queueArray[rear] = num;
    numElements++;
    cout << "added " << queueArray[rear] << " to index " << rear << endl;
  }
}

int Queue::dequeue()
{
  int num;
  if(!(isEmpty())){
    cout << numElements << " ";
    cout << "Queue is empty" << endl;
    exit(1);
  } else {
    // moving front up
    front = front + 1;
    num = queueArray[front];
    numElements--;
  }

  return num;
}

bool Queue::isEmpty()
{

  return numElements > 0;
}

bool Queue::isFull()
{
  return numElements < queueSize;
}

void Queue::printArr()
{
    cout << "[";
    for(int index = 0; index < numElements; index++) {
      cout << queueArray[index] << " ";
    }
    cout << "]" << endl;
}
