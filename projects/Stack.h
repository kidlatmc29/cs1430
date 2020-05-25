// Isabel Ovalles
// Stack.h

#include <iostream>

using namespace std;

class Stack {
private:
  

  Node *top;

 public:
   Stack();
   void push(char value);
   char pop();
   bool isEmpty();
};
