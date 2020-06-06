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

Queue::Queue(const Queue& original)
{
  queueArray = new int[original.numElements];

  front = original.front;
  rear = original.rear;
  numElements = original.numElements;

  for(int index = front; index <= rear; index++) {
    queueArray[index] = original.queueArray[index];
  }
  queueSize = numElements;
}

void Queue::enqueue(int num)
{

  if((isFull())) {
    cout << "Queue is full!" << endl;
    exit(1);
  } else {
    // finding new rear
    rear = rear + 1;
    queueArray[rear] = num;
    numElements++;
  }
}

int Queue::dequeue()
{
  int num;
  if((isEmpty())){
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

void Queue::clear()
{
  front = queueSize - 1;
  rear = queueSize - 1;
  numElements = 0;
}

bool Queue::isEmpty()
{
  return numElements == 0;
}

bool Queue::isFull()
{
  return numElements == queueSize;
}

int Queue::getSize()
{
  return queueSize;
}
