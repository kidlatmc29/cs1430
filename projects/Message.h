// Isabel Ovalles
// Message.h

#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

using namespace std;

class message {
  public:
    message();
    // null constructor for Message
    void print()const;
    // prints the message from characters stored in MessageNodes
    void insert(char character, int position);
    // reads in given character and position, and creates a MessageNode from it
    // finds the correct spot to insert the Message in based on position
    // inserts based on position in a non ascending order
    bool isEmpty();
    // returns true if head is nullptr
    // else return false
    void clearList();
    // removes all nodes from the list to make the list empty
    // sets head to nullptr
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
