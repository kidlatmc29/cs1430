// Isabel Ovalles
// Stack.h

#include <iostream>

using namespace std;

class Stack {
private:
  struct Node {
    char data;
    Node *next;
  };

  Node *top;

 public:
   Stack();
   void push(char value);
   char pop();
   bool isEmpty();
};
