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
    Stack(int size);
    ~Stack();

    // operations
    void push(int num);
    int pop();
    void clearStack();
    
    bool isEmpty();
    bool isFull();
};
