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

void reverseIntegers(Queue& intQueue, int k);

void printQueue(Queue intQueue);
// takes in a queue object and creates a copy of it to dequeue values to print

void printStack(Stack stackToPrint);
// takes in a stack object and creates a copy of it to pop values to print

int main()
{
	int k;
	Queue a(MAX_SIZE);
  Queue b(3);

	cout << endl << endl << "- Welcome to hw5 -" << endl << endl;

  k = 5;
	cout << "Testing queue: [1 2 3 4 5 6 7 8 9 10] - k = " << k << endl;
  for (int count = 1; count <= MAX_SIZE; count++) {
		a.enqueue(count);
	}
	reverseIntegers(a, k);
  cout << endl;

  // k = 5;
  // cout << "Testing queue [1 2 3 4 5 6 7 8 9 10] - k " << k << endl;
  // reverseIntegers(a, k);
  // cout << endl;

  k = 3;
  cout << "Testing queue [1 2 3] - k = " << k << endl;
  for(int count = 1; count <= 3; count++) {
    b.enqueue(count);
  }
  reverseIntegers(b, k);
  cout << endl;

  k = -1;
  cout << "Testing queue [1 2 3] - k = " << k << endl;
  reverseIntegers(b, k);
  cout << endl;

  k = 11;
  cout << "Testing queue [1 2 3 4 5 6 7 8 9 10] - k = " << k << endl;
  reverseIntegers(a, k);
  cout << endl;



	cout << endl << "Terminating programing... Goodbye" << endl << endl << endl;
	return 0;
}

void reverseIntegers(Queue& intQueue, int k)
{
	int temp;
	Queue final(intQueue.getSize());

  if(k > 0 && k <= final.getSize()) {
	   // Get the integers to reverse
	 Stack reverse(k);
	 for (int i = 0; i < k; i++) {
		  reverse.push(intQueue.dequeue());
	 }

	 // making a copy of original queue
	 Queue originalVals(intQueue);

	 // putting reverse vals and original vals final
	 while (!reverse.isEmpty()) {
		  temp = reverse.pop();
		  final.enqueue(temp);
	 }

	 while(!originalVals.isEmpty()) {
		  temp = originalVals.dequeue();
		  final.enqueue(temp);
	   }
	  cout << "Reversed Queue: " << endl;
	 printQueue(final);
 } else if (k < 0) {
    cout << "K must be a non-negative integer! " << endl;
  } else {
    cout << "K must be less than or equal to the number of elements in the "
         << "queue! " << endl;
  }
}

void printQueue(Queue queueToPrint)
{
	Queue temp(queueToPrint);

	cout << "[ ";
	while (!temp.isEmpty()) {
		cout << temp.dequeue() << " ";
	}
	cout << "]" << endl;
}

void printStack(Stack stackToPrint)
{
	Stack temp(stackToPrint);
	cout << "[ ";
	while (!temp.isEmpty()) {
		cout << temp.pop() << " ";
	}
	cout << "]" << endl;
}
