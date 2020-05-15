// Isabel Ovalles
// Message.h

#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

using namespace std;

class Message {
  public:
    Message();
    void print()const;
    void append(char l, int p);
    bool isEmpty();
    // delete node
    // search for data
  private:
    class MessageNode {
      public:
        MessageNode(char val = ' ', int num = 0);
        int position; // stores number given
        char letter; // stores character given
        MessageNode* next = nullptr;
    };
    MessageNode* head = nullptr;
};

#endif
