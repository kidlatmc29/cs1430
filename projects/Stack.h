// Isabel Ovalles
// Stack.h

#include <iostream>

using namespace std;

class Stack {
 private:
   class StackNode {
     StackNode(char value);
     char data;
     StackNode *next;
   };
   StackNode *top;
 public:
   Stack();
   void push(char value);
   char pop();
   bool isEmpty();
};
