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
   ~Stack();
   void push(char value);
   char pop();
   void resize();
   bool isEmpty();
   bool isFull();

   void clearStack();
   bool isPalindrom(string original);
   //returns true if the orignal string matches the same order as the Stack
   //  being popped
   // returns false otherwise
};
