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
