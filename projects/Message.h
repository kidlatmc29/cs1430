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
    void append(int p, char l);
    bool isEmpty();
    // delete node
    // search for data
  private:
    class MessageNode {
      public:
        MessageNode(int position = 0, char letter = ' ');
        int position; // stores number given
        char letter; // stores character given
        MessageNode* next;
    };
    MessageNode* head;
};

#endif
