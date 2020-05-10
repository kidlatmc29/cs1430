// Isabel Ovalles
// Message.h

#ifdef MESSAGE_H
#define MESSAGE_H
#include <iostream>

using namespace std;

class Message {
  public:
    Message();
    // add node
    // delete node
    // search for data
  private:
    class MessageNode {
      public:
        MessageNode(int num = 0, char letter = ' ');
        int num; // stores number given
        char letter; // stores character given
        MessageNode* next;
    }
    MessageNode* head;
};

#endif
