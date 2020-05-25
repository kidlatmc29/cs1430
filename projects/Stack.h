// Isabel Ovalles
// Stack.h

#include <iostream>
#define SPACE 5
using namespace std;

class Stack {
private:
  char* characters = new char[SPACE];
  int top;
  int size;
 public:
   Stack();
   void push(char value);
   char pop();
   void resize();
   bool isEmpty();
   bool isFull();
   void print();
};
