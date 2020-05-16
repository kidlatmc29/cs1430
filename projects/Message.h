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
    void insert(char character, int position);
    bool isEmpty();
  private:
    class MessageNode {
      public:
        MessageNode(char character = ' ', int position = 0);
        int position; // stores number given
        char character; // stores character given
        MessageNode* next = nullptr;
    };
    MessageNode* head = nullptr;
};

#endif
