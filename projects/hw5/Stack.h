// Isabel Ovalles
// Stack.h

#include <iostream>

using namespace std;

class Stack {
  private:
    int *stackArray;
    int top;
    int size;

  public:
    // constructor
    Stack(int size);
    // copy constructor
    Stack(const Stack& original);
    //deconstructor
    ~Stack();

    // operations
    void push(int num);
    int pop();
    void clearStack();

    bool isEmpty();
    bool isFull();
};
